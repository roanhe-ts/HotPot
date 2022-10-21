#include <chrono>
#include <mutex>
#include <iostream>
#include <shared_mutex>
#include <thread>

using ReadLock = std::shared_lock<std::shared_timed_mutex>;
using WriteLock = std::unique_lock<std::shared_timed_mutex>;

int main()
{
    std::shared_timed_mutex smutex;

    auto writer = [&]() {
        WriteLock wlock(smutex, std::defer_lock);
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Writer try lock\n";

        if (wlock.try_lock_for(std::chrono::seconds(5)))
            std::cout <<"Writer try lock succeeded\n";
        else
            std::cout << "Writer try lock failed\n";
    };

    auto reader = [&]() {
        ReadLock rlock(smutex, std::defer_lock);
        std::cout << "Reader try lock\n";
        rlock.lock();

        std::this_thread::sleep_for(std::chrono::seconds(10));

        std::cout << "Reader exited\n";
    };

    std::thread t2(reader);

    std::thread t1(writer);
    

    t1.join();
    t2.join();

    return 0;
}
#include <iostream>
#include <filesystem>

namespace fs = std::__fs::filesystem;

int main()
{
    auto path1 = fs::path("/tmp") / "directory";
    auto path2 = fs::path("/tmp") / "/";

    std::cout << path1.c_str() << std::endl;
    std::cout << path2.c_str() << std::endl;
    return 0;
}
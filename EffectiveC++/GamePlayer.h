#include <iostream>
#include <string>

class Gameplayer {
private:
    static const int  NumTurns = 5;
    int scores[NumTurns];

public:
    Gameplayer(){
        std::cout << "Gameplayer default constructor\n";
    }

    Gameplayer(const Gameplayer& rhs) {
        std::cout << "Gameplayer copy constructor\n";
    }

    const Gameplayer& operator=(const Gameplayer& rhs) {
        std::cout << "Gameplayer assignment operator\n";
        return *this;
    }

    void printAddress(){
        std::cout << "Address: " << &NumTurns << std::endl;
    }
};

class ABEntry{
public:
    ABEntry(const std::string& name_, const std::string& address_,
            const Gameplayer& gameplayer_);

    ABEntry boolFunction();

private:
    std::string name;
    std::string address;
    Gameplayer gameplayer;
    int numTimesConsuled;
};


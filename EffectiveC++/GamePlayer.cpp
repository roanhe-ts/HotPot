#include "GamePlayer.h"

//const int Gameplayer::NumTurns;

ABEntry::ABEntry(const std::string &name_, const std::string &address_, const Gameplayer &gameplayer_){
//            : name(name_), address(address_), gameplayer(gameplayer_)
    name = name_;
    address = address_;
    gameplayer = gameplayer_;
}

ABEntry ABEntry::boolFunction() {

}
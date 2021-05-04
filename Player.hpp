#pragma once
#include <iostream>
using namespace std;
#include "Board.hpp"


namespace pandemic{
    class Player{
        public:
        Player();
        City city;
        Player(Board board, City city);
        Player(Board board, City city, int num);
        Player& drive(City city);
        Player& fly_direct(City city);
        Player& fly_charter(City city);
        Player& fly_shuttle(City city);
        void build();
        void discover_cure(Color color);
        Player& treat(City city);
        std::string role();
        Player& take_card(City city);
    };
}
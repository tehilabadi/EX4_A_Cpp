#pragma once
#include <iostream>
using namespace std;
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{
    class Researcher:public Player{
        public:
        Researcher(Board board, City city,int num);
        Researcher(Board board, City city);
    };
}
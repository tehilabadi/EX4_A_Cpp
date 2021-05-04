#pragma once
#include <iostream>
using namespace std;
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{
    class GeneSplicer:public Player{
        public:
        GeneSplicer(Board board, City city);
    };
}


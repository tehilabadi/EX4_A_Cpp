#pragma once
#include <iostream>
using namespace std;
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{
    class Dispatcher:public Player{
        public:
        Dispatcher(Board board, City city);
    };
}


#pragma once
#include <iostream>
#include <unordered_map>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Board{
    public:
    static int world;
    int& operator[](const City city);
    bool is_clean();
    void remove_cures();
    friend std::ostream& operator<< (std::ostream& output, const Board& c);
    friend std::istream& operator>> (std::istream& input , Board& c);
    };
}
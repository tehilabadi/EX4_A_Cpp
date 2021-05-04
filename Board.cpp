#include <iostream>
using namespace std;
#include <unordered_map>
#include "Board.hpp"

namespace pandemic{
    int c = 2;
    // Board::Board(){
        
    // };
    
    int& Board::operator[](const City city){
        return c;
    }
    bool Board::is_clean(){
        return true;
    }
    void Board::remove_cures(){
        int x;
    }
    std::ostream& operator<< (std::ostream& output, const Board& c){
        return output;
    }
    std::istream& operator>> (std::istream& input , Board& c){
        return input;
    }
}
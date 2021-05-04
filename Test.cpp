#include "doctest.h"
using namespace doctest;
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Board.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
TEST_CASE("same units size") {
    Board board;  // Initialize an empty board (with 0 disease cubes in any city).
	board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
	board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
	board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
	board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
	board[City::Chicago] = 1;
    Player player(board,City::Algiers);
    CHECK_THROWS(player.fly_direct(City::Chicago));
    CHECK_THROWS(player.fly_charter(City::Chicago));
    CHECK_NOTHROW(player.take_card(City::Paris));
    CHECK_NOTHROW(player.fly_direct(City::Paris));
    CHECK_NOTHROW(player.take_card(City::Paris));
    CHECK_NOTHROW(player.fly_charter(City::Chicago));
    CHECK_NOTHROW(player.take_card(City::Paris));
    CHECK_THROWS(player.build());
    CHECK_NOTHROW(player.take_card(City::Chicago));
    CHECK_NOTHROW(player.build());
    CHECK_NOTHROW(player.take_card(City::Algiers));
    CHECK_NOTHROW(player.take_card(City::Baghdad));
    CHECK_NOTHROW(player.take_card(City::Chennai));
    CHECK_NOTHROW(player.take_card(City::Delhi));
    CHECK_NOTHROW(player.take_card(City::Istanbul));
    CHECK_NOTHROW(player.discover_cure(pandemic::Color::Black));
    CHECK_NOTHROW(player.take_card(City::Algiers));
    CHECK_NOTHROW(player.take_card(City::Baghdad));
    CHECK_NOTHROW(player.take_card(City::Chennai));
    CHECK_NOTHROW(player.take_card(City::Delhi));
    CHECK_NOTHROW(player.take_card(City::Istanbul));
    CHECK_NOTHROW(player.discover_cure(pandemic::Color::Black));
    
















}


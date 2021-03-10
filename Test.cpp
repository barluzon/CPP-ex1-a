#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <algorithm>

using namespace std;
using namespace ariel;


TEST_CASE("Good snowman code"){

    CHECK(snowman(11111111) == string("      \n _===_\n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(21111111) == string("  ___ \n .....\n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(31111111) == string("   _  \n  /_\\ \n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(41111111) == string("  ___ \n (_*_)\n (.,.) \n<( : )>\n ( : )"));

    CHECK(snowman(21222222) == string("  ___ \n .....\n\\(o,o)/\n (] [) \n (\" \")"));
    CHECK(snowman(22222222) == string("  ___ \n .....\n\\(o.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(23222222) == string("  ___ \n .....\n\\(o_o)/\n (] [) \n (\" \")"));
    CHECK(snowman(24222222) == string("  ___ \n .....\n\\(o o)/\n (] [) \n (\" \")"));

    CHECK(snowman(33133333) == string("   _  \n  /_\\ \n (._O) \n/(> <)\\\n (___)"));
    CHECK(snowman(33233333) == string("   _  \n  /_\\ \n (o_O) \n/(> <)\\\n (___)"));
    CHECK(snowman(33333333) == string("   _  \n  /_\\ \n (O_O) \n/(> <)\\\n (___)"));
    CHECK(snowman(33433333) == string("   _  \n  /_\\ \n (-_O) \n/(> <)\\\n (___)"));

    CHECK(snowman(44414444) == string("  ___ \n (_*_)\n (- .) \n (   ) \n (   )"));
    CHECK(snowman(44424444) == string("  ___ \n (_*_)\n (- o) \n (   ) \n (   )"));
    CHECK(snowman(44434444) == string("  ___ \n (_*_)\n (- O) \n (   ) \n (   )"));
    CHECK(snowman(44444444) == string("  ___ \n (_*_)\n (- -) \n (   ) \n (   )"));

    CHECK(snowman(11421411) == string("      \n _===_\n (-,o) \n<( : ) \n ( : )"));
    CHECK(snowman(11422411) == string("      \n _===_\n (-,o) \n\\( : ) \n ( : )"));
    CHECK(snowman(11423411) == string("      \n _===_\n (-,o) \n/( : ) \n ( : )"));
    CHECK(snowman(11424411) == string("      \n _===_\n (-,o) \n ( : ) \n ( : )"));

    CHECK(snowman(22344131) == string("  ___ \n .....\n (O.-) \n (> <)>\n ( : )"));
    CHECK(snowman(22344231) == string("  ___ \n .....\n (O.-) \n (> <)/\n ( : )"));
    CHECK(snowman(22344331) == string("  ___ \n .....\n (O.-) \n (> <)\\\n ( : )"));
    CHECK(snowman(22344431) == string("  ___ \n .....\n (O.-) \n (> <) \n ( : )"));

    CHECK(snowman(23334412) == string("  ___ \n .....\n (O_O) \n ( : ) \n (\" \")"));
    CHECK(snowman(23334422) == string("  ___ \n .....\n (O_O) \n (] [) \n (\" \")"));
    CHECK(snowman(23334432) == string("  ___ \n .....\n (O_O) \n (> <) \n (\" \")"));
    CHECK(snowman(23334442) == string("  ___ \n .....\n (O_O) \n (   ) \n (\" \")"));

    CHECK(snowman(41221141) == string("  ___ \n (_*_)\n (o,o) \n<(   )>\n ( : )"));
    CHECK(snowman(41221142) == string("  ___ \n (_*_)\n (o,o) \n<(   )>\n (\" \")"));
    CHECK(snowman(41221143) == string("  ___ \n (_*_)\n (o,o) \n<(   )>\n (___)"));
    CHECK(snowman(41221144) == string("  ___ \n (_*_)\n (o,o) \n<(   )>\n (   )"));

}

TEST_CASE("Bad snowman code"){

    CHECK_THROWS(snowman(1111111));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(77777777));
    CHECK_THROWS(snowman(16123412));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(2184));
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(31422235));
    CHECK_THROWS(snowman(512341234));

}

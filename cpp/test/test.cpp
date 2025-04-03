#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../function/function.hpp"


int function(int number) {
    return(number + 2);
}

TEST_CASE("testing the factorial function") {
    CHECK(function(1) == 3);
    CHECK(function(0) == 2);
    CHECK(function(-3) == -1);
}

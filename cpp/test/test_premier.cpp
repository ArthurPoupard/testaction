-I cpp/functions#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "mainfunc.h"


int local(int number) {
    return(number + 2);
}

TEST_CASE("testing the local function") {
    CHECK(local(1) == 3);
    CHECK(local(0) == 2);
    CHECK(local(-3) == -1);
}

TEST_CASE("testing the local function") {
    CHECK(add(1, 4) == 5);
    CHECK(add(0, 2) == 2);
    CHECK(add(-3, 2) == -1);
}

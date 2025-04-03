#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "function.h"


int local(int number) {
    return(number + 2);
}

TEST_CASE("testing the local function") {
    CHECK(local(1) == 3);
    CHECK(local(0) == 2);
    CHECK(local(-3) == -1);
}

TEST_CASE("testing the other function") {
    CHECK(otherfunc(1) == 1);
    CHECK(otherfunc(0) == 0);
    CHECK(otherfunc(-3) == -3);
}

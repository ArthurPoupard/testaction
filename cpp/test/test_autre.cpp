#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


int local(int number) {
    return(number + 5);
}

TEST_CASE("testing the local function") {
    CHECK(local(1) == 6);
    CHECK(local(0) == 5);
    CHECK(local(-3) == 2);
}

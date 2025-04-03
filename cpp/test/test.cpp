#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int function(int number) {
    return(number + 2);
}

TEST_CASE("testing the factorial function") {
    CHECK(factorial(1) == 3);
    CHECK(factorial(0) == 2);
    CHECK(factorial(-3) == -1);
}

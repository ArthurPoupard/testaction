#include "mainfunc.h"
#include "gtest.h"
namespace {


TEST(FctTest, Negative) {

  EXPECT_EQ(1, add(-5, 6));
  EXPECT_EQ(1, add(-1, 0));
  EXPECT_GT(0, add(-1, -5));

}
}

#include "gtest/gtest.h"
#include "SquareRoot.h"

class SquareRootTest: public ::testing::Test{
protected:
	SquareRoot n;
};

TEST_F(SquareRootTest, PositiveNos) {
	ASSERT_EQ(18.0, n.squareroot(324.0));
}

TEST_F(SquareRootTest, Zeros) {
	ASSERT_EQ(0.0, n.squareroot(0.0));
}

TEST_F(SquareRootTest, FailureTest) {
	ASSERT_GT(-1, n.squareroot(-22.0));
}

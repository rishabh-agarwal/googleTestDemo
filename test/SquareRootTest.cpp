#include "gtest/gtest.h"
#include "SquareRoot.h"

class SquareRootTest: public ::testing::Test{
protected:
	SquareRoot n;
};

/*
 * TEST_F, is Test Fixture which mean using same data configuration for multiple test
 */
TEST_F(SquareRootTest, PositiveNos) {
	ASSERT_EQ(18.0, n.squareroot(324.0));
	ASSERT_EQ(25.4, n.squareroot(645.16));
	ASSERT_EQ(19.0, n.squareroot(361));
}

TEST_F(SquareRootTest, Zeros) {
	ASSERT_EQ(0.0, n.squareroot(0.0));
}


TEST_F(SquareRootTest, FailureTest) {
	ASSERT_GT(-1, n.squareroot(-22.0));
}

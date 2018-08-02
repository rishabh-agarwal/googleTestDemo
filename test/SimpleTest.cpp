#include "gtest/gtest.h"
#include "simpleClass.h"

class SimpleClassTest: public ::testing::Test{
protected:
	SimpleClass m;
};

TEST_F(SimpleClassTest, failingTest){
	ASSERT_TRUE(true);
}
TEST_F(SimpleClassTest,MyClassReturnZero){
    ASSERT_EQ(0, m.getZero());
}

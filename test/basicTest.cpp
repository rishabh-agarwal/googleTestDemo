#include <iostream>
#include "gtest/gtest.h"

using namespace std;

//BASIC ASSERTION
//To DISABLE A TEST PREFIX DISABLE_ in TestName
TEST (BASICASSERTION, SubTest_1)
{
	ASSERT_TRUE(1==1);
}

TEST (BASICASSERTION, SubTest_2)
{
	ASSERT_FALSE(1==2);
}


/*
 ASSERTION ARE OF THREE TYPE
 SUCCESS: POSTIVE RESPONSE - EXPECT AND ACTUAL BEHAVE SAME
 NON FATAL FAILURE - EXPECT_EQ(..)
 FATAL FAILURE - ASSERTION_EQ(..)
*/

TEST (FatalFailure, success)
{
	ASSERT_TRUE(1==1);
	cout<<"This line will be reached"<<endl;
}
TEST (FatalFailure, failure)
{
	ASSERT_FALSE(1==1);
	cout<<"This line won't be reached"<<endl;
}

TEST (NonFatalFailure, success)
{
	EXPECT_EQ(1,1);
	cout<<"This line will be reached"<<endl;
}
TEST (NonFatalFailure, failure)
{
	EXPECT_EQ(1,2);
	cout<<"This line will be reached and test should fail"<<endl;
}


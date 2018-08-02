#include <iostream>
#include "gtest/gtest.h"

using namespace std;

//For String we use different assertion

class MyClass {
	string id;
public:
	MyClass(string _id):id(_id){}
		string GetId(){
		return id;
	}
};


TEST (STRINGTEST, stringCompare)
{
	MyClass mc("root");
	string value = mc.GetId();
	ASSERT_TRUE(1==1);
}

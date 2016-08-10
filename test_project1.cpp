/*************************************************************************
	> File Name: test_project1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年08月10日 星期三 11时34分20秒
 ************************************************************************/

#include <iostream>
#include "gtest/gtest.h"

#include "project1.h"

//IndependentMethod as a test case - here ,we have 2 tests for this 1 test case
TEST(IndependentMethod,ResetsToZero){
    int i=3;
    independentMethod(i);
    EXPECT_EQ(0,i);
    i=12;
    independentMethod(i);
    EXPECT_EQ(0,i);
}
TEST(IndependentMethod,ResetsToZero2){
    int i=0;
    independentMethod(i);
    EXPECT_EQ(0,i);
}
//the fixture for testing class Project1. From google test primer
class Project1Test:public::testing::Test{
protected:
    //you can remove any or all of the following functions if its body is empty
    Project1Test(){
    //you can do set-up work from each test here
    
    }
    virtual ~ Project1Test(){
    //you can do clean-up work that doesn't throw exceptions here
    }

    //if the constructor and destructor are not enough for setting up and cleaning up each test, you can define the following methods
    virtual void SetUp(){
    //code here will be called immediately after the constructor (right before each test)
    }
    virtual void TearDown()
    {
    //code here will be called immediately after each test (right before the destructor)
    }
    
    //objects declared here can be used by all tests in the test case for Project1
    Project1 p1;
};
//test case must be called the class above 
//also note:use TEST_F instead of TEST to access the test fixture (from google test primer)
TEST_F(Project1Test,MethodBarDoesAbc){
    int i=0;
    p1.foo(i);//we have access to p1, declared in the fixture
    EXPECT_EQ(1,i);
}

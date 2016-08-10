/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年08月10日 星期三 11时32分01秒
 ************************************************************************/

#include<iostream>
#include "project1.h"
using namespace std;

int main(){
    cout<<"do stuf"<<endl;
    int x=4;
    cout<<x<<endl;
    independentMethod(x);
    cout<<x<<endl;
    Project1 p;
    p.foo(x);
    cout<<x<<endl;
    return 0;
}

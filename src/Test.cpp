/*
 * Test.cpp
 *
 *  Created on: 2014/2/5
 *      Author: AdamChen
 */
#include "Test.h"
#include <iostream>

#define HERE "[" << __FUNCTION__ << "]: "

using namespace std;

int Test::count = 0;

Test::Test(): id(++count)
{
	cout << HERE << "default constructor." << endl;
}

Test::Test(const Test &t): id(++count)
{
	cout << HERE << id << " copied from " << t.id << endl;
}

Test& Test::operator =(const Test &t)
{
	cout << HERE << id << " assigned from " << t.id << endl;

	return *this;
}

Test::~Test(){
	cout << HERE << id << " destroyed" << endl;
}


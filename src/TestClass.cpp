//============================================================================
// Name        : TestClass.cpp
// Author      : Adam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Test.h"
using namespace std;

int main() {

	Test s;
	Test t(s);

	s = t;

	return 0;
}

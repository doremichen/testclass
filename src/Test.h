/*
 * Test.h
 *
 *  Created on: 2014/2/5
 *      Author: AdamChen
 */

#ifndef TEST_H_
#define TEST_H_

class Test {
public:
	Test();
	Test(const Test&);
	~Test();
	Test& operator=(const Test&);

private:
	static int count;
	int id;
};


#endif /* TEST_H_ */

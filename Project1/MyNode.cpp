#include<iostream>
#include "MyNode.h"
using namespace std;

void MyNode::display()const {
	cout << "Value Is : " << value << endl;
	if (next != nullptr) {
		for (int i = 0; i < 2; i++) {
		cout << "Next Address Is : " <<next<< endl;
	}
	}
	else {
		cout << "Address Is Null " << endl;
	}
}
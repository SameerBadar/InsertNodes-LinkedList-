#include<iostream>
#include"MyNode.h"
using namespace std;
void insertNode(MyNode*, MyNode*);
int main() {
	MyNode * head;
	head = new MyNode(5);
	MyNode* current = head;
	insertNode(head, current);
	insertNode(head, current);
	head->display();
	return 0;
}
void insertNode(MyNode* head, MyNode* current) {
	MyNode* temp = new MyNode(10);
		current->setNext(temp);
		current = temp;
		cout << "Current Address Is : " << current << endl;
}

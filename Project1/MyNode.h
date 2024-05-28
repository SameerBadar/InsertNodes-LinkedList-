#pragma once
class MyNode
{
public:
	MyNode() { value = 0; next = nullptr; }
	MyNode(const int& _value) { value = _value; }
	void setNext( MyNode* _next) { next = _next; }
	MyNode* getNext()const { return next; }
	void display()const;
private:
	int value;
	MyNode* next;
};


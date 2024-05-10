#include <iostream>

using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// Stack Class
class Stack {
private:
	Node* top; // pointer to the top node of the stack

public:
	Stack() {
		top = NULL; // intialize the stack with a null top pointer
	}

	// Push operation: Insert an element onto the top of stack
	int push(int value) {

	}
};
// To Revise: Linked Lists, StacksUsingLinkedLists, StacksUsingArrays, QueuesUsingLinkedLists, QueuesUsingArrays, DynamicArrays, Vectors, PriorityQueues, Hashmaps

// To Revise: Linked Lists
// Functions: insertValues (), removeNode (), insertNode (), printValues ()


#include <bits/stdc++.h>

using namespace std;


template <typename T>
class Node {


	private:

	Node <T>* next;
	T data;

	Node (T data) {
	
		this -> data = data;
		this -> next = nullptr;
	}	
};


Node <T>* insertValues () {


	Node <T>* head = nullptr;
	Node <T>* tail = nullptr;

	T data;

	while (data != -1) {

	
		Node <T>* newNode = new Node (data);

		if (!(head)) {

			head = newNode;
			tail = newNode;
		}
		else {

			tail -> next = newNode;
			tail = tail -> next;
		}

		cin >> data;
	}

	
	return head;
}


T removeNode (Node <T>* head, int to_delete) {

	
	int counter = 0;
	Node <T>* temp = head;

	if (counter == to_delete) {

		Node <T>* to_delete = head;
		T to_return = to_delete -> data;

		head = head -> next;
		delete to_delete;

		return head;
	}

	
	while (counter < (to_delete - 1)) {

		temp = temp -> next;
		counter++;
	}


	if (temp) {

	
		Node <T>* to_retain = nullptr;

		if (temp -> next) {


			to_retain = temp -> next -> next;
		}

		Node <T>* to_delete = temp -> next;
		T to_return = to_delete -> data;

		delete to_delete;
	}

	
	return head;
}


void printValues (Node <T>* head) {


	Node <T>* temp = head;

	while (temp) {


		cout << temp -> data << endl;
		temp = temp -> next;
	}

	cout << endl;
}

	

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int x){
		data = x;
		next = nullptr;
	}
};

bool isEmpty(Node* head){
	return head == nullptr;
}

int size(Node* head){
	int dem = 0;
	for (Node* tmp = head; tmp != nullptr; tmp = tmp->next){
		dem++;
	}
	return dem;
}

Node* enqueue(Node* head, int x){
	Node* p = new Node(x);
	if (head == nullptr){
		return p;
	}
	Node* tmp = head;
	while (tmp->next != nullptr){
		tmp = tmp->next;
	}
	tmp->next = p;
	return head;
}

int dequeue(Node*& head){
	if (isEmpty(head)){
		cout << "Queue rong" << endl;
		return -1;
	}
	Node* tmp = head;
	int value = tmp->data;
	head = head->next;
	delete tmp;
	return value;
}

int peek(Node* head){
	if (isEmpty(head)){
		cout << "Queue rong" << endl;
		return -1;
	}
	return head->data;
}

int main(){
	Node* q = nullptr;
	q = enqueue(q,1);
	q = enqueue(q,2);
	q = enqueue(q,3);
	cout << peek(q) << endl;
	cout << dequeue(q) << endl;
	cout << dequeue(q) << endl;
	cout << size(q) << endl;
	return 0;
}

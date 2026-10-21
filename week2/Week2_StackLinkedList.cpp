#include<iostream>
using namespace std;

struct Node {
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

Node* push(Node* head, int x){
	Node* p = new Node(x);
	p->next = head;
	return p;
}

int pop(Node*& head){
	Node* tmp = head;
	int value = tmp->data;
	head = head->next;
	delete tmp;
	return value;
}

int top(Node* head){
	return head->data;
}

int main(){
	Node* s = nullptr;
	s = push(s,1);
	s = push(s,2);
	s = push(s,3);
	cout << top(s) << endl;
	cout << pop(s) << endl;
	cout << size(s) << endl;
	return 0;
}

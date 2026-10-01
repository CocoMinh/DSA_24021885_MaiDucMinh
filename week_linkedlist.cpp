#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node (int x){
		data = x;
		next = nullptr;
	}
};

Node* insertHead(Node* head, int x){
	Node* p = new Node(x);
	p->next = head;
	return p;
}

Node* Insert K (Node* head, int x, int K){
	// Tao mot mang moi xong gan cac node vao mang, cho mang chay den vi tri K roi dung a[i] = a[i+1], n++
	if (K == 0){
		head = InsertHead(head, x);
	}
	else {
		Node* p = new Node (x);
		int cnt = 0;
		Node* tmp = head;
		while (cnt < K-1){
			tmp = tmp->next;
			cnt += 1;
		}
	}
	p->next = tmp->next;
	tmp->next = p;
	return head;
}

Node* insertLast(Node* head, int x) {
	Node* p = new Node(x);
	Node* tmp = head;
	while (tmp->next != nullptr){
		tmp = tmp->next;
	}
	tmp->next = p;
	return head;
}

Node* deleteHead(Node* head){
	if (head == nullptr){
		return head;
	}
	Node* tmp = head;
	head = head->next;
	delete tmp;
	return head;
}

Node* deleteK(Node* head, int K){
	if (K==0){
		return deleteHead(head);
	}
	Node* p = tmp->next;
	tmp->next = tmp->next->next;
	delete p;
	return head;
}

Node* deleteLast(Node* head){
	Node* p = head;
	while (p->next->next != nullptr){
		p = p->next;
	}
	delete p->next;
	p->next = nullptr;
	return head;
}

void duyetXuoi(Node* head){
	Node* tmp = head;
	while (tmp != nullptr){
		cout << tmp->data;
		tmp = tmp->next;
	}
	cout << "Null" << endl;
}

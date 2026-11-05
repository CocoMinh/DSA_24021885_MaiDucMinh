#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
	
	Node (int x){
		data = x;
		next = nullptr;
		prev = nullptr;
	}
};

Node* insertHead(Node* head, int x){
	Node* p = new Node(x);
	p->next = head;
	head->prev = p;
	return p;
}

Node* insertLast(Node* head, int x){
	Node* p = new Node(x);
	Node* tmp = head;
	while (tmp->next != nullptr) {
		tmp = tmp->next;
	}
	tmp->next = p;
	p->prev = tmp;
	return head;
}

Node* insertK(Node* head, int x, int K){
	if (K==0){
		head = insertHead(head, x);
	} else {
        Node* p = new Node(x);
        int cnt = 0;
        Node* tmp = head;
        
        while (cnt < K - 1) {
            tmp = tmp->next;
            cnt++;
        }
        
        p->next = tmp->next;
        p->prev = tmp;
        
        if (tmp->next != nullptr) {
            tmp->next->prev = p;
        }
        
        tmp->next = p;
    }
    
    return head;
}

Node* deleteHead(Node* head){
	Node* tmp = head;
	head = head->next;
	head->prev = nullptr;
	delete tmp;
	return head;
}

Node* deleteLast(Node* head){
	Node* tmp = head;
	while (tmp->next != nullptr){
		tmp = tmp->next;
	}
	tmp->prev->next = nullptr;
	delete tmp;
	return head;
}

Node* deleteK(Node* head, int K){
	if (K == 0) {
        return deleteHead(head);
    }
    else {
        Node* tmp = head;
        int cnt = 0;
        while (cnt != K - 1) {
            tmp = tmp->next;
            cnt++;
        }
        Node* p = tmp->next;
        tmp->next = tmp->next->next;
        if (tmp->next != nullptr) {
            tmp->next->prev = tmp;
        }
        
        delete p;
        
        return head;
    }
}

void duyetXuoi(Node* head){
	Node* tmp = head;
	while (tmp != nullptr){
		cout << tmp->data << endl;
		tmp = tmp->next;
	}
	cout << "Null" << endl;
}

void duyetNguoc(Node* head){
	Node* tmp = head;
	while (tmp->next != nullptr){
		tmp = tmp->next;
	}
	while (tmp!=nullptr){
		cout << tmp->data << endl;
		tmp = tmp->prev;
	}
	cout << "Null" << endl;
}

#include<iostream>
using namespace std;

bool isEmpty(int n){
	return n==0;
}

void push(int a[], int &n, int x){
	a[n] = x;
	n++;
}

int pop(int a[], int &n){
	n--;
	return a[n];
}

int top(int a[], int n){
	return a[n-1];
}

int size(int n){
	return n;
}

int main(){
	int a[100];
	int n=0;
	push(a,n,1);
	push(a,n,2);
	push(a,n,3);
	cout << top(a,n) << endl;
	cout << pop(a,n) << endl;
	cout << size(n) << endl;
	return 0;
}

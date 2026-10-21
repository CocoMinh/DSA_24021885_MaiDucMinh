#include <iostream>
using namespace std;

bool isEmpty(int n){
	return n==0;
}

void enqueue(int a[], int &n, int k){
	a[n] = k;
	n++;
}

int dequeue(int a[], int &n){
	int value = a[0];
	for (int i=0; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
	return value;
}

int peek(int a[]){
	return a[0];
}

int size(int n){
	return n;
}

int main(){
	int a[100];
	int n=0;
	enqueue(a,n,1);
	enqueue(a,n,2);
	enqueue(a,n,3);
	cout << dequeue(a,n) << endl;
	cout << dequeue(a,n) << endl;
	cout << size(n) << endl;
	return 0;
}

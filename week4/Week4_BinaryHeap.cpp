#include <iostream>
using namespace std;

void swap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp;
}

void swim(int* a, int k){
	while (k > 1 && a[k/2] < a[k]){
		swap (a[k], a[k/2]);
		k = k/2;
	}
}

void insert(int* a, int&n, int x){
	a[++n] = x;
	swim(a,n);
}

void sink(int* a, int n, int k){
	while (2*k <= n){
		int j = 2*k;
		if (j < n && a[j] < a[j+1]){
			j++;
		}
		if (a[k] > a[j]){
			break;
		}
		swap(a[k], a[j]);
		k = j;
	}
}

int delMax(int* a, int& n){
	int max = a[1];
	swap(a[1], a[n]);
	n--;
	sink(a, n, 1);
	return max;
}

int main(){
	int a[101];
	int n = 0;
	int data[] = {3, 9, 1, 7, 5, 8, 2};
	
	for (int x:data){
		insert (a, n, x);
	}
	while(n>0){
		cout << delMax(a, n) << " ";
	}
	cout << "\n" ;
	return 0;
}

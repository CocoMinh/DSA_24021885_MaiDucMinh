#inculde <iostream>
using namespace std;

void nhapMang(int a[], int &n){
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}

void duyetXuoi(int a[], int n){
	for (int i=0; i<n; i++){
		cout << a[i] << " " << endl;
	}
}

void duyetNguoc(int a[], int n){
	for (int i=n-1; i>=0; i--){
		cout << a[i] << " " << endl;
	}
}

void chenDau (int a[], int &n, int k){
	n++;
	for (int i=n-1; i>0; i--){
		a[i] = a[i-1];
	}
	a[0] = k;
}

void chenCuoi (int a[], int &n, int k){
	n++;
	a[n] = k;
}

void chenGiua (int a[], int &n, int x, int k){
	n++;
	for (int i=n-1; i>x; i--){
		a[i] = a[i-1];
	}
	a[x] = k;
}

void xoaDau (int a[], int &n, int k){
	for (int i=0; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
}

void xoaCuoi (int &n){
	n--;
}

void xoaGiua (int a[], int &n, int x, int k){
	for (int i=x, i<n-1; i++){
		a[i] = a[i+!];
	}
	a[x] = k;
	n--;
}


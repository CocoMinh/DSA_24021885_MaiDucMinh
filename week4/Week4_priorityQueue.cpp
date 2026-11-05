#include <iostream>
using namespace std;

struct Queue {
    int a[101];
    int n;
};

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void swim(int* a, int k) {
    while (k > 1 && a[k/2] < a[k]) {
        swap(a[k], a[k/2]);
        k = k/2;
    }
}

void sink(int* a, int n, int k) {
    while (2*k <= n) {
        int j = 2*k;
        if (j < n && a[j] < a[j+1]) {
            j++;
        }
        if (a[k] >= a[j]) {
            break;
        }
        swap(a[k], a[j]);
        k = j;
    }
}

void init(Queue& q) {
    q.n = 0;
}

bool isEmpty(const Queue& q) {
    return q.n == 0;
}

int size(const Queue& q) {
    return q.n;
}

int top(const Queue& q) {
    return q.a[1];
}

void push(Queue& q, int x) {
    q.a[++q.n] = x;
    swim(q.a, q.n);
}

int pop(Queue& q) {
    int max = q.a[1];
    swap(q.a[1], q.a[q.n]);
    q.n--;
    sink(q.a, q.n, 1);
    return max;
}

int main() {
    Queue q;
    init(q);

    int data[] = {3, 9, 1, 7, 5, 8, 2};
    for (int x : data) {
        push(q, x);
    }

    cout << "So phan tu: " << size(q) << ", max: " << top(q) << "\n";

    cout << "Lay ra theo thu tu giam dan: ";
    while (!isEmpty(q)) {
        cout << pop(q) << " ";
    }
    cout << "\n";
    return 0;
}

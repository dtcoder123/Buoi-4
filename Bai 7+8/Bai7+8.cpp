#include <iostream>

using namespace std;

// Hàm d? quy tính s? Fibonacci th? n
int fibonacci(int n) {
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm xu?t dãy s? Fibonacci nh? hon m
void printFibonacciLessThanM(int m) {
    int i = 1;
    int fib = fibonacci(i);
    
    while (fib < m) {
        cout << fib << " ";
        i++;
        fib = fibonacci(i);
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "Chon chuc nang: " << endl;
    cout << "1. Tinh so Fibonacci thu n" << endl;
    cout << "2. Xuat day so Fibonacci nho hon m" << endl;
    cout << "Nhap lua chon cua ban (1 hoac 2): ";
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "Nhap gia tri n: ";
        cin >> n;
        
        int result = fibonacci(n);
        cout << "So Fibonacci thu " << n << " la: " << result << endl;
    } else if (choice == 2) {
        int m;
        cout << "Nhap gia tri m: ";
        cin >> m;
        
        cout << "Day so Fibonacci nho hon " << m << " la: ";
        printFibonacciLessThanM(m);
    } else {
        cout << "Lua chon khong hop le." << endl;
    }

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

// H�m d? quy t�nh gi� tr? c?a d�y s? x_n
int x_n(int n, vector<int>& memo) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    
    if (memo[n] != -1) return memo[n]; // Ki?m tra n?u d� t�nh tru?c d�
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (n - i) * x_n(i, memo);
    }
    memo[n] = sum; // Ghi nh? k?t qu? d? tr�nh t�nh l?i
    return sum;
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    
    // T?o vector d? ghi nh? c�c gi� tr? d� t�nh
    vector<int> memo(n + 1, -1);
    
    int result = x_n(n, memo);
    cout << "Gia tri cua x_" << n << " la: " << result << endl;
    
    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

// Hàm d? quy tính giá tr? c?a dãy s? x_n
int x_n(int n, vector<int>& memo) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    
    if (memo[n] != -1) return memo[n]; // Ki?m tra n?u dã tính tru?c dó
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (n - i) * x_n(i, memo);
    }
    memo[n] = sum; // Ghi nh? k?t qu? d? tránh tính l?i
    return sum;
}

int main() {
    int n;
    cout << "Nhap gia tri n: ";
    cin >> n;
    
    // T?o vector d? ghi nh? các giá tr? dã tính
    vector<int> memo(n + 1, -1);
    
    int result = x_n(n, memo);
    cout << "Gia tri cua x_" << n << " la: " << result << endl;
    
    return 0;
}


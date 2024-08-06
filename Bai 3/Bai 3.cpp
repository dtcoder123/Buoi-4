#include <iostream>

using namespace std;

// Hàm tìm giá tr? ph?n t? th? n c?a c?p s? c?ng
int phanTuThuN(int n, int a, int r) {
    if (n == 1) {
        return a;
    }
    return phanTuThuN(n - 1, a, r) + r;
}

int main() {
    int n, a, r;
    cout << "Nhap gia tri phan tu thu n: ";
    cin >> n;
    cout << "Nhap gia tri hang dau a: ";
    cin >> a;
    cout << "Nhap gia tri cong sai r: ";
    cin >> r;

    int result = phanTuThuN(n, a, r);
    cout << "Gia tri phan tu thu " << n << " cua cap so cong la: " << result << endl;

    return 0;
}


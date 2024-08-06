#include <iostream>

using namespace std;

// Hàm d?m s? ch? s? c?a m?t s? nguyên duong
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0." << endl;
    } else {
        int digitCount = countDigits(n);
        cout << "So chu so cua " << n << " la: " << digitCount << endl;
    }

    return 0;
}


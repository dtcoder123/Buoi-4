#include <iostream>

using namespace std;

// H�m t�m UCLN theo phuong ph�p g?i �
int UCLN(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        return UCLN(a - b, b);
    }
    return UCLN(a, b - a);
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    int result = UCLN(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << result << endl;

    return 0;
}


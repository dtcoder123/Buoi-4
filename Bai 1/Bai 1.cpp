#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

// 1. S(n) = 1 + 2 + 3 + ... + n
int sumRecursive(int n) {
    if (n == 1) return 1;
    return n + sumRecursive(n - 1);
}

int sumIterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

// 2. S(n) = v5 + v5 + ? + v5 + v5 có n dâ´u can
double sqrtSumRecursive(int n) {
    if (n == 1) return sqrt(5);
    return sqrt(5) + sqrtSumRecursive(n - 1);
}

double sqrtSumIterative(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += sqrt(5);
    }
    return sum;
}

// 3. S(n) = 1/2 + 2/3 + ? + n/(n + 1)
double fractionSumRecursive(int n) {
    if (n == 1) return 1.0 / 2;
    return (double)n / (n + 1) + fractionSumRecursive(n - 1);
}

double fractionSumIterative(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

// 4. S(n) = 1 + 1/3 + 1/5 + ? + 1/(2n + 1)
double oddFractionSumRecursive(int n) {
    if (n == 0) return 1.0;
    return 1.0 / (2 * n + 1) + oddFractionSumRecursive(n - 1);
}

double oddFractionSumIterative(int n) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// 5. S(n) = 1*2 + 2*3 + 3*4 + ... + n*(n+1)
int productSumRecursive(int n) {
    if (n == 1) return 1 * 2;
    return n * (n + 1) + productSumRecursive(n - 1);
}

int productSumIterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * (i + 1);
    }
    return sum;
}

// 6. S(n) = 1*2!/ (2 + v3) + 2*3!/ (3 + v4) + 3*4!/ (4 + v5) + ... + n* (n+1)! / (n+1 + v(n+2))
double complexFractionSumRecursive(int n) {
    if (n == 1) return (1 * tgamma(3)) / (2 + sqrt(3));
    return (n * tgamma(n + 2)) / (n + 1 + sqrt(n + 2)) + complexFractionSumRecursive(n - 1);
}

double complexFractionSumIterative(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i * tgamma(i + 2)) / (i + 1 + sqrt(i + 2));
    }
    return sum;
}

// 7. S(n) = (1 + v(1+2))/ (2 + v3!) + (2 + v(2+3))/ (3 + v4!) + (3 + v(3+4))/ (4 + v5!) + ... + (n + v(n+n+1))/ (n+1 + v(n+2)!)
double complexExpressionSumRecursive(int n) {
    if (n == 1) return (1 + sqrt(1 + 2)) / (2 + sqrt(tgamma(4)));
    return (n + sqrt(n + n + 1)) / (n + 1 + sqrt(tgamma(n + 3))) + complexExpressionSumRecursive(n - 1);
}

double complexExpressionSumIterative(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i + sqrt(i + i + 1)) / (i + 1 + sqrt(tgamma(i + 3)));
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "S1(n) de quy: " << sumRecursive(n) << endl;
    cout << "S1(n) khu de quy: " << sumIterative(n) << endl;

    cout << "S2(n) de quy: " << sqrtSumRecursive(n) << endl;
    cout << "S2(n) khu de quy: " << sqrtSumIterative(n) << endl;

    cout << "S3(n) de quy: " << fractionSumRecursive(n) << endl;
    cout << "S3(n) khu de quy: " << fractionSumIterative(n) << endl;

    cout << "S4(n) de quy: " << oddFractionSumRecursive(n) << endl;
    cout << "S4(n) khu de quy: " << oddFractionSumIterative(n) << endl;

    cout << "S5(n) de quy: " << productSumRecursive(n) << endl;
    cout << "S5(n) khu de quy: " << productSumIterative(n) << endl;

    cout << "S6(n) de quy: " << complexFractionSumRecursive(n) << endl;
    cout << "S6(n) khu de quy: " << complexFractionSumIterative(n) << endl;

    cout << "S7(n) de quy: " << complexExpressionSumRecursive(n) << endl;
    cout << "S7(n) khu de quy: " << complexExpressionSumIterative(n) << endl;

    return 0;
}


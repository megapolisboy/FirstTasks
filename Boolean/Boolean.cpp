#include <iostream>
using namespace std;

bool boolean1(int n);
bool boolean5(int a, int b);
bool boolean11(int a, int b);
bool boolean24(int a, int b, int c);
bool boolean33(int a, int b, int c);

int main()
{
    cout << boolean1(5) << endl;
    cout << boolean5(6, 90) << endl;
    cout << boolean11(9, 7) << endl;
    cout << boolean24(45, 89, 61) << endl;
    cout << boolean33(55, 8, 9) << endl;
}

// функція перевіряє, чи є число додатнім
bool boolean1(int n) {
    return (n > 0);
}

// функція перевіряє чи виконуються умови: a >= 0 та b < -2
bool boolean5(int a, int b) {
    return (a >= 0 && b < -2);
}

// функція перевіряє, чи мають числа А і В однакову парність
bool boolean11(int a, int b) {
    bool isAOdd = a % 2;
    bool isBOdd = b % 2;
    return (isAOdd == isBOdd);
}

// функція перевіряє, чи має квадратне рівняння корені
bool boolean24(int a, int b, int c) {
    return ((b * b - 4 * a * c) >= 0);
}

// функція перевіряє, чи існує трикутник зі сторонами a, b, c
bool boolean33(int a, int b, int c) {
    return (
        a + b > c &&
        a + c > b &&
        b + c > a
    );
}


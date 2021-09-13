#include <iostream>
#include <cmath>

double begin1(double a);
double begin8(double a, double b);
double begin20(double x1, double y1, double x2, double y2);
double begin31(double farenheit);
void begin39(double a, double b, double c);

int main()
{
    std::cout << begin1(4) << std::endl;
    std::cout << begin8(3, 5) << std::endl;
    std::cout << begin20(7, 8.6, 45, 0.3) << std::endl;
    std::cout << begin31(47) << std::endl;
    begin39(1, 2, -1);
}

// функція повертає периметр квадрата
double begin1(double a) {
    double p = 4 * a;
    return p;
}

// функція повертає середнє арифметичне двох чисел
double begin8(double a, double b) {
    return (a + b) / 2;
}

// фунція повертає відстань між точками (x1, y1) та (x2, y2)
double begin20(double x1, double y1, double x2, double y2) {
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

// функція переводить значення температури по Фаренгейту в градуси Цельсія
double begin31(double farenheit) {
    double celsius = (farenheit - 32) * 5 / 9;
    return celsius;
}

void begin39(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    double x1 = (-b - sqrt(d)) / (2 * a);
    double x2 = (-b + sqrt(d)) / (2 * a);
    if (x1 < x2) {
        std::cout << x1 << ' ' << x2;
    }
    else {
        std::cout << x2 << ' ' << x1;
    }
}
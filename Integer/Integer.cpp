#include <iostream>
#include <cmath>

using namespace std;

int integer1(int cm);
void integer6(int twoDigitInt);
int integer9(int threeDigitInt);
int integer21(int seconds);
int integer23(int seconds);

int main()
{
    cout << integer1(580) << endl;
    integer6(78);
    cout << integer9(890);
    cout << integer21(67) << endl;
    cout << integer23(45) << endl;


}

// функція повертає кількість повних метрів в cm сантиметрах
int integer1(int cm) {
    return cm / 100;
}

// функція приймає двоцифрове число і виводить кожну з його цифр окремо
void integer6(int twoDigitInt) {
    int leftDigit = twoDigitInt / 10;
    int rightDigit = twoDigitInt % 10;
    cout << leftDigit << ' ' << rightDigit << endl;
}

// функція повертає першу цифру трицифрового числа
int integer9(int threeDigitInt) {
    return threeDigitInt / 100;
}

// фунція повертає кількість секунд, що пройшли з початку останньої хвилини
int integer21(int seconds) {
    return seconds % 60;
}

// фунція повертає кількість хвилин, що пройшли з початку останньої години
int integer23(int seconds) {
    int minutes = seconds / 60;
    return minutes % 60;
}


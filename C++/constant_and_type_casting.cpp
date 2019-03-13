#include <iostream>

int main(void){
    const int RATE = 5000;
    int pay;
    int hours;

    std::cout << "시간을 입력하시오: ";
    std::cin >> hours;

    if (hours > 8)
        pay = RATE * 8 + (int)(1.5 * RATE * (hours - 8));
    else
        pay = RATE * hours;

    std::cout << "임금은 " << pay << "입니다.\n";
    return 0;
}

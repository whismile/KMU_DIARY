#include <iostream>

int main(void) {
    int x, y, r;
    std::cout << "두 개의 정수를 입력하시오(큰수, 작은수): ";
    std::cin >> x;
    std::cin >> y;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    std::cout << "최대 공약수는 " << x << "입니다.\n";
    return 0;

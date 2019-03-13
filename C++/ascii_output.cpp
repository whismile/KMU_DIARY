#include <iostream>

int main() {
    char ch = 'A';
    int code = ch;

    std::cout << ch << "의 아스키 코드 = " << code << std::endl;

    ch = ch + 1;
    code = ch;
    std::cout << ch << "의 아스키 코드 = " << code << std::endl;

    return 0;
}

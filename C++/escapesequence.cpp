#include <iostream>

int main(void) {
    using std::string;
    std::cout << "아이디와 패스워드를 입력하세요: \n";
    std::cout << "id: ____\b\b\b\b";
    
    string id, pass;
    std::cin >> id;
    
    std::cout << "pass: ____\b\b\b\b";
    std::cin >> pass;
    std::cout << "\a입력된 아이디는 \"" << id << "\"이고 패스워드는 \"" << pass << "\"입니다.\n";

    return 0;
}

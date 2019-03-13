#include <iosteam>

int main(void) {
    const int MONTHS = 12;
    double m_salary, y_salary;

    std::cout << "월급을 입력하시오: ";
    std::cin >> m_salary;

    y_salary = 12 * m_salary;
    std::cout << "연봉은 " << y_salary << "입니다" << std::endl;

    return 0;
}

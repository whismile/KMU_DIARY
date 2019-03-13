#include <iostream>

int main(void) {
    int answer = 59;
    int guess;
    int tries = 0;

    do {
        std::cout << "정답을 추측하여 보시오: ";
        std::cin >> guess;
        tries++;

        if (guess > answer)
            std::cout << "제시한 정수가 높습니다." << std::endl;

        if (guess < answer)
            std::cout << "제시한 정수가 낮습니다." << std::endl;
    } while (guess != answer);

    std::cout << "축하합니다. 시도 횟수 = " << tries << std::endl;

    return 0;
}

#include <iostream>

int digit_sum(int n) {
    if (n < 10) { // базовий випадок: одна цифра (або 0)
        return n;
    }
    return n % 10 + digit_sum(n / 10); // n зменшується, тож базовий випадок досяжний
}

int main() {
    std::cout << digit_sum(12345) << ' ' << digit_sum(0) << '\n';
}
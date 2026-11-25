#include <iostream>

int main() {
    const long long limit = 2147483647; // найбільше значення int
    long long f = 1;
    int n = 1;
    // Беремо наступний факторіал, поки він ще влазить в int.
    while (f * (n + 1) <= limit) {
        ++n;
        f *= n;
    }
    std::cout << n << '\n';
}
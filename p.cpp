#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int n;
    std::cout << "Enter number of pairs: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cout << "Enter pair " << i + 1 << " (x y): ";
        std::cin >> x >> y;

        if (areCoprime(x, y)) {
            std::cout << x << " and " << y << " are coprime.\n";
        } else {
            std::cout << x << " and " << y << " are not coprime.\n";
        }
    }

    return 0;
}
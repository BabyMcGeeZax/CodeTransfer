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

int main() {
    int n;
    std::cout << "Print all numbers coprime to: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        gcd(i,n);
        cout << gcd(i,n) << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
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

    vector<int> vAllCoprimes;

    for (int i = 0; i < n; ++i) {
        gcd(i,n);
        if(gcd(i,n)==1){
            vAllCoprimes.push_back(i);
        }
    }

    for (int num : vAllCoprimes) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
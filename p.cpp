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

int Allcoprimes(int n) {
    vector<int> vAllCoprimes;

    for (int i = 0; i < n; ++i) {
        gcd(i, n);
        if (gcd(i, n) == 1) {
            vAllCoprimes.push_back(i);
        }
    }

    for (int num : vAllCoprimes) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 1;
}

int genPer(int n) {
    int d;
    int c;
    int k;
    vector<int> comp;
    cout << "Insert a and c for k -> ak+c : ";
    cin >> d >> c;
    for (int i = 0; i < n; i++) {
        k = d * i + c;
        k = k % n;
        comp.push_back(k);
    }
    for (int num : comp) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 1;
}

int genAllPer(int n) {
    int s = 0;
    s = 2;
}

int main() {
    int n;
    std::cout << "Print all numbers coprime to: ";
    std::cin >> n;

    Allcoprimes(n);
    genAllPer(n);
    //genPer(n);

    return 0;
}

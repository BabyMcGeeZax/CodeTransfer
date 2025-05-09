#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> vAllCoprimes;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Allcoprimes(int n) {
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

int genPer(int n,int d,int c) {
    int k;
    vector<int> comp;
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

int genAllPer(int n,int d,int c) {
    int k;
    vector<int>vGenAll;
    for(int i=0;i<vAllCoprimes.size();i++){
        int x = vAllCoprimes.at(i);
        for(int i=0;i<n;i++){
            int y=i;
            for(int i=0;i<n;i++){
                k=x*i+y;
                k=k%n;
                vGenAll.push_back(k);
            }
            for(int num:vGenAll){
                cout<<num<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 1;
}

int main() {
    int n;
    std::cout << "Print all numbers coprime to: ";
    std::cin >> n;

    Allcoprimes(n);

    int d;
    int c;
    cout << "Insert a and c for k –> ak+c : ";
    cin >> d >> c;

    genAllPer(n,d,c);
    //genPer(n,d,c);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    long long a, b; cin >> a >> b;
    long long kq = (a / b) * b;
    if (kq >= a) {
        cout << kq << endl; return 0;
    }
    cout << kq + b << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() { //
    long long a, b, s; cin >> a >> b >> s;
    long long i = abs(a) + abs(b);
    if (s >= i && (s - i) % 2 == 0) {
        cout << "YES" << endl; return 0;
    }
    cout << "NO" << endl;
    return 0;
}
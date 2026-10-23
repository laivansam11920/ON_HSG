#include <iostream>
using namespace std;

int main() {
    long long a, b, c; cin >> a >> b >> c;
    if ((a == b * c || b == a * c || c == b * a) && (a != 0 || b != 0 || c != 0)) {
        cout << "/" << endl; return 0;
    }
    cout << "NOSOL" << endl;
    return 0;
}
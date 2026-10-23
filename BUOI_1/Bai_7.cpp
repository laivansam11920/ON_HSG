#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c; cin >> c;
    cout << fixed << setprecision(2) << (c * 9/5) + 32 << endl;
    return 0;
}
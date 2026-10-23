#include <iostream>
#include <iomanip>
using namespace std;

constexpr float PI = 3.14;

int main() {
    long long r; cin >> r;
    cout << fixed << setprecision(2) << PI*2*r << " " << PI*r*r << endl;
    return 0;
}
#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
    float a, b; cin >> a >> b;
    cout << fixed << setprecision(0) << abs(a - b) << endl;
    return 0;
}
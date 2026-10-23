#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
    long long a, b; cin >> a >> b;
    cout << fixed << setprecision(2) << a + b << " " << a - b << " " << a * b << " " << a / b << endl;
    return 0;
}
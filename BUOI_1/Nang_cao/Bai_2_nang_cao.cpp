#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    cout << fixed << setprecision(0) << (m * n)/2 << endl;
    return 0;
}
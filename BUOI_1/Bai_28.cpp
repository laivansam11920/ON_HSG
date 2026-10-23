#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;


int main() {

    int a, b, c; cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        cout << "INF" << endl; return 0;
    }

    int delta = b*b - 4*a*c;

    if (delta < 0) {
        cout << "NO" << endl; return 0;
    }

    if (delta == 0) {
        int ket_qua = -(b/(2*a));
        cout << fixed << setprecision(2) << ket_qua << " " << ket_qua;
        return 0;
    }

    if (delta > 0) {
        cout << fixed << setprecision(2) << (-b + sqrt(delta))/(2*a) << " " << (-b - sqrt(delta))/(2*a);
        return 0;
    }

    return 0;
}
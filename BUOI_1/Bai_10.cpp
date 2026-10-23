#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
    float n; cin >> n;
    cout << fixed << setprecision(2) <<  n/(n + 1) << endl;
    return 0;
}
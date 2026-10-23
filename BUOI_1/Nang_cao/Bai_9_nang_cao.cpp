#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a =  n / 2 + 1;
    if (a % m == 0) {
        cout << a << endl; return 0;
    }
    cout << -1 << endl;
    return 0;
}
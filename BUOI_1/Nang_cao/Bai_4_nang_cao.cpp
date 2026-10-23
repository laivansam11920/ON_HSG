#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    long long a, b, k; cin >> a >> b >> k;
    cout << abs((k + 1)/2*a - k/2*b) << endl;
    return 0;
}
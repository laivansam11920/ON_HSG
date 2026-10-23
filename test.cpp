#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {

    int n, d; cin >> n >> d;
    int a_n[n];

    for (int i = 0; i < n; i++) {
        int t; cin >> t; a_n[i] = t;
    }

    sort(a_n, a_n + n);

    

    return 0;
}
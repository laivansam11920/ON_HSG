#include <iostream>
using namespace std;

int main() {
    long long n; cin >> n;
    long long st = 0;

    st += n / 100; n %= 100;
    st += n / 20; n %= 20;
    st += n / 10; n %= 10;
    st += n / 5; n %= 5;
    st += n / 1;

    cout << st << endl;

    return 0;
}
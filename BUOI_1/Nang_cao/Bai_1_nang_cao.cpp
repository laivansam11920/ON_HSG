#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long long s1, s2, s3; cin  >> s1 >> s2 >> s3;
    long long s = sqrt(s1 * s2 * s3);
    int a = s/s1; int b = s/s2; int c = s/s3;
    cout << 4*a + 4*b + 4*c << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int k, n, w; cin >> k >> n >> w;
    int so_tien_chuoi = k*(w*(w + 1)/2);
    cout << abs(so_tien_chuoi - n) << endl;
    return 0;
}
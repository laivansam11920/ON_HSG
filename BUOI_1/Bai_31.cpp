#include <iostream>
using namespace std;

int main() {
    float a, b, c, d; cin >> a >> b >> c >> d;
    float diem = (a + b + 2 * c + 3 * d) / 7.0;

    if (diem >= 8.5) {
        cout << "GIOI" << endl;
    } else if (diem >= 6.5) {     
        cout << "KHA" << endl;
    } else if (diem >= 5.0) {      
        cout << "TRUNG BINH" << endl;
    } else {           
        cout << "YEU" << endl;
    }

    return 0;
}
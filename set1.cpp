/*
S1: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.
Gợi ý:
Nếu a = 0 và b = 0 thì phương trình có vô số nghiệm.
Nếu a = 0 và b != 0 thì phương trình vô nghiệm.
Nếu a != 0 thì phương trình có nghiệm duy nhất x = -b / a.
Ví dụ:
Input      Output
1 2        -2     
*/

#include <iostream>
using namespace std;

int main() {
    float a, b, x;
    cin >> a >> b;

    if (a == 0 && b == 0) {
            cout << "The factorial has many solutions\n";
    } else if (a == 0 && b != 0) {
            cout << "The factorial has no solutions\n";
    } else if (a != 0) {
            x = -b / a;
            cout << x << endl;
    }

    return 0;
}
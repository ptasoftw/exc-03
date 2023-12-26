/*
S3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
Gợi ý:
degC = (degF - 32) / 1.8

Input     Output
F = 80    C = 26.6667
*/

#include <iostream>
using namespace std;

int main() {
    float degC, degF;
    cin >> degF;

    degC = (degF - 32) / 1.8;
    cout << degC << endl;

    return 0;
}
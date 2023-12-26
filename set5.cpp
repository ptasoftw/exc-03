/*
S5: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
Input     Output
2023      7

sum = sum + (n % 10 )
n = n / 10

Phan tich
    sum = 0     n = 2023
1   0 + 3 = 3   202
2   3 + 2 = 5   20
3   5 + 2 = 7   2

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0){
        sum += (n % 10);
        n /= 10;
    }
    cout << sum << endl;
}
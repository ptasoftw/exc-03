/*
S2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
Input     Output
10        25
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
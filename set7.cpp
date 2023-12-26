/*
S7: Tạo mảng số nguyên dương có n phần tử( tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và xoá phần tử ở vị trí x
Input         Output
4             1 2 4
1 2 3 4
2
*/
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;

    int A[20];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    cin >> x;
    for(int i = x; i < n - 1; i++){
        A[i] = A[i + 1];
    }
    n--;

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
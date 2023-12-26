/*
S8: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x (0 <= x <= 9) và số nguyên dương y.
Thêm y vào vị trí x của mảng.
Input              Output
4                  1 6 2 3 4
1 2 3 4
1 
6


*/
#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    int A[20];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> x;
    cin >> y;
    for(int i = n; i > x; i--){
        A[i] = A[i - 1];
    }
    A[x] = y;
    n++;

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
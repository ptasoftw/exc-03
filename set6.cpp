/*
S6: Tạo mảng số nguyên dương có n phần tử (tối đa 10 phần tử). Nhập vào 1 số nguyên dương x và thêm x vào cuối mảng vừa tạo
Input        Output
4            2 4 6 8 3
2 4 6 8
3
*/
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    
    int A[10];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    cin >> x;
    A[n] = x;
    n++;

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
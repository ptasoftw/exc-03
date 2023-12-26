/*
S9: Viết chương trình tính tổng các phần tử của mảng.
Input       Output
3           6
1 2 3
*/

#include <iostream>
using namespace std;
const int MAX = 20;

int main(){
    int n, arr[MAX];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << sum;

    return 0;
}
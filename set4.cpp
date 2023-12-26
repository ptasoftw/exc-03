/*
S4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
Gợi ý:
Số nguyên tố là số chỉ chia hết cho 1 và chính nó.
2 3 5 7
< 2 --> không phải là số nguyên tố
Số 2 chỉ có đúng hai ước số là 1 và chính nó nên là số nguyên tố
Số 3 chỉ có đúng hai ước số là 1 và chính nó nên là số nguyên tố
Số 6 có 4 ước số là 1, 2 , 3 và 6, do đó nó không phải là số nguyên tố.

Tại sao lại chỉ đếm các ước trong đoạn từ 2 đến căn của x?

Nếu bạn để ý thì một số nguyên >= 2 bất kỳ sẽ luôn có số ước ở nửa đầu căn bậc 2 của nó bằng số ước ở nửa sau căn bậc 2 của nó. Cụ thể, các ước sẽ phân bố thành 2 miền từ [2; sqrt(x)] và từ [sqrt(x); x].

Chú ý: Khi kiểm tra bạn nhớ phải là <= sqrt(n) nhé. Nếu chỉ để dấu nhỏ hơn thì các số chính phương như 4, 9 sẽ là số nguyên tố đấy. Tại sao thì bạn thử giải thích xem nào.

for(int i = 2; i <= sqrt(n); i++)
Ví dụ minh họa

Với số 12. ta có sqrt(12) xấp xỉ bằng 3.464
Đoạn [1; 3.464] có ước 1, tương ứng đoạn [3.464; 12] có ước 12 // 1 * 12 = 12
Đoạn [1; 3.464] có ước 2, tương ứng đoạn [3.464; 12] có ước 6  // 2 * 6 = 12 
Đoạn [1; 3.464] có ước 3, tương ứng đoạn [3.464; 12] có ước 4  // 3*4 = 12
Trong đoạn [2; 3.464] số 12 chia hết cho 2 số(2,3)
=> 12 không là số nguyên tố
 
Với số 9, ta có sqrt(9) = 3
Đoạn [1; 3] có ước 1, tương ứng đoạn [3; 9] có ước 9 // 1*9 = 9
Đoạn [1; 3] có ước 3, tương ứng đoạn [3; 9] có ước 3 // 3*3 = 9
Trong đoạn [2; 3] số 9 chia hết cho 1 số(3)
=> 9 không là số nguyên tố

Với số 7, ta có sqrt(7) xấp xỉ bằng 2.646
Trong đoạn từ [2;2.646] không có số nguyên nào mà 7 chia hết
=> 7 là số nguyên tố.


Input     Output
3         3 is a prime number
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 2){
            cout << n << " is not a prime number \n";
            return 0;
    }

    int count = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
                count++;
        }
    }
    
    if (count == 0){
            cout << n << " is a prime number\n";
    } else{
            cout << n << " is not a prime number\n";
    }
}

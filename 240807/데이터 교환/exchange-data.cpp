#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5, b=6, c=7,temp;
    temp=a;
    a=c;
    c=b;
    b=a;
    cout << a<<endl;
    cout << b<<endl;
    cout << c<<endl;
    return 0;
}
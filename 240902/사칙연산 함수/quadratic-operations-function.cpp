#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=0,c=0;
    char o;
    cin >>a >>o>>c;
    if (o =='+')
        cout << a << ' '<< o<<' '<< c << " = "<<a+c;
    else if (o =='-')
        cout << a << ' '<< o<<' '<< c << " = "<<a-c;
    else if (o =='/')
        cout << a << ' '<< o<<' '<< c << " = "<<a/c;
    else if (o =='*')
        cout << a << ' '<< o<<' '<< c << " = "<<a*c;  
    else
        cout <<"False";
    return 0;
}
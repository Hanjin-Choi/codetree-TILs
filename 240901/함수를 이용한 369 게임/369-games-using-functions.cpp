#include <iostream>
using namespace std;

bool Check369(int n)
{
    while (n>0)
    {
        if (n%10==3||n%10==6||n%10==9)
            return true;
        n/=10;
    }
    return false;
}

bool Check3(int n)
{
    return n%3==0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a ,b, cnt=0;
    cin >>a>>b;
    for (int i=a; i<=b;i++)
    {
        if(Check3(i)||Check369(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}
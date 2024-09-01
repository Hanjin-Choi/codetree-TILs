#include <iostream>
using namespace std;

bool isYoon(int n)
{
    if(n%4)
        return false;
    else if(n%100)
        return true;
    else if (n%400)
        return false;
    else
        return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin>>y;
    if (isYoon(y))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
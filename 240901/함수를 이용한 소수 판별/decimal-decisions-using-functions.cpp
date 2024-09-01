#include <iostream>
#include <set>
using namespace std;
int arr[101];
set <int> P;

void Prime()
{
    for (int i=2; i <101;i++)
    {
        if (not arr[i])
        {
            P.insert(i);
            for (int j=i*2; j<101;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}

bool IsPrime(int n)
{
    for (auto it=P.begin();it !=P.end();it++)
    {
        if (n==*it)
            return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,ans=0;
    Prime();
    cin >>a>>b;
    for (int i=a; i<=b;i++)
    {
        if (IsPrime(i))
            ans+=i;
    }
    cout <<ans;
    return 0;
}
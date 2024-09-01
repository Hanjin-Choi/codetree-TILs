#include <iostream>
using namespace std;
int temp;
int Gcd(int n, int m){
    if(m>n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    if (n%m==0)
        return m;
    else 
        return Gcd(m,n%m);
        
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >>n>>m;
    cout<<Gcd(n,m);
    
    return 0;
}
#include <iostream>
using namespace std;

void MakeRec(int n)
{   
    cnt=1;
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<n;j++)
        {
            cout << cnt <<' ';
            cnt++;
            if (cnt==10) cnt=1;
        }
        cout << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n =0;
    cin >>n;
    MakeRec(n);
    return 0;
}
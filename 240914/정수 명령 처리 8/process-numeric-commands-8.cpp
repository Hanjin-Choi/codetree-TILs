#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >>n;
    cin.ignore();
    list <int> lt;
    for (int i=0; i<n; i++)
    {
        string s;
        cin >>s;
        int num;
        auto it=lt.begin();
        if (s =="push_back")
        {
            cin>>num;
            lt.push_back(num);
        }
        else if (s=="push_front")
        {
            cin >>num;
            lt.push_front(num);
        }
        else if(s=="pop_front") 
        {
            cout << *(it)<<endl;
            lt.pop_front();    
        }
        else if(s=="pop_back")
        {
            cout << * (--lt.end())<<endl;
            lt.pop_back();
        }
        else if(s=="size")
        {
            cout << lt.size()<<endl;
        }
        else if(s=="empty")
        {
            cout << lt.empty()<<endl;
        }
        else if(s=="front")
        {
            cout<<*(it)<<endl;
        }
        else if(s=="back")
        {
            cout<<*(--lt.end())<<endl;
        }
    }
    return 0;
}
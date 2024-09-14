#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list <int> lst;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        auto it = lst.begin();
        string line;
        int num;
        cin >> line;
        if (line == "size") cout << lst.size() << endl;
        else if (line == "pop_back") lst.pop_back();
        else if (line == "get") {
            cin >> num;
            for (int j = 0; j < num-1; j++)it++;
            cout << *(it) << endl;
        }
        else if (line == "push_back")
        {
            cin >> num;
            lst.push_back(num);
        }
    }
    return 0;
}
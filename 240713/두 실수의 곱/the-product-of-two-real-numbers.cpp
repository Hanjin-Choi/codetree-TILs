#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a=5.26, b=8.27;
    cout << fixed;
    double c=a*b;
    cout.precision(3);
    cout << c << endl;
    return 0;
}
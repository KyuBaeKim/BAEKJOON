#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int A;
    int B;

    cin >> A;
    cin >> B;
    cout << (B % 10) * A << endl;
    cout << ((B / 10) %10)* A << endl;
    cout << (B / 100)* A << endl;
    cout << B * A << endl;

    return 0;
}
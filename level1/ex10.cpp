#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;
    cout << (A+B)%C << endl;
    cout << ((A%C) + (B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C) * (B%C))%C << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int total = 0;
    cin >> x;
    for (int i = 1; i < 10; i++)
    {
        total = x * i;
        printf("%d * %d = %d\n", x, i, total);
    }

    return 0;
}
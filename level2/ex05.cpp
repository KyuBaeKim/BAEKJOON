#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int h;
    int m;
    scanf("%d %d", &h, &m);

    int time = 0;
    time = (h * 60) + m - 45;
    h = time / 60;
    m = time % 60;

    printf("%d %d", h, m);

    return 0;
}
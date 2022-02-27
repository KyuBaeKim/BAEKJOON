// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

// 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cin >> a;
    if (60 > a && a >= 0)
        cout << "F" << endl;
    else if (70 > a && a >= 60)
        cout << "D" << endl;
    else if (80 > a && a >= 70)
        cout << "C" << endl;
    else if (90 > a && a >= 80)
        cout << "B" << endl;
    else if (100 >= a && a >= 90)
        cout << "A" << endl;

    return 0;
}
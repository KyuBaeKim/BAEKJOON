    #include <iostream>
    #include <string>
    using namespace std;

    int main(int argc, char const *argv[])
    {
        double A;
        double B;

        cin >> A;
        cin >> B;
        cout.precision(12); // 12자리로 출력해라
        cout << fixed; // 소숫점 자리수만 고정하려면
        cout << A / B;
        return 0;
    }
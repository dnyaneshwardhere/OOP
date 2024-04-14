#include <iostream>
using namespace std;

class distanceadd
{
public:
    int km, m;
    distanceadd()
    {
        km = 0;
        m = 0;
    }

    distanceadd(int r, int i)
    {
        km = r;
        m = i;
    }

    void operator+(distanceadd &c);
};

void distanceadd::operator+(distanceadd &c)
{
    int result_km = km + c.km;
    int result_m = m + c.m;

    if (result_m >= 1000)
    {
        result_km += result_m / 1000;
        result_m %= 1000;
    }

    cout << "\nThe sum is " << result_km << " kilometers and " << result_m << " meters." << endl;
}

int main()
{
    int a, b, c, d;

    cout << "Enter the kilometers for 1st  object : ";
    cin >> a;

    cout << "Enter the meters for  1st object : ";
    cin >> b;

    cout << "\nEnter the kilometers for 2nd  object : ";
    cin >> c;

    cout << "Enter the meters for  2nd object : ";
    cin >> d;

    distanceadd c1(a, b), c2(c, d);
    c1 + c2;

    return 0;
}
#include <iostream>
using namespace std;

class complex_add
{
public:
    int real, imag;
    complex_add() {}

    complex_add(int r, int i)
    {
        real = r;
        imag = i;
    }

    void operator+(complex_add &c);
    void operator-(complex_add &c);
};

void complex_add::operator+(complex_add &c)
{
    int result_real = real + c.real;
    int result_imag = imag + c.imag;

    cout << "Addition is " << result_real << " + " << result_imag << "i\n"
         << endl;
}

void complex_add::operator-(complex_add &c)
{
    int result_real = real - c.real;
    int result_imag = imag - c.imag;

    cout << "Subtraction is " << result_real << " + " << result_imag << "i\n"
         << endl;
}

int main()
{
    complex_add c1(3, 4), c2(1, 2);
    c1 + c2;
    c1 - c2;
    return 0;
}

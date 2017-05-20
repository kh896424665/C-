#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i) {real=r;imag=i}
    Complex operator + (Complex &c2);
    void display();
private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c2)
{
    return (real+c2.real,imag+c2.imag)
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

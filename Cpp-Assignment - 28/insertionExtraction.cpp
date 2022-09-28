// Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    friend ostream &operator<<(ostream &os, Complex c1);
    friend istream &operator>>(istream &is, Complex &c1);
};

ostream &operator<<(ostream &os, Complex c1)
{
    os << "Real  : " << c1.real << endl
       << "img : " << c1.img << endl;
    return os;
}

istream &operator>>(istream &is, Complex &c1)
{
    is >> c1.real >> c1.img;
    return is;
}

int main()
{
    Complex c;
    cout<<"Enter real and imaginary"<<endl;
    cin>>c;
    cout << c;
    return 0;
}

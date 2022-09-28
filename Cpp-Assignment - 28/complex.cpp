// Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables.

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

    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << "Real : " << real << " Img : " << img << endl;
    }
};

int main()
{
    Complex c;
    c.setData(4,5);
    c.display();
    return 0;
}
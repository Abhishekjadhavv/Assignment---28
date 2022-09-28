// Create a complex class and overload assignment operator for that class.
#include <iostream>
using namespace std;

class Complex
{
private:
    int r, m;

public:
    void setData(int r, int m)
    {
        this->r = r;
        this->m = m;
    }
    void showData()
    {
        cout << r << " + " << m << "i" << endl;
    }

    Complex operator=(Complex c1){  
        r = c1.r;
        m = c1.m;
    }

};

int main()
{
   Complex c1,c2;
   c1.setData(2,4);
   c1.showData();
   c2 = c1;
   c2.showData();
   return 0;
}
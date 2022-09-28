// 10. Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feat, inches;

public:
    Distance()
    {
        feat = 0;
        inches = 0;
    }
    Distance(int feat, int inches)
    {
        this->feat = feat;
        this->inches = inches;
    }

    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feat = a + c + 5;
        d.inches = a + b + 15;
        return d; 
    }

    void showData(){
        cout<<"Feet : "<<this->feat<<" "<<"Inches : "<<this->inches<<endl;
    }
};

int main()
{
    Distance d1(2,3),d2;
    d1.showData();
    d2=d1(2,3,4);
    d2.showData();
    return 0;
}

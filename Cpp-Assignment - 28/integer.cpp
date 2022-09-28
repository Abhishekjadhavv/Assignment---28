// Create an Integer class and overload logical not operator for that class.

#include <iostream>
using namespace std;

class Integer
{
private:
    int num;

public:
    Integer()
    {
        num = 0;
    }

    Integer(int num)
    {
        this->num = num;
    }

    void operator=(int n)
    {
        this->num = n;
    }

    void operator!(void){
      num = !num;
    }

    void showNum()
    {
        cout << "number is " << num << endl;
    }
};

int main()
{
    Integer n;
    n = 3;
    n.showNum();
    !n;
    n.showNum(); 
    return 0;
}
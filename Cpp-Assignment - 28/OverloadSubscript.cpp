// Overload subscript operator [] that will be useful when we want to check for an index
// out of bound.

#include <iostream>
using namespace std;

class Array
{
private:
    int arr[100];
    const int size = 100;

public:

    void setData(int num, int index)
    {
        if (index > size)
        {
            cout << "Array index out of bound." << endl;
            exit(0);
        }
        arr[index] = num;
    }

    int operator[](int index)
    {
        if (index > size)
        {
            cout << "Array index out of bound." << endl;
            exit(0);
        }
        return arr[index];
    }

};

int main()
{
    Array arr;
    arr.setData(10,0);
    arr.setData(20,1);
    arr.setData(30,2);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}
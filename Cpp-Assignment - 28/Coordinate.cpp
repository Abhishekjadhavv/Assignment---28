// Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
// c3 are objects of 3D coordinate class.

#include <iostream>
using namespace std;

class Coordinate
{
private:
    int x, y, z;

public:
    Coordinate()
    {
        x = y = z = 0;
    }

    void setData(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Coordinate operator,(Coordinate c2)
    {   
        Coordinate c;
        c.x = (x, c2.x);
        c.y = (y, c2.y);
        c.z = (z, c2.z);
        return c;
    }

    void showData()
    {
        cout << "X = " << this->x << " "
             << "Y = " << this->y << " "
             << "Z = " << this->z << endl;
    }
};

int main()
{
    Coordinate c1, c2, c3;
    c1.setData(2, 3, 4);
    c2.setData(4, 5, 6);
    c3 = (c2,c1);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}

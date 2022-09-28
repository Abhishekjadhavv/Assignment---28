// Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include<iostream>
using namespace std;

class Integer{
    private:
       int x;
    public:
     Integer(){
        x = 0;
     }
     Integer(int x){
      this->x = x;
     }

     void showX(){
      cout<<"X = "<<x<<endl;
     }
     
     operator int(){
        return x;
     }
};

int main(){
 Integer in(20);
 in.showX();
 int y = in;
 cout<<"Y = "<<y;   
 return 0;
}
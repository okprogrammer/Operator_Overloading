#include <iostream>

using namespace std;

class demo
{
    int x,y,z;
public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display();
    void operator -();

};

void demo::display() // we here want to define the display function
{
    cout<<"X="<<x<<"\nY="<<y<<"\nZ="<<z<<endl;
}

void demo::operator-()//we are definig the - overator outside the class
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    demo obj1;
    obj1.getdata(8,5,8);//we assiging the values for obj1
    obj1.display();
    cout<<"after performing uninary operator overloading"<<endl;
    -obj1; // Here we are using - operator which we have been overloading it will convert the data of obj into negative
    obj1.display();
    return 0;
}

#include<iostream>
#include "CircleType.h" //including the circletype header file
using namespace std;
// CylinderType inherits CircleType
class CylinderType: public CircleType 
{
    private:
    double height;
    public:
    //default constructor
    CylinderType()
    {
        height=1.0;
    }
    //parameterised constructor
    CylinderType(double r, double h)
    {
        height=h;
        //calling the mutator function to set the radius
        setRadius(r);
    }
    //function to display the radius and height
    void show()
    {
        cout<<"\nThe radius and height are: ";
        cout<<getRadius()<<" and "<<height;
    }
    
};
int main()
{
    CylinderType c, d(2.5,4.6);
    c.show();
    d.show();
    return 0;
}

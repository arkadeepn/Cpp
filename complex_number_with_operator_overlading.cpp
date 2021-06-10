#include<iostream>
#include<sstream>
using namespace std;
class Complex
{
    private:
    float r;
    float im;
    
    public:
    //adding the default constructor
    Complex()
    {
        r=0;
        im=0;
    }
    //overloading >> operator
    //it will be used to input a Complex number
    friend istream& operator >>(istream& i, Complex &c)
    {
        cout<<"\nReal Part: ";
        i>>c.r;
        cout<<"\nImaginary part: ";
        i>>c.im;
        return i;
    }
    //overloading the << operator
    //it will be used to output a complex number
    friend ostream& operator <<(ostream& o, Complex &c)
    {
        if(c.r!=0)
        {
            o<<c.r;
        }
        if(c.im>0)
        {
            o<<"+"<<c.im<<"i\n";
        }
        if(c.im<0)
        {
            o<<c.im<<"i\n";
        }
        return o;
    }
    //overloading the + operator
    //it will add two complex numbers
    Complex operator + (Complex& c)
    {
        Complex a;
        a.r= this->r+c.r;
        a.im= this->im+c.im;
        return a;
    }
    //overloading the * operator
    //it will multiply two complex numbers
    Complex operator *(Complex& c)
    {
        Complex a;
        a.r= (this->r*c.r)-(this->im*c.im);
        a.im= (this->r*c.im)+(this->im*c.r);
        return a;
    } 
};

int main()
{
    Complex c1,c2,c3,c4;
    cout<<"\n Enter the first complex number: ";
    cin>>c1;
    cout<<"\n Enter the second complex number: ";
    cin>>c2;
    cout<<"\nThe result of addition is: ";
    c3=c1+c2;
    cout<<c3;
    cout<<"\nThe result of multiplication is: ";
    c4=c1*c2;
    cout<<c4;
    return 0;
}

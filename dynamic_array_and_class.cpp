#include<iostream>
using namespace std;
//class declaration
class ArrayFloat
{
    private:
    int n;
    //declaring the dynamic array
    float* arr = NULL;
    public:
    //constructor to initialize the dynamic array
    //the parameter specifies the number of array elements
    ArrayFloat(int a)
    {
        n=a;
        arr = new float[n];
    }
    //function to insert number in any positon of the array
    //first parameter is the array index
    //second parameter is the number to be stored
    void insert(int i, float x)
    {
        arr[i]=x;
        cout<<"\nInserted at "<<i<<" position";
    }
    //function to display numbers in any positon of the array
    //the parameter is the array index
    void show(int i)
    {
        cout<<"\nElenmet at "<<i<<" position is: "<<arr[i];
    }
    //function to return highest number in the array
    float highest()
    {
        float temp=arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]>temp)
            {
                temp = arr[i];
            }
            
        }
        return temp;
    }
    //function to return highest number in the array
    float lowest()
    {
        float temp=arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]<temp)
            {
                temp = arr[i];
            }
            
        }
        return temp;
    }
    //function to return average of the numbers 
    float average()
    {
        float sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=sum+arr[i];
        }
        sum=sum/n;
        return sum;
    }
    //destructor to free the memory
    ~ArrayFloat()
    {
        delete []arr;
        arr=NULL;
    }
};
int main()
{
    //declaring the class object
    //5 is the parameter given to the constructor
    ArrayFloat a(5);
    //calling the insert() function
    //make sure every arrray element is initialised
    //if not initialised it will use garbage value
    a.insert(0,3.3);
    a.insert(4,2.5);
    a.insert(3,8.2);
    a.insert(2,1.7);
    a.insert(1,9.2); 
    //calling the show() function
    a.show(4);
    a.show(1);
    a.show(2);
    //calling the highest() function
    float h=a.highest();
    //calling the lowest() function
    float l=a.lowest();
    //calling the average() function
    float av=a.average();
    cout<<"\nThe highest element is: "<<h;
    cout<<"\nThe lowest element is: "<<l;
    cout<<"\nThe average of the numbers is: "<<av;
    return 0;
}

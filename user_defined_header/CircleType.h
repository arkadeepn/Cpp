//CircleType header file
class CircleType
{
    private:
    double radius;
    public:
    //default constructor
    CircleType()
    {
        radius=1.0;
    }
    //mutator function
    void setRadius(double r)
    {
        radius=r;
    }
    double getRadius()
    {
        return radius;
    }
};

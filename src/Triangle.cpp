#include <math.h>
#include "Triangle.h"

double Triangle::getArea(){

    double s = (this->sides[0] + this->sides[1] + this->sides[2]) / 2.0;
    double area = sqrt(s * (s-this->sides[0]) * (s-this->sides[1]) * (s-this->sides[2]));
    return area;
}

void Triangle::enlarge(double factor)
{
    this->setSide(this->getSide1()*factor, this->getSide2()*factor, this->getSide3()*factor);
    
}

void Triangle::enlarge()
{
    this->enlarge(2.0);
    
}

Triangle Triangle::enlargeNew(double factor)
{
    Triangle result(this->getSide1()*factor, this->getSide2()*factor, this->getSide3()*factor);
    return result;
}

/* Return true if and only if targe Triangle has large area than parameter triantle*/
bool Triangle::isLargerThan(Triangle t)
{
    return (this->getArea() > t.getArea());
}
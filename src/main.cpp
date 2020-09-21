#include <iostream>
#include "math.h"
#include "Triangle.h"

using namespace std;

/* Funcion para calcular el area de un triangulo (Fórmula de Herón)*/
// static double getArea(double s1, double s2, double s3)
// {
//     double s = (s1 + s2 + s3) / 2.0;
//     double area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
//     return area;
// }

// static bool largeThan(Triangle t1, Triangle t2)
// {
    
// }

// static double sumAreas(Triangle triangle[])
// {

// }

int main(){

    Triangle *t1 = new Triangle(10.0, 10.0, 10.0);
    Triangle *t2 = new Triangle(20.0, 20.0, 20.0);
    Triangle *t3 = new Triangle(10.0, 20.0, 29.0);
    
    cout << "Areas de Tres Triangulos: " << endl;
    cout << "Area 1: " << t1->getArea() << endl;
    cout << "Area 2: " << t2->getArea() << endl;
    cout << "Area 3: " << t3->getArea() << endl;

    Triangle *triangleList[] = {t1, t2, t3};

    cout << "Area total: " << Triangle::sumAreas(triangleList, 3);

    return 0;
}
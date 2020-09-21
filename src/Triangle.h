class Triangle{
    
    private:
    double side1;
    double side2;
    double side3;

    public:
    // Contructor - Inializador del objeto
    Triangle(double s1, double s2, double s3){
        this->side1=s1;
        this->side2=s2;
        this->side3=s3;
    }

    // Getters - Extraer las propiedades de los objetos
    double getSide1(){return this->side1;}
    double getSide2(){return this->side2;}
    double getSide3(){return this->side3;}

    /* Setters - Metodos que cambian las propiedades de los objetos
      en caso que la clase es mutable*/
    void setSide(double s1, double s2, double s3){
        this->side1 = s1;
        this->side2 = s2;
        this->side3 = s3;
    }
    
    // Instances methos - Interacciones con los objetos
    double getArea();
    
    // Static Methods
    static double sumAreas(Triangle *triangle[], int numTriangles)
    {
        double sum = 0.0;
        for(int i=0; i < numTriangles; i++){
            sum += triangle[i]->getArea();
        }
        return sum;
    }
};

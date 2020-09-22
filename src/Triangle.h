class Triangle{
    
    private:
    double sides [3];

    public:
    // Contructor - Inializador del objeto
    Triangle(double s1, double s2, double s3){
        this->sides[0]=s1;
        this->sides[1]=s2;
        this->sides[2]=s3;
    }

    // Getters - Extraer las propiedades de los objetos
    double getSide1(){return this->sides[0];}
    double getSide2(){return this->sides[1];}
    double getSide3(){return this->sides[2];}

    /* Setters - Metodos que cambian las propiedades de los objetos
      en caso que la clase es mutable*/
    void setSide(double s1, double s2, double s3){
        this->sides[0] = s1;
        this->sides[1] = s2;
        this->sides[2] = s3;
    }
    
    // Instances methos - Interacciones con los objetos
    double getArea();
    void enlarge(double factor);
    void enlarge();
    Triangle enlargeNew(double factor);
    
    // Static Methods
    static double sumAreas(Triangle *triangle[], int numTriangles)
    {
        double sum = 0.0;
        for(int i=0; i < numTriangles; i++){
            sum += triangle[i]->getArea();
        }
        return sum;
    }

    static bool isEquilateral(Triangle * triangle){

        return triangle->getSide1() == triangle->getSide2() 
        && triangle->getSide1() == triangle->getSide3();

    }
};

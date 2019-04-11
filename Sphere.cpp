    #include "Sphere.h"
    
    Sphere::Sphere(){

    }
    Sphere::Sphere(double x, double y, double z, double r):Circle(x,y,r){
        this->z = z;
    }
    Sphere::~Sphere(){

    }


    double Sphere::area(){
        return 4 * Circle::area();
    }
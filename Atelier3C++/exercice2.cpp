#include<iostream>
using namespace std;
// shape class
class shape
{
public:
    float longueur,largeur;
//constructeur
    shape(float longue,float larg)
    {
        longueur=longue;
        largeur=larg;
    }
    //fonction virtuelle de calcule de surface
    virtual void area()=0;
};

// classe triangle derive du classe shape
class triangle:public shape
{
public:
    triangle(float longue, float larg):shape(longue,larg) {}
   //surface de triangle
    void area()
    {
        float ar = longueur*largeur*0.5 ;
        cout << endl << "surface du triangle est : " <<  ar << " metre au cube" << endl;
    }
};

//classe rectangle derive du classe shape
class rectangle:public shape
{
public:
    rectangle(float longue, float larg):shape(longue,larg) {}

    //surface de rectangle
    void area()
    {
        float ar = longueur*largeur ;
        cout << endl << "surface du rectangle est : " <<  ar << " metre au cube" << endl;
    }

};


// testant les objets :
int main(int argc, char const *argv[])
{
    triangle a(12,12) ;
    rectangle b(12,12);
    a.area();
    b.area();
    return 0;
}

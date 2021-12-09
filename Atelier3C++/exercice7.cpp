#include <iostream>
#include <cmath>

using namespace std;

//classe vecteur3d
class vecteur3d
{
public:
//inistialisation par 0
    float x=0;
    float y=0;
    float z=0;
    //constructeur

    vecteur3d(float x,float y,float z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
//Les methodes

// methode display
    void display()
    {
        cout <<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
//calculer la norme d'un vecteur
    float norme()
    {
        return sqrt(x*x + y*y + z*z);
    }
//addition des deux vecteurs
    vecteur3d addition(vecteur3d & vect)
    {
        vecteur3d result(x + vect.x,y + vect.y,z + vect.z);
        return result;
    }

//produit scalaire des deux vecteurs
    float produit(vecteur3d & vect)
    {
        return x*vect.x+y*vect.y+z*vect.z;
    }

//tester si les deux vecteurs sont egaux
    bool coincide(vecteur3d & v)
    {
        return (x == v.x && y == v.y && z == v.z);
    }

//decouvrir la norme maximal par 3 maniéres :

    //Par valeur

    vecteur3d normaxV(vecteur3d vect)
    {
        if( this->norme() > vect.norme())
            return *this;
        else
            return vect;
    }

    //Par adresse *

    vecteur3d * normaxA(vecteur3d * vect)
    {
        if( this->norme() > vect->norme())
            return this;
        else
            return vect;
    }

    //Par reference &

    vecteur3d & normaxR(vecteur3d & vect)
    {
        if( this->norme() > vect.norme())
            return *this;
        else
            return vect;
    }

};

//Fin du def du classe

int main(int argc, char const *argv[]){
    vecteur3d a(1,2,3);
    vecteur3d b(3,5,8);

    //afficher les coordonnées
    cout << "a";
    a.display();
    cout << "b";
    b.display();

    //calculer la norme
    cout << "norme du a est : " << a.norme() <<endl;

    //la somme a+b
    vecteur3d result_add = b.addition(a);
    cout << "l'addition des deux vecteur est : ";
    result_add.display();

    //produit scalaire a.b
    float result_prod = b.produit(a);
    cout << "produit scalaire des deux vecteur est : " <<result_prod <<endl;

    //l'egalité des vecteurs

    if(a.coincide(b))
        cout << "Les vecteurs a et b coincident " << endl;
    else
        cout << "Les vecteurs a et b ne coincident pas " << endl;

    //norme maximal a ou b :

    cout << "norm max par valeur: ";
    (a.normaxV(b)).display();
    cout << "norm max par adresse: ";
    (a.normaxA(&b))->display();
    cout << "norm max par reference: ";
    (a.normaxR(b)).display();

    return 0;
}

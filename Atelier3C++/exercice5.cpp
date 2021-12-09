#include <iostream>
using namespace std;

//classe animal
class Animal
{
public:

    string nom;
    int age;

    Animal(string n,int a)
    {
        nom=n;
        age=a;
    }

// methode set_value
    virtual void set_value()=0;
};

//classe deriver ZEBRA deriver du classe Animal

class Zebra:public Animal
{
public:

    Zebra(string nom,int age):Animal(nom,age) {}
    string deplacer="Je marche";
    string famille="Equidae";
    string origine="Afrique";
    int agemax=45;

    void set_value()
    {

        cout << "Je m'appelle : " << nom <<endl;
        cout << "Mon age est : " << age <<"ans" <<endl;
        cout << "Mode de deplacement : " << deplacer <<endl;
        cout << "Origine : " << origine <<endl;
        cout << "L'age maximale est : " << agemax <<"ans" <<endl;

    }
};


//classe deriver DOLPHIN deriver du classe Animal

class Dolphin:public Animal
{
public:

    Dolphin(string nom,int age):Animal(nom,age) {}
    string deplacer="Je nage";
    string famille="Delphinides";
    string origine="L'ocean";
    int agemax=50;

    void set_value()
    {

        cout << "Je m'appelle : " << nom <<endl;
        cout << "Mon age est : " << age <<"ans" <<endl;
        cout << "Mode de deplacement : " << deplacer <<endl;
        cout << "Origine : " << origine <<endl;
        cout << "L'age maximale est : " << agemax <<"ans" <<endl;

    }
};




//fonction main


int main(int argc, char const *argv[])
{
    Zebra Z("zebra",20);
    Dolphin D("dolphin",12);
    cout <<"========================================================================="<<endl;
    Z.set_value();
    cout <<"========================================================================="<<endl;
    D.set_value();
    cout <<"========================================================================="<<endl;

    return 0;
}


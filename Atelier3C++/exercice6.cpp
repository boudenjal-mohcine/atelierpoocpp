#include <iostream>

using namespace std;

//classe Personne
class personne
{
protected:
    string nom;
    string prenom;
    string date_naissance;
    //constructeur

public:
    personne(string n,string p,string d)
    {
        nom=n;
        prenom=p;
        date_naissance=d;
    }
// methode display
    void display()
    {
        cout << "nom :" << nom <<endl;
        cout << "prenom :" << prenom <<endl;
        cout << "date de naissance :" << date_naissance <<endl;
    }

};

//classe deriver Employe deriver du classe PERSONNE

class employe:public personne
{
protected:
    float salaire;
public:
    employe(string n,string p,string d,float s):personne(n,p,d)
    {
        salaire=s;
    }
    //surcharge du methode display

    void display()
    {
        cout << "nom :" << nom <<endl;
        cout << "prenom :" << prenom <<endl;
        cout << "date de naissance :" << date_naissance <<endl;
        cout << "salaire: " << salaire <<"DH" <<endl;

    }
};




//classe deriver Chef deriver du classe Personne

class chef:public employe
{
protected:
    string service;

public:
    chef(string n,string p,string d,float s,string se):employe(n,p,d,s)
    {
        service=se;
    }
    //surcharge du methode display

    void display()
    {

        cout << "nom :" << nom <<endl;
        cout << "prenom :" << prenom <<endl;
        cout << "date de naissance :" << date_naissance <<endl;
        cout << "salaire: " << salaire <<"DH" <<endl;
        cout << "Service: " << service <<endl;

    }
};


//classe Directeur Chef deriver du classe Personne
class directeur:public chef
{
protected:
    string societe;

public:
    directeur(string n,string p,string d,float s,string se,string so):chef(n,p,d,s,se)
    {
        societe=so;
    }
    //surcharge du methode display

    void display()
    {

        cout << "nom :" << nom <<endl;
        cout << "prenom :" << prenom <<endl;
        cout << "date de naissance :" << date_naissance <<endl;
        cout << "salaire: " << salaire <<"DH" <<endl;
        cout << "Service: " << service <<endl;
        cout << "Societe: " << societe <<endl;


    }
};








//fonction main


int main(int argc, char const *argv[])
{
    personne P("AHMED","JAMAL","12/10/2002");
    employe E("AHMED","JAMAL","12/10/2002",10221.21);
    chef C("AHMED","JAMAL","12/10/2002",10221.21,"MAINTENANCE");
    directeur D("AHMED","JAMAL","12/10/2002",10221.21,"MAINTENANCE","MAROC TELECOM");

    cout <<"================================personne=================================="<<endl;
    P.display();
    cout <<"================================employe==================================="<<endl;
    E.display();
    cout <<"=================================chef===================================="<<endl;
    C.display();
    cout <<"===============================directeur================================="<<endl;
    D.display();
    cout <<"========================================================================="<<endl;

    return 0;
}

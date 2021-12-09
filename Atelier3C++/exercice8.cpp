#include <iostream>

using namespace std;
//classe media
class media
{
public:
    //attributes
    char titre[30];

    //method virtuel
    void virtual imprimer()=0;
    char virtual *id()=0;

};

//classe livre deriver du media
class livre:public media
{
public:
//attributes
    int pages_nbr;
    char author[30];

//method
    void add_book()
    {
        cout<<"\nEntrer nom du livre: ";
        cin>>titre;
        cout<<"\nEntrer nom de l'auteur: ";
        cin>>author;
        cout<<"\nEntrer le nombre de page: ";
        cin>>pages_nbr;
    }
    void imprimer()
    {
        cout << "nom de livre :" << titre <<endl;
        cout << "nom de l'auteur :" << author <<endl;
        cout << "le nombre de page :" << pages_nbr <<endl;
    }

    void add_content();
};

//classe audio deriver du media

class Audio:public media
{
public:

//attributes

    char news[30];

//method

    void enregistrer();
    void ecouter();
};

//classe presse deriver de media

class Presse:public media
{
public:

//attributes

    char evenements[30];

//method

    void ecrire();
    void lire();
};

//classe magazine deriver de presse

class Magazine:public Presse
{
public:

//attributes

    char publication[30];

//method

    void add_photos();
    void imprimer();
};

//classe journal deriver de presse

class Journal:public Presse
{
public:

//attributes

    char special[30];

//method

    void add_text();
    void imprimer();
};

//classe revue deriver de presse


class Revue:public Presse
{
public:

//attributes

    char periode[30];

//method

    void format();
    void imprimer();
};

//classe cd deriver de audio


class CD:public Audio
{
public:
//attributes
    float size_cd;

//method
    void grever();
    void start();
    void stop();

};

//classe cassette deriver de audio


class cassette:public Audio
{
public:
//attributes
    float size_cassette;
//method
    void power_on();
    void power_off();
    void accelerer();

};

//classe disque deriver de audio

class Disque:public Audio
{
public:
//attributes
    float size_disque;
//method

    void volume_up();
    void volume_down();

};

//Fin du def du classe


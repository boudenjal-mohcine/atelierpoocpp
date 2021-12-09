#include <iostream>

using namespace std;
//delaration du class

class My_class
{
public:

//les attribues
    string name;
    string contstructeur;
    string destructeur;

//constructeur

    My_class(string name,string contstructeur,string destructeur)
    {
        this->name = name;
        this->contstructeur = contstructeur;
        this->destructeur=destructeur;

        cout << contstructeur << " " << name << endl;
    }
//destructeur
    ~My_class()
    {
        cout << this->destructeur << " " << this->name << endl ;
    }
};

// fonction pricipale

int main(void)
{
    string nom;
    string contstructeur;
    string destructeur;
    cout << "Entrer votre nom : " ;
//getline() : lire tout le cout meme s'il ya des espaces
    std::getline(cin,nom);
// libre choix de sortie du constructeur et du destructeur
    cout << "Choisissez un texte pour le contstructeur : ";
    getline(cin,contstructeur);
    cout << "Choisissez un texte pour le destructeur : " ;
    getline(cin,destructeur);
//definition du classe
    My_class a(nom,contstructeur,destructeur);
    return 0;
}

#include <iostream>
using namespace std;

//classe mere
class mere
{
public:
// methode display
    void display()
    {
        cout << "bonjour je suis la mere" <<endl;
    }
};
//classe fille deriver du classe mere
class fille:public mere
{
public:
    void display()
    {
        cout << "bonsoir je suis la fille"<<endl;
    }
};

//fonction main
int main(int argc, char const *argv[])
{
    mere M;
    fille f;
//afficher des messages differents
    M.display();
    f.display();
    return 0;
}

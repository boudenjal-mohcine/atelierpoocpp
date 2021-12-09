#include <iostream>
using namespace std;
//classe test

class test
{
public:
    //fonction call
    int call()
    {
        static int i=0;
        i++;
        return i;
    }
};


int main(int argc, char const *argv[])
{
    test t;
    for(int i=0; i<10; i++)  // appeler fonction call 10 fois
    {
        t.call();
    }
    cout << "Vous avez appele la fonction call " << t.call() <<" fois"<<endl;   //10+1=11

    return 0;
}

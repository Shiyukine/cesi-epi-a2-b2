// epiuwu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ex2.h"
#include "ex1.h"

void afficherObjet(A* obj)
{
    obj->afficher();
}

int main()
{
    //de base le main est à faire dans ex1.cpp pour l'ex 1
    //et ex2.cpp pour l'ex 2
    std::cout << "Hello World!\n";

    //ex 1 :
    CLa ex1a;
    CLa* ex1b = new CLa(1, 2);
    ex1a.setNb1(1);
    ex1a.setNb2(2);
    cout << ex1a.somme() << endl;
    cout << ex1b->somme() << endl;
    delete ex1b;

    // ex 2:
    B* ex2a = new B();
    C* ex2b = new C();
    afficherObjet(ex2a);
    afficherObjet(ex2b);
    //PAS DEMANDÉ MAIS IL FAUT LE FAIRE
    delete ex2a;
    delete ex2b;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

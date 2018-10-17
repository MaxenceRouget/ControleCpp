#include <iostream>
#include "Liste.h"
#include <vector>

using namespace std;

int main()
{
  float entier,y;
  int choose, choose2;

  vector <liste> tableau;

  debut:
  cout <<" --- Bonjour --- "<<endl;
  cout <<"--- Que voulez vous faire ? ---"<<endl;
  cout <<"--- 1__Ajouter un reel__ ---"<<endl;
  cout <<"--- 2__Afficher la liste des reel__ ---"<<endl;
  cout <<"--- 3__Suprimer un reel chosi__ ---"<<endl;
  cout <<"--- 4__Suprimer tout les reel choisi__ ---"<<endl;
  cout <<"--- 5 Quitter ---"<<endl;

  cin>> choose;

  switch(choose)
  {
    case 1:{
      menu1:
        cout <<"--- Que voulez vous faire ? ---"<<endl;
        cout <<"1 --- Ajouter un nombre --- "<<endl;
        cout <<"2 --- retourné au menu --- "<<endl;
        cin>> choose2;

        if(choose2 == 1)
        {
            cout <<"--- Saisir un entier --- "<<endl;
              cin >> entier;
              tableau[y].nombre = entier;
              y++;
              goto menu1;
        }
        else
        {
          goto debut;
        }
    break;}

    case 2:{

    break;}









  }

  fin:

  return 0;
}

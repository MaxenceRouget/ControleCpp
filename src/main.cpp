#include <iostream>
#include "Liste.h"
#include <vector>
#include <fstream>

using namespace std;

int main()
{
  float entier,y;
  int choose, choose2;

  vector <liste> tableau;
  ofstream fichier;

  fichier.open("notes.txt");

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
              tableau.push_back(liste());

              tableau[y].nombre = entier;
               fichier<<tableau[y].nombre<<endl;

              y++;
              goto menu1;
              }
              else
              {
                goto debut;
              }
            break;
        }

    case 2:{
      for (int i=0; tableau.size(); i++)
      {
        cout<<"--- la liste ---"<<endl;
          if (i == tableau.size())
          {
                cout <<"----------"<<endl;
          }
          else
          {
             cout << tableau[y].nombre << endl;
          }
      };


    break;}









  }

  fin:

  return 0;
}

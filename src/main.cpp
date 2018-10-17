#include <iostream>
#include "Liste.h"
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
  float entier,y = 0;
  int choose, choose2, choose3;

  vector <liste> tableau;
  ofstream fichier;

  fichier.open("notes.txt");

  debut:
   system("clear");
   debuta:
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
       system("clear");
        cout <<"--- Que voulez vous faire ? ---"<<endl;
        cout <<"1 --- Ajouter un nombre --- "<<endl;
        cout <<"2 --- retourné au menu --- "<<endl;
        cin>> choose2;

        if(choose2 == 1)
        {
           system("clear");
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
              fichier.close();
            break;
        }

    case 2:{
      system("clear");
      cout <<"--- liste ---"<<endl;
      for (int i = 0;i<tableau.size();i++){
              cout << tableau[i].nombre <<endl;
            };
            goto debuta;
    break;}
    case 3:{
      cout<<"--- choisissez le nombre à effacer ---"<<endl;
        cin >> choose3;
        y = 0;
        while (choose3 != tableau[y].nombre)
        if(choose3 != tableau[y].nombre)
        {
          y++;
        }
        else
        {
          tableau.pop_back();
            cout << "C'est supprimé ! "<<endl;
        }
        goto debut;


    break;
  }

case 4:{

  break;
}

case 5:{
  goto fin;
  break;
}




  }

  fin:

  return 0;
}

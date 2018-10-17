
/*!\file main.cpp
*\brief Fichier principal ou tout se passe
*\author Maxence
*\version 1.0
*/
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>

/*!\main.cpp
*\brief ce fichier permet l'interface homme machine grâce à des goto
*/
using namespace std;

int main()
{
  /*!\brief variables
 *\entier ->saisit des utilisateurs
 *\y -> permet d'effectuer les verifications lors des while
 *\choose -> permet de rentré les valeurs pour les cin
 *\vector tableau -> permet de crée le tableau qui va contenir les valeurs
 futures
   */

  float entier,y = 0;
  int choose, choose2, choose3;

  vector <float>tableau;
  ofstream fichier;

  fichier.open("notes.txt");

  /*!\brief menu
 *\entier ->c'est ici que l'utilisateur choisit ce qu'il veux faire c'est le menu
 *\system clear -> permet de clear l'ecran pour une meilleure visibilité
   */
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
  /*!\brief switch
 *\case 1 -> permet d'entrée les valeurs
 *\case 2 -> permet d'afficher les valeurs
 *\case 3 -> permet de supprimer une valeur choisie
 *\case 4 -> permet de supprimet toutes les occurences d'un nombre choisit
 */
  switch(choose)
  {
    /*!\brief case 1
   *\menu1 -> permet de retourné sur ce menu
   *\tableau.push_back -> permet de rentré les valeurs a la fin du tableau
   et de ne pas les ecrasés
   *\fichier<<tableau[y]<<endl; ->> ecriture dans le
   *\fichier.close()-> fermeture du fichier
   *\goto menu1 -> retour à ce menu
   *\goto debut -> retour au menu principal
    */
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
              tableau.push_back(entier);

              tableau[y] = entier;
               fichier<<tableau[y]<<endl;

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

        /*!\brief case 2
       *\  for (int i = 0;i<tableau.size();i++) -> on affiche toutes les lignes
        du tableau
        *\tableau.size() -> taille totale du tableau
        *\goto debuta -> permet de revenir au menu dans effacer l'ecran sinon on
        ne vois pas la liste car elle est effacer grâce au system("clear")
        */
    case 2:{
      system("clear");
      cout <<"--- liste ---"<<endl;
      for (int i = 0;i<tableau.size();i++){
              cout << tableau[i] <<endl;
            };
            goto debuta;

    break;}


    /*!\brief case 3
   *\while(choose3 != tableau[y]) -> on compare l'entrée utilisateur au contenus
   du tableau, si elle est bonne on supprime cette ligne
   sinon on incremente et on passe à la prochaine ligne
    */
    case 3:{
      cout<<"--- choisissez le nombre à effacer ---"<<endl;
        cin >> choose3;
        y = 0;

        while(choose3 != tableau[y])
               {
                 y++;
               };
        tableau.pop_back();

        goto debut;


    break;
  }
  /*!\brief case 4
 *\  while(y != tableau.size()) -> permet d'arreter la boucle quand le tableau
 n'a plus de valeurs
 *\if (choose3 == tableau[y])->si l'occurence est verifier on supprime la ligne
 puis on retroune dans la boucle si l'occurence n'est pas verifier on boucle grâce
 au while pour effecer toutes les occurences
  */
    case 4:{
      cout<<"--- choisissez le nombre à effacer totalement ---"<<endl;
        cin >> choose3;
        y = 0;
        while(y != tableau.size()){
        if (choose3 == tableau[y])
        {
          tableau.pop_back();
        }
        if (choose3 != tableau[y])
        {
          y++;
        }
      };
      goto debut;
      break;
    }
    /*!\brief case 5
   *\ On sort du switch pour quitter le programme
    */
  case 5:{
    goto fin;
    break;
    }
}

  fin:
cout <<" Au revoir "<<endl;
  return 0;
}

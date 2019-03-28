/*Auteurs: Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "affichage.h"

/*Cette fonction permet d'afficher sur le premier écran les différents choix qu'à l'utilisateur pour la taille de la grille et le mode de jeu, elle affiche également le bouton "commencer"*/
void ChoixJeu(void) { 
  int i, x=50, n=125, z=50;
  for(i=25; i<=345; i=i+z) {
    DessinerRectangle(i,n,x,x);
  } 
  for(i=25; i<=250; i=i+2*n-50-25){ 
    DessinerRectangle(i,2*n-30,175,x);
  }
  DessinerRectangle(155,325,150,50);
  EcrireTexte(60,218, "Joueur1 est rouge", 0);
  EcrireTexte(125,110, "La taille de grille :",1);
  EcrireTexte(45,160, "3", 2);
  EcrireTexte(95,160, "4", 2);
  EcrireTexte(145,160, "5", 2);
  EcrireTexte(195,160, "6", 2);
  EcrireTexte(245,160, "7", 2);
  EcrireTexte(295,160, "8", 2);
  EcrireTexte(345,160, "9", 2);
  EcrireTexte(130,210, "Le mode de jeu :",1);
  EcrireTexte(60,255, "Un Joueur",1);
  EcrireTexte(230,255, "Deux Joueurs",1);
  EcrireTexte(175,355,"Commencer",1);
  }

/*Cette fonction permet d'afficher sur le deuxième écran la grille de jeu en fonction de la taille choisie précédemment que l'on donne en argument (x), elle affiche également les pions des joueurs dans leurs positions initiales (en haut à gauche et en bas à droite)*/
void Design(int x) {
  const int z=50;
  int j=0, m=0;
  while (j<x*50) {
    m=0;
    while (m<x*50) {
      DessinerRectangle(j,m,z,z);
      m=m+z;
    }
    j=j+z;
  }
  ChargerImage("images/Pion_noir.jpg", 5, 5, 0, 0, 45, 45);
  ChargerImage("images/Pion_red.jpg", x*50-45, x*50-45, 0, 0, 45, 45);
}

/*Affiche le joueur gagnant du jeu en fonction du numéro du joueur et du mode de jeu donner en argument (respectivement joueur et mode), affiche également les boutons demandant à l'utilisateur s'il veut rejouer*/
void Fini(int joueur, int mode){  
  EcrireTexte(35,35, "Le gagant est :", 1);
  if (mode==2){
    if (joueur==1){
      EcrireTexte(50,60, "Joueur1", 2);
    }
    else{
      if (joueur==2){
        EcrireTexte(50,60, "Joueur2", 2);
      }
    }
  }
  if (mode==1){
    if (joueur==1){
      EcrireTexte(50,60, "Vous", 2);
    }
    else{
      if (joueur==2){
        EcrireTexte(50,60, "ORDI", 2);
      }
    }
  }
  EcrireTexte(60,80, "Continuer?",1);
  DessinerRectangle(40,100,60,50);
  DessinerRectangle(100,100,60,50);
  EcrireTexte(55,130, "Oui",1);
  EcrireTexte(115,130, "Non",1);
}

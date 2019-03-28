/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "grille.h"
#include "deplacement.h"
#include "affichejeu.h"

/*Cette fonction permet d'initialiser les cases de la grille de la taille sélectionnée à 0 (libre), elle prend en argument la taille de la grille (size) et un tableau (tab)*/
void Initialiser_grille(int size, int tab[]){
  int x;
  for(x=0; x<81; x++){
    tab[x]=1;
  }
  for(x=1; x<=size*size; x++){
    tab[x]=0;
  }
}

/*Détermine le numéro de la case dans laquelle à cliqué le joueur en fonction de la taille de la grille qu'on lui donne en argument (n)*/
int LocateBox(int n){
  int i, j, minx, maxx, miny=0, maxy=50, valeur=0;
  for (i=0; i<n; i++) {
    minx=0;
    maxx=50;
    for (j=0; j<n; j++) {
      if (_X>=minx && _X<=maxx && _Y>=miny && _Y<=maxy){
	valeur=((n*i+j+1));
      }
      minx=minx+50;
      maxx=maxx+50;
    }
    miny=miny+50;
    maxy=maxy+50;
  }
  return(valeur);
}

/*Dessine la croix du joueur (ou de l'ordinateur) dans la case souhaitée et bloc la cas correspondante dans le tableau (en lui attribuant la valeur 1). Cette fonction à besoin du mode de jeu (mode), du numéro du joueur (joueur), de la grille (grille) et de la taille du plateu de jeu (taille)*/
void Blocage_case (int mode, int joueur, int grille[], int taille){
  int box=0;
  if((mode==1)&&(joueur==2)){
    while(box==0){ 
      box=Ordi_croix(taille);
      if(grille[box]==0){
	DessineCroix_Ordi(taille,box-1);
	grille[box]=1;
      }
      else
	box=0;
    }
  }
  else{
    while(!SourisCliquee()){}
    box=0;
    while(box==0){ 
      box=LocateBox(taille);
      if(grille[box]==0){
	DessineCroix(taille,joueur);
	grille[box]=1;
      }
      else
	box=0;
    }
  }
}

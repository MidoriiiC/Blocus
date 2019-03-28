/*Auteurs Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include <time.h>
#include "deplacement.h"
#include "grille.h"
#include "affichejeu.h"

/*Selectionne une case au hasard à partir de la taille de la grille (n)*/
int Ordi_croix(int n){
  n=rand()%(n*n);
  return(n);
}

/*Selectionne, dans un intervalle autour de la position du joueur (box), une case à partir de la taille de la grille (n) et renvoie cette case*/
int Ordi(int n, int box){
  int val=100;
  while(val>n*n){
    val=box-n-2+rand()%(2*n+4);
    if(val>n*n)
      val=100;
  }
  return(val);
}

/*Vérifie si la case choisie, (automatiquement pour le pion du jouer ordi, au clic pour les utilisateurs), est dans l'intervalle de déplacement (renvoie 1 si c'est le cas)*/
int Soumission(int pos, int box, int taille){
  if(pos==1){
    if((box==pos+1)||(box==pos+taille)||(box==pos+taille+1)){
      return(1);
    }
    else{
      return(0);
    }
  }
  if(pos%taille==0){ /*colonne droite*/
    if((box==pos-taille-1)||(box==pos-taille)||(box==pos-1)||(box==pos+taille)||(box==pos+taille-1)){
      return(1);
    }
    else
      return(0);
  }
  if(pos%taille==1){  /*colonne gauche*/
    if((box==pos-taille+1)||(box==pos-taille)||(box==pos+1)||(box==pos+taille)||(box==pos+taille+1)){
      return(1);
    }
    else
      return(0);
  }
  if(pos%taille>1){
    if((box==pos-taille-1)||(box==pos-taille)||(box==pos-taille+1)||(box==pos+1)||(box==pos-1)||(box==pos+taille+1)||(box==pos+taille)||(box==pos+taille-1)){
      return(1);
    }
    else{
      return(0);
    }
  }
}


/*Deplace le pion du joueur (un ou deux en fonction du tour) en respectant les règles de déplacements par l'appel de la fonction Soumission et "efface" le pion de son ancienne position grâce à l'appel de la fonction Blanc. Cette fonction a besoin en argument du numero du joueur (joueur), de la grille (grille[]), de la position  du joueur et du joueur deux (pos1 et pos2) et de la taille de la grille (taille)*/
void Joueur_BougeMode2(int joueur, int grille[], int *pos1, int *pos2, int taille) {
  int box=0;
  if(joueur==1){
    while(box==0){ 
      while(!SourisCliquee()){}
      box=LocateBox(taille);
      if((grille[box]==0)&&(Soumission(*pos1,box,taille)==1)){
	DessinePion(taille,joueur);
      }
      else
	box=0;
    }
    if(box!=0){
      Blanc(*pos1,taille);
      grille[*pos1]=0;
      grille[box]=2;
      *pos1=box;
    }
  }
  if(joueur==2){
    while(box==0){ 
      while(!SourisCliquee()){}
      box=LocateBox(taille);
      if((grille[box]==0)&&(Soumission(*pos2,box,taille)==1)){
	DessinePion(taille,joueur);
      }
      else
	box=0;
    }
    if(box!=0){
      Blanc(*pos2,taille);
      grille[*pos2]=0;
      grille[box]=2;
      *pos2=box;
    }
  }
}

/*Deplace le pion du joueur (ordinateur ou utilisateur) en respectant les règles de déplacements par l'appel de la fonction Soumission et "efface" le pion de son ancienne position grâce à l'appel de la fonction Blanc. Cette fonction a besoin en argument du numero du joueur (joueur), de la grille (grille[]), de la position  du joueur et du joueur deux (pos1 et pos2) et de la taille de la grille (taille)*/
void Joueur_BougeMode1(int joueur, int grille[], int *pos1, int *pos2, int taille) {
  int box=0;
  if(joueur==1){
    while(box==0){ 
      while(!SourisCliquee()){}
      box=LocateBox(taille);
      if((grille[box]==0)&&(Soumission(*pos1,box,taille)==1)){
	DessinePion(taille,joueur);
      }
      else
	box=0;
    }
    if(box!=0){
      Blanc(*pos1,taille);
      grille[*pos1]=0;
      grille[box]=2;
      *pos1=box;
    }
  }
  if(joueur==2){
    while(box==0){ 
      box=Ordi(taille, *pos2)+2;
      if(box>0){
	if((grille[box]==0)&&(Soumission(*pos2,box,taille)==1)){
	  Dessine_Ordi(taille, box-1);
	}
	else
	  box=0;
      }
      else
	box=0;
    }
    Blanc(*pos2,taille);
    grille[*pos2]=0;
    grille[box]=2;
    *pos2=box;
    box=0;
  }
}


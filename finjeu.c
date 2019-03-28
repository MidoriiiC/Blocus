/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "finjeu.h"

/*Vérifie si les huit cases autour du joueur sont bloquées (par une croix ou l'autre point), la fonction prend en argument la position du joueur (pos), la rtaille de la grille (taille) et la grille (grille[]) et renvoie 0 si le joueur est bloqué*/
int Bloquer(int pos, int taille, int grille[]){
  int val=3;
  if(pos>=taille*(taille-1)){
    if((grille[pos-taille-1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos-taille+1]!=0)&& (grille[pos-1]!=0)&&(grille[pos+1]!=0)){
      val=0;
    }
  }
  if(pos==1){    /* case en haut gauche */
    if((grille[pos+1]!=0)&&(grille[pos+taille]!=0)&&(grille[pos+taille+1]!=0)){
      val=0;
    }
  }
  if(pos==taille){   
    if((grille[pos-1]!=0)&&(grille[pos+pos]!=0)&&(grille[pos+pos-1]!=0)){
      val=0;
    }
  }
  if(pos==taille*taille){
    if((grille[pos-1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos-taille-1]!=0)){
      val=0;
    }
  }
  if(pos==taille*(taille-1)+1){
    if((grille[pos+1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos+taille+1]!=0)){
      val=0;
    }
  }
  if(pos%taille==0){
    if((grille[pos-taille-1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos-1]!=0)&&(grille[pos+taille]!=0)&&(grille[pos+taille-1]!=0)){
      val=0;
    }
  }
  if(pos%taille==1){
    if((grille[pos-taille+1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos+1]!=0)&&(grille[pos+taille]!=0)&&(grille[pos+taille+1]!=0)){
      val=0;
    }
  }
  if (val!=0){
    if((grille[pos-taille-1]!=0)&&(grille[pos-taille]!=0)&&(grille[pos-taille+1]!=0)&&(grille[pos+1]!=0)&&(grille[pos-1]!=0)&&(grille[pos+taille+1]!=0)&&(grille[pos+taille]!=0)&&(grille[pos+taille-1]!=0)){
      val=0;
    }
  }
  return val; 
}

/*Vérifie la valeur renvoyée par Bloquer, si elle est égale à 0 (le joueur est bloqué) elle renvoie le numéro du joueur qui gagne. Cette fonction prend en argument la grille (grille[]), la position des joueurs, permmettant de savoir lequel est bloqué (pos1 et pos2) et la taille de la grille de jeu (taille)*/
int Controle_des_joueurs(int grille[], int pos1, int pos2, int taille){
  int val=3;
  val=Bloquer(pos1, taille, grille);
  if(val==0)
    val=2;
  if (val==3){
    val=Bloquer(pos2, taille, grille);
    if(val==0)
      val=1;
  }
  return val;
}

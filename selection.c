/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "selection.h"
#include "affichage.h"

/*Cette fonction permet d'obliger la selection de la taille du plateau de jeu, et du mode jeu (et l'appui sur "commencer", elle prend en argument les pointeurs de la taille et du mode (respectivement size et mode) et celui représentant la continuation du jeu (rejouer)*/
void On_choisit_les_regles_de_jeu(int *rejouer, int *size, int *mode){
  ChoixJeu();
  while((*rejouer==0)||(*mode==0)||(*size==0)){
    while (!SourisCliquee()){}
    SelectionJeu(size,mode,rejouer);
    if ((*mode==0)||(*size==0)||(*rejouer==0)){
      *rejouer=0;
    }
  }
}

/*Attribue une nouvelle valeur aux pointeurs de taille, mode et continuation de jeu (ptrtaille, ptrmode et ptrstart) en fonction de l'endroit où l'utilisateur à cliqué*/
void SelectionJeu(int * ptrtaille, int * ptrmode, int * ptrstart) {
  int li;
  if((_Y>=125)&&(_Y<=175)){
    for(li=0; li<9; li++){
      if ((_X>=25+50*li)&&(_X<75+50*li)){
	*ptrtaille=li+3;
      }
    }
  }
  if ((_X>=25)&&(_X<200)&&(_Y>=220)&&(_Y<=270)){
    *ptrmode=1;
  }
  if ((_X>=200)&&(_X<=375)&&(_Y>=220)&&(_Y<=270)){
    *ptrmode=2;
  }
  if ((_X>=155)&&(_X<=305)&&(_Y>=325)&&(_Y<=375)){
    *ptrstart=1;
  }
}

/*Change la valeur du pointeur qui permet la continuation du jeu (jeu), selon le clic de l'utilisateur*/
void ChoixContinuer(int * jeu){
  if((_X>=40)&&(_X<=100)&&(_Y>=100)&&(_Y<=150)){
    *jeu=1;
  }
  if((_X>=100)&&(_X<=160)&&(_Y>=100)&&(_Y<=150)){
    *jeu=0;
  }
}

/*Change la valeur du pointeur du joueur (ptr), pour alterner les tours de jeu*/
void ChangeJoueur(int * ptrjoueur){
  if(*ptrjoueur==1)
    *ptrjoueur=2;
  else
    *ptrjoueur=1;
}

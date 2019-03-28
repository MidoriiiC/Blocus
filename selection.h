/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#ifndef SELECTION_H
#define SELECTION_H

void On_choisit_les_regles_de_jeu(int *rejouer, int *size, int *mode);
/*Cette fonction permet d'obliger la selection de la taille du plateau de jeu, et du mode jeu (et l'appui sur "commencer", elle prend en argument les pointeurs de la taille et du mode (respectivement size et mode) et celui représentant la continuation du jeu (rejouer)*/

void ChoixPosIni(int * ptr1, int size, int grille[],int joueur);
/*Permet a un joueur de sélectionne une case qui correspond à la première position de son pion et l'affiche. Cette fonction prend en argument un pointeur de la  position du joueur (ptr1), la taille du plateau de jeu (size), la grille (grille) et le numéro du joueur (joueur)*/

void SelectionJeu(int * ptrtaille, int * ptrmode, int * ptrstart);
/*Attribue une nouvelle valeur aux pointeurs de taille, mode et continuation de jeu (ptrtaille, ptrmode et ptrstart) en fonction de l'endroit où l'utilisateur à cliqué*/

void ChoixContinuer(int * jeu);
/*Change la valeur du pointeur qui permet la continuation du jeu (jeu), selon le clic de l'utilisateur*/

void ChangeJoueur(int * ptr);
/*Change la valeur du pointeur du joueur (ptr), pour alterner les tours de jeu*/

#endif /*SELECTION_H*/

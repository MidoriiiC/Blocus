/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#ifndef GRILLE_H
#define GRILLE_H

void Initialiser_grille(int size, int tab[]);
/*Cette fonction permet d'initialiser les cases de la grille de la taille sélectionnée à 0 (libre), elle prend en argument la taille de la grille (size) et un tableau (tab)*/

int LocateBox(int n);
/*Détermine le numéro de la case dans laquelle à cliqué le joueur en fonction de la taille de la grille qu'on lui donne en argument (n)*/

void Blocage_case (int mode, int joueur, int grille[], int taille);
/*Dessine la croix du joueur (ou de l'ordinateur) dans la case souhaitée et bloc la cas correspondante dans le tableau (en lui attribuant la valeur 1). Cette fonction à besoin du mode de jeu (mode), du numéro du joueur (joueur), de la grille (grille) et de la taille du plateu de jeu (taille)*/

#endif /*GRILLE_H*/

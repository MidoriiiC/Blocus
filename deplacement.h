/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#ifndef DEPLACEMENT_H
#define DEPLACEMENT_H

int Ordi_croix(int n);
/*Selectionne une case au hasard à partir de la taille de la grille (n)*/

int Ordi(int n, int box);
/*Selectionne, dans un intervalle autour de la position du joueur (box), une case à partir de la taille de la grille (n) et renvoie cette case*/

int Soumission(int pos, int box, int taille);
/*Vérifie si la case choisie, (automatiquement pour le pion du jouer ordi, au clic pour les utilisateurs), est dans l'intervalle de déplacement (renvoie 1 si c'est le cas)*/

void Joueur_BougeMode2(int joueur, int grille[], int *pos1, int *pos2, int taille);
/*Deplace le pion du joueur (un ou deux en fonction du tour) en respectant les règles de déplacements par l'appel de la fonction Soumission et "efface" le pion de son ancienne position grâce à l'appel de la fonction Blanc. Cette fonction a besoin en argument du numero du joueur (joueur), de la grille (grille[]), de la position  du joueur et du joueur deux (pos1 et pos2) et de la taille de la grille (taille)*/

void Joueur_BougeMode1(int joueur, int grille[], int *pos1, int *pos2, int taille);
/*Deplace le pion du joueur (ordinateur ou utilisateur) en respectant les règles de déplacements par l'appel de la fonction Soumission et "efface" le pion de son ancienne position grâce à l'appel de la fonction Blanc. Cette fonction a besoin en argument du numero du joueur (joueur), de la grille (grille[]), de la position  du joueur et du joueur deux (pos1 et pos2) et de la taille de la grille (taille)*/

#endif /*DEPLACEMENT_H*/

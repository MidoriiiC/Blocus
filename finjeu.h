/*Auteur : Mathilde Charrière et Chloé Trugeon*/

#ifndef FINJEU_H
#define FINJEU_H

int Bloquer(int pos, int taille, int grille[]);
/*Vérifie si les huit cases autour du joueur sont bloquées (par une croix ou l'autre point), la fonction prend en argument la position du joueur (pos), la rtaille de la grille (taille) et la grille (grille[]) et renvoie 0 si le joueur est bloqué*/

int Controle_des_joueurs(int grille[], int pos1, int pos2, int taille);
/*Vérifie la valeur renvoyée par Bloquer, si elle est égale à 0 (le joueur est bloqué) elle renvoie le numéro du joueur qui gagne. Cette fonction prend en argument la grille (grille[]), la position des joueurs, permmettant de savoir lequel est bloqué (pos1 et pos2) et la taille de la grille de jeu (taille)*/

#endif /*FINJEU_H*/

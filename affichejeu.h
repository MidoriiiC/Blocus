/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#ifndef AFFICHEJEU_H
#define AFFICHEJEU_H

void Dessine_Ordi(int n, int box);
/*Dessine le pion utilisé par l'ordinateur (ici le noir) en fonction de la taille de la grille et de la position du joueur (n et box)*/

void DessineCroix_Ordi(int n, int box);
/*Dessine une croix utilisée par l'ordinateur (ici noir) en fonction de la taille de la grille et de la position du joueur (n et box)*/

void DessinePion(int n, int ptr);
/*Dessine le pion du joueur (rouge ou noir selon ce qui est donné en argument) grâce aux coordonnées de la souris en fonction de la taille (n) et du joueur (ptr) donné en argument*/

void DessineCroix(int n, int ptr);
/*Dessine une croix pour le joueur (rouge ou noir selon ce qui est donné en argument) grâce aux coordonnées de la souris en fonction de la taille (n) et du joueur (ptr) donné en argument*/

void Blanc(int boite, int taille);
/*Colore en blanc la case où se trouvait précédemment le joueur lorsqu'il se déplace, en lui donnant l'ancienne position (boîte) et la taille de la grille (taille)*/

#endif /*AFFICHEJEU_H*/

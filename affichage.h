/*Auteurs: Mathilde Charrière et Chloé Trugeon*/

#ifndef AFFICHAGE_H
#define AFFICHAGE_H

void ChoixJeu(void);
/*Cette fonction permet d'afficher sur le premier écran les différents choix qu'à l'utilisateur pour la taille de la grille et le mode de jeu, elle affiche également le bouton "commencer"*/

void Design(int x);
/*Cette fonction permet d'afficher sur le deuxième écran la grille de jeu en fonction de la taille choisie précédemment que l'on donne en argument (x), elle affiche également les pions des joueurs dans leurs positions initiales (en haut à gauche et en bas à droite)*/

void Fini(int joueur, int mode);
/*Affiche le joueur gagnant du jeu en fonction du numéro du joueur et du mode de jeu donner en argument (respectivement joueur et mode), affiche également les boutons demandant à l'utilisateur s'il veut rejouer*/


#endif /* AFFICHAGE_H */

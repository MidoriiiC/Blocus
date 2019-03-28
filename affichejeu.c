/*Auteurs : Mathilde Charrière et Chloé Trugeon*/

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "affichejeu.h"

/*Dessine le pion utilisé par l'ordinateur (ici le noir) en fonction de la taille de la grille et de la position du joueur (n et box)*/
void Dessine_Ordi(int n, int box){
  int ligne;
  ligne=box/n;
  n=box%n;
  ChargerImage("images/Pion_noir.jpg", (n*50)+5, (ligne*50)+5, 0, 0, 45, 45);
}

/*Dessine une croix utilisée par l'ordinateur (ici noir) en fonction de la taille de la grille et de la position du joueur (n et box)*/
void DessineCroix_Ordi(int n, int box){ 
  int ligne;
  ligne=box/n;
  n=box%n;
  ChargerImage("images/Croix_noire.jpg", (n*50)+5, (ligne*50)+5, 0, 0, 45, 45);
}

/*Dessine le pion du joueur (rouge ou noir selon ce qui est donné en argument) grâce aux coordonnées de la souris en fonction de la taille (n) et du joueur (ptr) donné en argument*/
void DessinePion(int n, int ptr){ 
  int i, j, minx, maxx, miny=0, maxy=50;
  for (i=0; i<n; i++) {
    minx=0;
    maxx=50;
    for (j=0; j<n; j++) {
      if ((_X>=minx && _X<maxx && _Y>=miny && _Y<maxy)&&(ptr==1)) {
	ChargerImage("images/Pion_red.jpg", minx+5, miny+5, 0, 0, 45, 45);
      }
      if ((_X>=minx && _X<maxx && _Y>=miny && _Y<maxy)&&(ptr==2)) {
	ChargerImage("images/Pion_noir.jpg", minx+5, miny+5, 0, 0, 45, 45);
      }
      minx+=50;
      maxx+=50;
    }
    miny+=50;
    maxy+=50;
  }
}

/*Dessine une croix pour le joueur (rouge ou noir selon ce qui est donné en argument) grâce aux coordonnées de la souris en fonction de la taille (n) et du joueur (ptr) donné en argument*/
void DessineCroix(int n, int ptr){ 
  int i, j, minx, maxx, miny=0, maxy=50;
  for (i=0; i<n; i++) {
    minx=0;
    maxx=50;
    for (j=0; j<n; j++) {
      if ((_X>=minx && _X<maxx && _Y>=miny && _Y<maxy)&&(ptr==1)) {
	ChargerImage("images/Croix_rouge.jpg", minx+5, miny+5, 0, 0, 45, 45);
      }
      if ((_X>=minx && _X<maxx && _Y>=miny && _Y<maxy)&&(ptr==2)) {
	ChargerImage("images/Croix_noire.jpg", minx+5, miny+5, 0, 0, 45, 45);
      }
      minx=minx+50;
      maxx=maxx+50;
    }
    miny=miny+50;
    maxy=maxy+50;
  }
}

/*Colore en blanc la case où se trouvait précédemment le joueur lorsqu'il se déplace, en lui donnant l'ancienne position (boîte) et la taille de la grille (taille)*/
void Blanc(int boite, int taille){
  int li, box, val, obj=1;
  couleur w;
  for(li=0; (li<taille)&&(obj=1); li++){
    for(box=0; (box<=taille); box++){
      val=li*taille+box;
      if (boite==val){
	w=CouleurParComposante(255,255,255);
	ChoisirCouleurDessin(w);
	RemplirRectangle(50*(box-1)+5,50*li+5,40,40);
	obj=0;
      }
    }
  }
}

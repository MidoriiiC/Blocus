# Auteurs : Mathilde Charrière et Chloé Trugeon

# CHAPITRE 1 : BUT FINAL

but : Blocus

# CHAPITRE 2 : VARIABLES

OFILES = main.o \
	affichage.o \
	affichejeu.o \
	deplacement.o \
	finjeu.o \
	grille.o \
	selection.o \

CC = gcc

CFLAGS = -Wall -ansi -pedantic -g -lgraph

# CHAPITRE 3 : DEPENDANCES (REGLES IMPLICITES)

deplacement.o : grille.h affichejeu.h

grille.o : deplacement.h affichejeu.h

selection.o : affichage.h

main.o : affichage.h affichejeu.h deplacement.h finjeu.h grille.h selection.h

# CHAPITRE 4 : DEPANDANCES AVEC COMMANDES

Blocus : $(OFILES)
	$(CC) $(CFLAGS) -o Blocus $(OFILES)

# CHAPITRE 5 : NETTOYAGE DES FICHIERS GENERES

clean :
	-rm -f $(OFILES) Blocus

# CHAPITRE 6 : BUTS FACTICES

.PHONY : but clean

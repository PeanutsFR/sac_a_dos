#include "parser.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
Lis dans le fichier data et remplis le tableau d'objets
**/

void lecture(char *filename, objet *tabObjets[], int *capacite) {

  /* Taille du tableau */
    int tailleTab = 0;

  /* Objet temporaire pour remplir le tableau */
  objet *objTemp = NULL;
  objTemp = malloc(sizeof(objet));
  if (objTemp == NULL) {
    exit(0); // on arrête tout
  }
  /* Initialisation de l'objet temporaire */
  objTemp->numero = 0;
  objTemp->poids = 0;
  objTemp->gain = 0;
  objTemp->ratio = 0;

  /* ouverture du fichier data */
  FILE *fichier = NULL;
  fichier = fopen(filename, "r");
  if (fichier == NULL) {
    exit(0); // on arrête tout
  }

  /* On récupère la taille du tableau et la capacité à partir du fichier */
  fscanf(fichier, "%d %d", &tailleTab, capacite);

  /* Allocation de la mémoire pour le tableau d'objets */
  tabObjets = malloc(tailleTab * sizeof(objet));
  if (tabObjets == NULL) {
    exit(0); // on arrête tout
  }

  /* Remplissage du tableau à partir des data */
  for (int i=0; i<tailleTab; i++) {
    /* on récupère l'objet i */
    objTemp->numero = i+1;
    fscanf(fichier, "%d %d", &(objTemp->poids), &(objTemp->gain));
    objTemp->ratio = objTemp->gain/objTemp->poids;

    /* on enregistre l'objet i dans le tableau */
    tabObjets[i] = objTemp;

    printf("tabObjets[%i]->poids : %i\n", i, tabObjets[i]->poids);
  }


// PROBLEME D'ECRITURE DANS LE TABLEAU :
// il faut écrire dans le tableau d'objets de manière à conserver les modifications une fois qu'on sort de la fonction lecture.
// Pour l'instant, on ne peux pas afficher tabObjets[i]->poids dans le main (sacados.c) à cause de ce souci.


}



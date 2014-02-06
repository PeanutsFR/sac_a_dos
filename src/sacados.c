#include "algorithme.h"
#include "parser.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[]) {

/* définition du tableau d'objets */
objet *tabObjets = NULL;

/* définition de la capacité */
int capacite = 0;

/* on prend le fichier data en argument sur la ligne de commande */
char *filename = argv[1];

/* on lit les données du fichier data et on les parse dans le tableau d'objets*/
lecture(filename, &tabObjets, &capacite);

printf("capacite : %i\n", capacite);

// printf("tabObjets[1]->poids : %i\n", tabObjets[1]->poids);
// PROBLEME D'ECRITURE DANS LE TABLEAU :
// il faut écrire dans le tableau d'objets de manière à conserver les modifications une fois qu'on sort de la fonction lecture.
// Pour l'instant, on ne peux pas afficher tabObjets[i]->poids dans le main (sacados.c) à cause de ce souci.


}

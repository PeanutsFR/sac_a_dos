#include "algorithme.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**

+----------+ ALGOS PROPOSES PAR LE PROF +----------+


I/ Compare
---------------

int compare (const objet *obj1, const objet *obj2) {
  return (obj1->gain/obj1->poids > obj2->gain/obj2->poids); // true si ratio(obj1) > ratio(obj2)
}


II/ Sort
---------

qsort(tabObjets, nbObjets, sizeof(objet), (int (*) (const void*, const void*))compare);


III/ Branch and Bound
-----------------------------

i  : indice de l'objet pris en compte (celui pour lequel on n'a pas encore décidé si on le met dans le sac ou non)

C : capacité restante

g : gain cumulé des objets dans le sac,


BranchandBound (i, C, g) {

  si i<n alors

    si (poids[i] <= C) alors
      Solution[i] = 1;
      BranchandBound(i+1, C-poids[i], g+gain[i]);
    fin si

    Solution[i] = 0;
    BranchandBound(i+1,C,g);

  sinon
    si g > optimum alors
      optimum = g
      afficher_solution
    fin si
  fin si

}


**/

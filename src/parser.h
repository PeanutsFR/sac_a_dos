#ifndef __PARSER_H__
#define __PARSER_H__


/* Objets à mettre dans le sac :
  _ numéro : l'indice de l'objet dans la liste initiale (son "identité")
  _ poids : masse de l'objet (kg)
  _ gain : valeur que rapporte l'objet (€)
  _ ratio = gain/poids (€/kg) */

typedef struct objet {
  int numero;
  int poids; // double ou int ? -> le prof a dit double, mais int ça marche bien
  int gain; // double ou int ?
  float ratio;
} objet;

/* Tableau contenant des objets */
objet *tabObjets;

/*******************************************************/

void lecture(char *filename, objet *tabObjets[], int *capacite);








#endif /* __PARSER_H__ */

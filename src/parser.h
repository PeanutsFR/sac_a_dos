#ifndef __PARSER_H__
#define __PARSER_H__

/**
Tableau contenant des objets
**/
objet *tabObjets;

/**
Objets à mettre dans le sac :
  _ numéro : l'indice de l'objet dans la liste initiale (son "identité")
  _ poids : masse de l'objet (kg)
  _ gain : valeur que rapporte l'objet (€)
  _ ratio = gain/poids (€/kg)
  **/
typedef struct objet {
  int numero;
  double poids;
  double gain;
  float ratio;
} objet;


/*******************************************************/

int lire_taille_tableau(string filename);

void lecture(string filename, objet *tabObjets[]);








#endif /* __PARSER_H__ */

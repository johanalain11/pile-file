#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

PILE p;

void estVide(){
	if (p.sommet == index - 1)
      printf("La pile est vide \n");
};

void empiler(int element) {
  if (p.sommet >= index - 1)
    return;
  p.sommet++;
  p.tab[p.sommet] = element;
};

int depiler() {
  if (p.sommet == -1)
    return 1;
   int element;
   element = p.tab[p.sommet];
   p.sommet--;
   return element;
};

void afficher() {
   int i;
   if (p.sommet == -1)
      printf("\nLa pile est vide!");
   else {
      for (i = p.sommet; i >= 0; i--)
         printf("\n%d", p.tab[i]);
   };
};

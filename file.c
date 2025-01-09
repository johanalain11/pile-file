#include <stdio.h>
#include <stdlib.h>
#include "file.h"

FI_LE q;

void estVide2(){
	if (q.sommet == index - 1)
      printf("La file est vide \n");
};

void enfiler(int element) {
  if (q.sommet >= index - 1)
    return;
  q.sommet++;
  q.tab[q.sommet] = element;
};

int defiler() {
   int i = 0;
   int element;
   q.tete--;
   element = q.tab[q.tete];
   while (q.tab[i] == q.tab[q.sommet]){
    q.tab[i] = q.tete;
   	q.tab[i]= q.tab[i+1];
   	i++;
   };
   q.sommet--;
   return element;
};

void afficher2() {
   int i;
   if (q.sommet == -1)
      printf("\nLa file est vide!");
   else {
      for (i = q.sommet; i >= 0; i--)
         printf("\n%d", q.tab[i]);
   };
};

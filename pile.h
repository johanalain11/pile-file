#ifndef _PILE_H_
#define _PILE_H_

#define index 5
struct pile
{
    int tab[index];
    int sommet;
};

typedef struct pile PILE;

void estVide();

void empiler(int element) ;

int depiler() ;

void afficher() ;

#endif


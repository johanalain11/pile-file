#ifndef _FILE_H_
#define _FILE_H_

#define index 5
struct file
{
    int tab[index];
    int sommet;
    int tete;
};

typedef struct file FI_LE;

void estVide2();

void enfiler(int element) ;

int defiler() ;

void afficher2() ;

#endif


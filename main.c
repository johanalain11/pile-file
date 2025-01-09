#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "file.h"

int main() {
    FI_LE q;
    PILE p;

    p.sommet = -1;
    q.sommet = -1;
    q.tete = -1;
    int option = 1;

    printf("\n\tPILE ET FILE");
    while (option) {
      printf("\nMenu principal");
      printf("\n1.Opérations sur une pile \n2.Opérations sur une file \n3.exit ");
      printf("\nEntrez votre choix: ");
      scanf("%d", &option);
      if (option == 1) {
        int option1 = 1;
        int element, choice;
        printf("\n \t Implementation d'une pile");
        while (option1)  {
            printf("\nMenu de pile");
            printf("\n1.Empiler \n2.Depiler \n3.Afficher \n4.est vide? \n5.exit");
            printf("\nEntrez votre choix: ");
            scanf("%d", &choice);
            switch (choice) {
              case 1:
                 printf("\nEnter L'element a  empiler: ");
                 scanf("%d", &element);
                 empiler(element);
                 break;
              case 2:
                 element = depiler();
                 printf("\nL'element a depiler est %d", element);
                 break;
              case 3:
                 afficher();
                 break;
              case 4:
                 estVide();
                 break;
              case 5:
                 exit(0);
              };
            printf("\nVoulez-vous continuer (Tapez 0(Non) ou 1(Oui))? : ");
            scanf("%d", &option1);
               };

        }else if (option == 2){
            int option2 = 1;
            int element, choice;
            printf("\n \t Implementation d'une file");
            while (option) {
            printf("\nMenu principal");
            printf("\n1.Enfiler \n2.Defiler \n3.Afficher \n4.est vide? \n5.exit");
            printf("\nEntrez votre choix: ");
            scanf("%d", &choice);
            switch (choice) {
              case 1:
                 printf("\nEnter L'element a  enfiler: ");
                 scanf("%d", &element);
                 enfiler(element);
                 break;
              case 2:
                 element = defiler();
                 printf("\nL'element a defiler est %d", element);
                 break;
              case 3:
                 afficher();
                 break;
              case 4:
                 estVide();
                 break;
              case 5:
                 exit(0);
              };
            printf("\nVoulez-vous continuer (Tapez 0(Non) ou 1(Oui))? : ");
            scanf("%d", &option2);
               };

        }else if (option == 3){
            exit(0);
        }else {
        printf("\nCette option n'existe pas! Voulez-vous continuer (Tapez 0(Non) ou 1(Oui))? : ");
        scanf("%d", &option);
        };
        printf("\nVoulez-vous quitter (Tapez 0(Non) ou 1(Oui))? : ");
        scanf("%d", &option);
       return 0;
    };
};

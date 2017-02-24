### L'affichage de la taille en mémoire des différentes variables:

```
#include <stdio.h> //Pour ajouter la librairie stdio.h comme toujours.

int main() //Fonction main, plus besoin de la présenter.
{
int i ; //Déclaration d'une variable de type int appellée i. La variable int a une taille de 2 ou 4 octets, selon l'environnement, soit 2^16 ou 2^32 codes possibles
float f ; //Déclaration d'une variable de type float appellée f. Variable float a une taille de 2 octet soit 2^16 codes possibles
double d ; //Déclaration d'une variable de type double appellée d. Variable double a une taille de 8 octet soit 2^64 codes possibles.
char c ; //Déclaration d'une variable de type char appellée c. Variable char a une taille de 1 octet soit 2^8 codes possibles.
printf("taille en memoire de i : %d\n",sizeof(i) ); //Affiche la taille en mémoire de i en octets, soit 4 ici puisque c'est un int.
printf("taille en memoire de f : %d\n",sizeof(f) ); // affiche la taille en mémoire de f en octets, soit 4 puisque c'est un float.
printf("taille en memoire de d : %d\n",sizeof(d) ); //Affiche la taille en mémoire de d en octets, soit 8 puisque c'est un double.
printf("taille en memoire de c : %d\n",sizeof(c) ); //Affiche la taille en mémoire de c en octets, soit 1 puisque c'est char.
return 0; //Fin du programme.
    }
```


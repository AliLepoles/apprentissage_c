### Affichage de l'adresse hexadécimale des variables.

L'adressage de la mémoire en C est chiante on m'avais prévenu donc ca m'étonne pas.


```
#include <stdio.h> //Pour ajouter la librairie stdio.h comme toujours.

int main() //Fonction main, plus besoin de la présenter.
{
int i ; //Déclaration d'une variable de type int appellée i. La variable int a une taille de 2 ou 4 octets, selon l'environnement, soit 2^16 ou 2^32 codes possibles
float f ; //Déclaration d'une variable de type float appellée f. Variable float a une taille de 2 octet soit 2^16 codes possibles
double d ; //Déclaration d'une variable de type double appellée d. Variable double a une taille de 8 octet soit 2^64 codes possibles.
char c ; //Déclaration d'une variable de type char appellée c. Variable char a une taille de 1 octet soit 2^8 codes possibles.
printf("l'adresse en memoire de i : %p \n", &i ); //Affiche l'adresse de i en hexa, affichée avec l'opérateur & qui signifie "adresse de" 
printf("l'adresse en memoire de f : %x \n", &f ); //Affiche l'adresse de f en hexa
printf("l'adresse en memoire de d : %p \n", &d ); //Affiche l'adresse de d en hexa
printf("l'adresse en memoire de c : %x \n", &c ); //Affiche l'adresse de c en hexa

//On remarque l'utilisation de %p et de %x, %p donne les adresses mémoire et %x donne les nombres héxadécimaux, le résultat est meme.
return 0; //Fin du programme.
    }
    ```

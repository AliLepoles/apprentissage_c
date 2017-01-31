### Récupération des valeurs utilisateur.

Pour récupérer des valeurs entrées par l'utilisateur au clavier on utilise la fonction scan(), exemple:

```
#include <stdio.h>
#include <stdlib.h> //Inclusion des librairies nécéssaires.

int main()
{
int rec1, rec2; //Déclaration de deux variables int
    printf("entrer deux valeurs entières :\n"); //Simple fonction printf d'affichage de texte
    scanf("%d%d",&rec1,&rec2); //fonction scanf qui capte les valeurs entrées par l'utilisateur puis qui les aplliquent a une varibale
    printf("les valeurs entrées sont : %d et %d\n",rec1,rec2); //affichage printf des valeurs de variables
    return 0;
}

//Seuls des entiers positifs sont captés. Autrement ca fais déconner le programme. Utiliser un float ou un double pour les réels non-entiers.```

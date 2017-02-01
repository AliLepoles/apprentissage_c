La fonction putchar sert a afficher un charactère a l'écran.
Les opérateurs + et - sont applicables aussi.
Avec une variable personalisée par l'utilisateur on peut en faire un système de cryptologie très très rudimentaire.

```
#include <stdio.h> //Librairies
#include <stdlib.h>

int main()
{ putchar('f'-3); //Affiche f-3 soit c
    putchar('o'); //Affiche o
    putchar('u'-7); //Etc...
    putchar('r'+2);
    putchar('c'+15);
    putchar('h'-7);
    putchar('e'+4);
    putchar('t'-6);
    putchar('t');
    putchar('e');

return 0;
}
```

Au final on affiche le mot contrainte.

```
#include <stdio.h>
#include <stdlib.h> //Librairies

int main() 
{ int key; /Impose une variable "key"
    printf("Tapez votre clef de cryptage nombre entier\n"); //Demande a l'user de taper sa clé de cryptage.
    scanf("%d",&key); //Récupère la clé tapée par l'user
    printf("Votre clef de cryptage est %d \n",key); //Affiche la clé de l'user
    system("PAUSE"); //Pause système
    printf("Affichage de votre mot en cryptage. \n Entrez le dans le log de uncryptage pour connaitre le mot.\n"); //Explications
    putchar('p'+key); // Affiche p+clé
    putchar('r'-key); //Affiche r-clé
    putchar('o'+key); //Affiche o + clé
    putchar('g'-key); //etc...
    putchar('r'+key);
    putchar('a'-key);
    putchar('m'+key);
    putchar('m'-key);
    putchar('a'+key);
    putchar('t'-key);
    putchar('i'+key);
    putchar('o'-key);
    putchar('n'+key);
return 0;
}
```

Au final l'user se retrouve avec le mot crypté et la clé de décryptage. Entrer dans un log de décryptage pour décrypter.

Log de décryptage: a venir.

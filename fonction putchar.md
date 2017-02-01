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

Au final on affiche le mor contrainte.

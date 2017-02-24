### Exemple d'affichage de texte.

```
#include <stdio.h> //Inclusion d'une bibliothèque, en l'ocurrence stdio.h. Primordiale puisqu'elle contient la fonction printf. Sans ca pas de printf et tu affiches que dalle.

int main() //Fonction main vue plus tot.

{
    printf("Tu me met quelques blancos"); //Printf affiche du texte a l'écran. Ne surtout pas oublier les "" en parenthèses, ni bien sur el famoso point virgule.

    system("PAUSE"); //Fais une pause dans le programme

return 0; //Valeur de retour de la fonction main
}
```
---

### Exemple d'affichage de texte avec saut de lignes
```
#include <stdio.h> //Inclusion d'une bibliothèque, en l'ocurrence stdio.h. Primordiale puisqu'elle contient la fonction printf. Sans ca pas de printf et tu affiches que dalle.

int main() //Fonction main vue plus tot.

{
    printf("Tu me met quelques white /nQuelques blancs /nQuelques blancos"); //Printf affiche du texte a l'écran, \n saute une ligne immédiatement a la suite. C'est un antislash et non pas un slash attention.

    system("PAUSE"); //Fais une pause dans le programme

return 0; //Valeur de retour de la fonction main
}
```

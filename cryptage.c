#Logiciel de cryptage basique:

Log de cryptage:

```
#include <stdio.h>
#include <stdlib.h>

int main()
{ int key;
    char lt1, lt2, lt3, lt4, lt5, lt6, lt7, lt8, lt9, lt10, lt11, lt12, lt13;
    printf("Tapez votre clef de cryptage nombre entier\n");
    scanf("%d",&key);
    rewind(stdin);
    printf("Votre clef de cryptage est %d \n",key);
    system("PAUSE");
    printf("Entrez votre mot non crypte en treize lettres \n");
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c",&lt1,&lt2,&lt3,&lt4,&lt5,&lt6,&lt7,&lt8,&lt9,&lt10,&lt11,&lt12,&lt13);
    printf("Votre mot est : %c%c%c%c%c%c%c%c%c%c%c%c%c \n",lt1,lt2,lt3,lt4,lt5,lt6,lt7,lt8,lt9,lt10,lt11,lt12,lt13);
    rewind(stdin);
    system("PAUSE");
    printf("Votre mot crypte est : \n %c%c%c%c%c%c%c%c%c%c%c%c%c",lt1-key,lt2+key,lt3-key,lt4+key,lt5-key,lt6+key,lt7-key,lt8+key,lt9-key,lt10+key,lt11-key,lt12+key,lt13-key);

return 0;
}
```

Log de décryptage:

```
#include <stdio.h>
#include <stdlib.h>

int main()
{ int key;
    char lt1, lt2, lt3, lt4, lt5, lt6, lt7, lt8, lt9, lt10, lt11, lt12, lt13;
    printf("Tapez votre clef de cryptage nombre entier\n");
    scanf("%d",&key);
    rewind(stdin);
    printf("Votre clef de cryptage est %d \n",key);
    system("PAUSE");
    printf("Entrez votre mot crypte en treize lettres \n");
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c",&lt1,&lt2,&lt3,&lt4,&lt5,&lt6,&lt7,&lt8,&lt9,&lt10,&lt11,&lt12,&lt13);
    printf("Votre mot crypte est : %c%c%c%c%c%c%c%c%c%c%c%c%c \n",lt1,lt2,lt3,lt4,lt5,lt6,lt7,lt8,lt9,lt10,lt11,lt12,lt13);
    rewind(stdin);
    system("PAUSE");
    printf("Votre mot decrypte est : \n %c%c%c%c%c%c%c%c%c%c%c%c%c",lt1+key,lt2-key,lt3+key,lt4-key,lt5+key,lt6-key,lt7+key,lt8-key,lt9+key,lt10-key,lt11+key,lt12-key,lt13+key);

return 0;
}
```

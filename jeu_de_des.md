```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
    int encode;
    encode = GetConsoleOutputCP();
    SetConsoleOutputCP(1252);

    int d1,d2,d3,d4,d5,d6,b1,b2,b3,b4,b5,b6,choix,s1,s2,s3,s4,s5,s6;
    srand(time(NULL));
    printf("Jouons aux des\n Vous pouvez tirer jusqu'a 4 dés de suite.\nSi vous obtenez un score superieur a 4 fois votre nombre de lancés, vous gagnez\nMerci de selectionner votre nombre de lances\n");
    scanf("%d",&choix);
    system("PAUSE");

    d1=1+rand()%6;
    d2=1+rand()%6;
    d3=1+rand()%6;
    d4=1+rand()%6;
    d5=1+rand()%6;
    d6=1+rand()%6;
    s1 = d1;
    s2 = d1+d2;
    s3 = d1+d2+d2;
    s4 = d1+d2+d3+d4;

    switch(choix) {
        case 1 : printf("Vous avez choisis de lancer 1 dé.\nLe resultat de votre lancé est %d\n",d1);
            (s1 > 3) ? printf("Vous avez gagné le jeu avec un score de %d",s1) : printf("Vous avez perdu le jeu avec un score de %d",s1);
            break;
        case 2 : printf("Vous avez choisis de lancer 2 dés\n Les resultats de vos lancés sont %d et %d\n",d1,d2);
            (s2 > 7) ? printf("Vous avez gagné le jeu avec un score de %d",s2) : printf("Vous avez perdu le jeu avec un score de %d",s2);
            break;
        case 3 : printf("Vous avez choisis de lancer 3 dés\n Les resultats de vos lancés sont %d, %d et %d\n",d1,d2,d3);
            (s3 > 11) ? printf("Vous avec gagné le jeu avec un score de %d",s3) : printf("Vous avez perdu le jeu avec un score de %d",s3);
            break;
        default : printf("Vous avez choisis de lancer 4 dés\n Les resultats de vos lancés sont %d, %d, %d et %d\n",d1,d2,d3,d4);
            (s4 > 15) ? printf("Vous avez gagné avec un score de %d",s4) : printf("Vous avez perdu avec un score de %d",s4);
            break;
    }

```

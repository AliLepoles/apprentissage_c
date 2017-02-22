// Programme de jeu avec trésor, ennemi et (bientot) ballon controlable.


#include <stdio.h>    // pour utilisation fonctions affichage
#include <stdlib.h>   // pour fonction srand() et rand()
#include <time.h>     // pour initialisation srand() avec time()
#include <conio.h>    // pour fonctions kbhit()et getch()
#include <windows.h>  // pour écriture fonctions gotoxy ci-dessous

void gotoxy(int x, int y)
{
  COORD c;

  c.X = x;
  c.Y = y;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
int encode;
encode = GetConsoleOutputCP();
SetConsoleOutputCP(1252);
int fin=0, res, x, y, trsx=11, trsy=8, foex=1, foey=1, score=1, end=1, foe;					//1
const int TX=20, TY=15;

	srand(time(NULL));
	x=rand()%TX;
	y=rand()%TY;
    foex=rand()%TX;
    foey=rand()%TX;
    foe=rand()%4+1;
	gotoxy(x,y);
	putchar('X');

	while (! fin){ // équivalent à fin==0		//2

       if( kbhit()){					//3

	       gotoxy(x,y);					//4
		 putchar(' ');
            gotoxy(foex,foey);
        putchar(' ');
		 res=getch();					//5
		 switch(res){
		    case 72 :	y--;	break;	// haut
		    case 77 :	x++;	break;	// droite
		    case 80 :	y++;	break;	// bas
		    case 75 :	x--;	break;	// gauche
		    case 224 : 	break;	// évacuer la touche combinée
		    default : fin=1; break; // autre touche :
						 //met fin au prg
	    }
        {gotoxy(foex,foey); //ennemi
	    if (rand()%4 == 4) // fais bouger l'ennemi au hasard
            foey--;
        if (rand()%4 == 1)
            foey++;
        if (rand()%4 == 2)
            foex--;
        if (rand()%4 == 3)
            foe++;}

	    if (x<0)						//retourne le perso en cas d'approche des bords
	       x=TX;
	    if (x>TX)
		x=0;
	    if (y<0)
		y=TY;
	    if (y>TY)
		y=0;

        if (foex<0)						//pareil pour l'ennemi
	       foex=TX;
	    if (foex>TX)
		foex=0;
	    if (foey<0)
		foey=TY;
	    if (foey>TY)
		foey=0;

	    gotoxy(x,y);					//affiche le perso a sa position
	    putchar('X');

	    gotoxy(foex,foey);					//affiche l'ennemi a sa position
	    putchar('O');

	    if (x == trsx && y == trsy) //trésor caché, affiche un message et incrémente le score si touché
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\Vous avez trouvé un trésor. GG. \n Votre score est %d.",score++);
            trsx=rand()%TX;
            trsy=rand()%TY;

        if(x == foex && y == foey) //ennemi déplacant, affiche un death screen et termine le prog
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\Vous avez été touché par l'énnemi. \nVous etes décédé, votre score est %d",score,end++);


        if (end == 2) //termine le document en cas de contact a l'ennemi
        goto fin;

	    }

	}
	fin:
	return 0;
}

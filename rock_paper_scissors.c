#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you,char computer)
{
    if (you==computer)
        return 0;

    if ((you=='s' && computer=='p')||(you == 'p'&& computer =='z')||
        (you=='z'&& computer =='s'))
        return 2;
    
    return 1;
}

int main()
{
    int n;

    char you,computer,result;

    srand(time(NULL));

    n=rand()%100;

    if (n<33)
        computer='s';

    else if (n>33 && n<66)
        computer='p';
    
    else 
        computer='z';

    printf("\tEnter s for STONE, p for PAPER and z for SCISSOR\t\n");

    scanf("%c",&you);
    
    printf("\tYOu choose : %c and Computer choose : %c\n",you, computer);
    
    result=game(you,computer);
    if (result == 2) {
        printf("\tOh! You have lost the game!\n");
    }
    else if (result == 1) {
        printf("\tWow! You have won the game!\n");
    }
    else if (result == 0) {
        printf("\tGame Draw!\n");
    }
        
    return 0;

}


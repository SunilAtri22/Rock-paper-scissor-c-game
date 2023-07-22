#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissor(char you, char bot){

    if(you == 'r' && bot == 's'){
        return 1;
    }
    else if(you == 'r' && bot == 'p'){
        return -1;
    }
     if(you == 'p' && bot == 'r'){
        return 1;
    }
    else if(you == 'p' && bot == 's'){
        return -1;
    }
     if(you == 's' && bot == 'p'){
        return 1;
    }
    else if(you == 's' && bot == 'r'){
        return -1;
    }
    else if(you == bot){
        return 0;
    }    
}   

int main(){
    char you,bot;

    srand(time(0));
    int number = rand()%100 + 1;  //generates a random no b/w 1 to 100
    
    if(number<=33){
        bot = 'r';
    }
    else if(number>33 && number<=66){
        bot = 'p';
    }
    else{
        bot = 's';
    }

    printf("Enter 'r' for rock, 'p' for paper or 's' for scissor : ");
    scanf("%c",&you);

    int result = RockPaperScissor(you, bot);
    printf("You entered %c and Bot entered %c\n",you,bot);

    if(result == 1){
        printf("You win!\n");
    }
    else if(result == -1){
        printf("You lose!\n");
    }
    else if(result == 0){
        printf("GAME DRAW!");
    }

return 0;
}
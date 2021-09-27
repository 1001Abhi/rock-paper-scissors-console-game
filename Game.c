#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char Rockpaperscissors(char u , char c){
    if(u == c){
        return 'D';
    }
    if(u == 'R' && c == 'S'){
         return 'W';
    }
    if(u == 'S' && c == 'R'){
        return 'L';
    }
         
    if(u == 'P' && c == 'R'){
        return 'W';
    }
    if(u == 'R' && c == 'P'){
        return 'L';
    }
        
    if(u == 'S' && c == 'P'){
        return 'W';
    }
    if(u == 'P' && c == 'S'){
        return 'L';
    }
        
} 

int main(){
    char computer, yourself;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number < 33){
       computer = 'P'; 
    }
    else if(number > 33 && number < 66){
        computer = 'R';
    }
    else{
        computer = 'S';
    }
    printf("Enter Rock(R) , Paper(P) & scissors(S)\n");
    scanf("%c",&yourself);
    printf("You chooses %c and Computer chooses %c \n", yourself, computer);
    char result = Rockpaperscissors(yourself, computer);
    if(result == 'W'){
        printf("You Won\n");
    }
    else if(result == 'L'){
        printf("You Lose\n");
    }
    if(result == 'D'){
        printf("Draw");
    }

}

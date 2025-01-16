#include<stdio.h>
int main(){
    char choice, S, Q;
    int rups = 0;
    int ans;
    
    printf("Welcome to KBC\n");
    printf("!!Press S to start the game!!\n");
    printf("!!Press Q to quit the game!!\n");
    scanf("%c",&choice);
    if(choice=='S'){
        printf("Q)1 What is the capital of France?\n\n");
        printf("1. Berlin\n");
        printf("2. Madrid\n");
        printf("3. Paris\n");
        printf("4. Rome\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans);
        if(ans==3){
            printf("Correct Answer\n");
            rups += 100;
            printf("You have earned rupees %d\n", rups);
        } else{
            printf("Wrong Answer\n");
            printf("You have not earned\n");
        }
        printf("Q)2 Which country is known as the 'Land of the rising sun?\n\n");
        printf("1. India\n");
        printf("2. Japan\n");
        printf("3. Nepal\n");
        printf("4. China\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans);
        if(ans==2){
            printf("Correct Answer\n");
            rups += 100;
            printf("You have earned rupees %d\n", rups);
        }
         else{
            printf("Wrong Answer\n");
            printf("You have not earned\n");
        }
        printf("Q)1 From which language did the word 'Ketchup' come from?\n\n");
        printf("1. French\n");
        printf("2. Spanish\n");
        printf("3. Chinese\n");
        printf("4. Japanese\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans);
        if(ans==4){
            printf("Correct Answer\n");
            rups += 100;
            printf("You have earned rupees %d\n", rups);
        }
         else{
            printf("Wrong Answer\n");
            printf("You have not earned\n");
        }
       
        printf("Q)2 What is the capital city of Canada?\n\n");
        printf("1. Toronto\n");
        printf("2. Ottawa\n");
        printf("3. Vancouver\n");
        printf("4. Florida\n");
        printf("Enter Your Answer : ");
        scanf("%d",&ans);
        if(ans==2){
            printf("Correct Answer\n");
            rups += 100;
            printf("You have earned rupees %d\n", rups);
        }
        else{
            printf("Wrong Answer\n");
            printf("You have not earned\n");
        }
        
    }
    else{
        printf("The game has ended\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct quizGame { 
    char question[1000];
    char options[4][1000];
    int correctOption;
} quiz;

void shuffleQuestions(quiz questions[] , int len){
    for(int i = len - 1 ; i > 0 ; i--){
        int j = rand() % (i + 1);
        quiz temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}

int main(){

    int points = 0;

    quiz questions[] = {
        {"What is my name ? " , {"bro" , "neel" , "optimus" , "bhai"} , 2} ,
        {"Who is Optimus ? " , {"prime" , "autobot" , "decepticon" , "both 1 and 2"} , 4} ,
        {"What is the home of Autobots" , {"mars" , "cybertron" , "moon" , "pluto"} , 2},
        {"Who is the commander in charge for optimus" , {"elita1" , "bumble-bee" , "Ultra Magnus" , "wheeljack"} , 3},
    };

    int len = sizeof(questions) / sizeof(questions[0]);

    srand(time(NULL));
    shuffleQuestions(questions , len);

    for(int i = 0 ; i < len ; i++){
        printf("%d) %s\n",i + 1 , questions[i].question);
        for(int j = 0 ; j < 4 ; j++){
            printf("%d %s\n",j + 1 , questions[i].options[j]);
        }

        int a;

        printf("Enter : ");
        scanf("%d",&a);
        printf("\n");

        if(a == questions[i].correctOption){
            printf("\nYAAy! You won 10 points\n");
            points += 10; 
        }
        else{
            printf("\nYou are no prime!\n");
        }
    }
    printf("\nYour Total points are %d",points);

    return 0;
}

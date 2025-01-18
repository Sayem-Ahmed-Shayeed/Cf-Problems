// Guessing Game :

#include<stdio.h>
int main()
{
    int number, guessNumber;
    number = 45;
    //printf("%d",number);
    int i;
    for(i=1; i<=5; i++)
    {
        printf("i: %d\n",i);
        printf("Guess a number(1-100) : ");
        scanf("%d", &guessNumber);



        if(guessNumber == number)//40 == 45
        {
            printf("Congratulations!! Correct Guess!! You have gotten 100 points!!\n");
        }
        else if((guessNumber >= number-3)  &&  (guessNumber <= number+3)) //false
        {
            printf("Oh dear! You are very near!! You have gotten 80 points!!\n");
        }
        else if((guessNumber >= number-5)  &&  (guessNumber <= number+5))
        {
            printf("Your are near to the correct number!! You have gotten 70 points!!\n");
        }
        else if((guessNumber >= 1 && guessNumber <=39) || (guessNumber >= 51 && guessNumber <=100))
        {
            printf("Alas!! Your guessing power is too low!! You have gotten 0 points!!\n");
        }
    }
    return 0;

}

/*
Write a program to give the prize money, who will pass only one subject,
he/she will get 15 tk and who will pass both subjects,he/she will get 45 tk.
*/

#include<stdio.h>
int main()
{
    int subject;

    printf("Enter how many subject you passed?\n");
    printf("Enter 1 if you passed only in math subject.\n");
    printf("Enter 2 if you passed only in chemistry subject.\n");
    printf("Enter 3 if you passed both in math and chemistry subject.\n");

    scanf("%d", &subject);

    if(subject==1 || subject==2){
        printf("Congrats! you got 15 taka as price money.");
    }
    else if(subject==3){
        printf("Congrats! you got 45 taka as price money.");
    }
    else{
        printf("Sorry! you didn't get any price money.");
    }

    return 0;
}

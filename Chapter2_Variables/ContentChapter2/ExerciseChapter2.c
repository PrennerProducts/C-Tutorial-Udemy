#include <stdio.h>

int main(){
    int age;
    printf("Please enter your age in yeras: ");
    scanf("%d", &age);
    if (age < 1){
        printf("ERROR 1:Ungültige Eingabe! Bitte gib eine positive Ganzzahl ein");
        return 1;
    }

    int days = age *365;
    int hours = days * 24;
    int minutes = hours * 60;
    int secounds = minutes * 60;
    printf("You are living since %d days\n", days);
    printf("You are living since %d hours\n", hours);
    printf("You are living since %d minutes\n", minutes);
    printf("You are living since %d seconds\n", secounds);



    return 0;
}

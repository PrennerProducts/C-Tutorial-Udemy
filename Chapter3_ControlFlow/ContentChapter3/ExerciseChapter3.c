#include <stdio.h>

int main()
{
    int number;
    int reminder;
    printf("Please enter a valid unsigned integer!");
    scanf("%d", &number);

    reminder = number % 3;

    if(number % 3 == 0){
        printf("The number you entered is div. by 3!\n");
    }
    else{
        printf("The number you entered is not div. by 3!\n");
    }
    printf("The reminder of the operatio nis: %d\n",reminder);

    return 0;
}

#include <stdio.h>

int main(){

    printf("Hello World!!!\n");
    printf("C biz gelluk");

    float num;
    printf("Pleas enter a number:  ");
    scanf("%f", &num);

    if (num > 0)
        printf("%f is a positive number. /n" , num);
    else if (num == 0)
        printf ("%f is a zero. /n", num);
    else
        printf("%f is a negative number./n", num);
    return 0;

}

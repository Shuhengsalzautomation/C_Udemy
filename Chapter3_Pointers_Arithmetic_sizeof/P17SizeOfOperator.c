#include<stdio.h>
int main()
{
    int grade = 80;
    printf("size of variabl =%ld\n",sizeof(grade));

    double grade3 = 80;
    printf("size of variabl =%ld\n",sizeof(grade3));

    int grade1 = 80, grade2 =90;
    printf("size of variabl =%ld\n",sizeof(grade1+grade2));

    printf("size of variabl =%ld\n",sizeof(grade1)+sizeof(grade2));


    printf("size of double =%ld\n",sizeof(double));
    printf("size of char =%ld\n",sizeof(char));
    printf("size of int =%ld\n",sizeof(int));
    printf("size of float =%ld\n",sizeof(float));
    printf("size of 'a' =%ld\n",sizeof('a'));
    printf("size of a =%ld\n",sizeof("a"));
}
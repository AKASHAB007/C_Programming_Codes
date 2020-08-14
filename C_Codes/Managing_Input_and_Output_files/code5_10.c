//// CODE: P:129 > 5.10 - To Read and display the following data:
/*            NAME      CODE      PRICE
              FAN       67831     1234.50
              MOTOR     450       5786.70
*/
// TODO: NOTE - NAME and CODE must be left-justified and Price must be right-justified.

#include <stdio.h>

int main()
{
    char material1N[10], material2N[10] ;

    int material1C , material2C;

    float material1P,material2P;

    printf("Material NAME: ");
    scanf("%s",&material1N);
 
    printf("Material CODE: ");
    scanf("%d",&material1C);

    printf("Material PRICE: ");
    scanf("%f",&material1P);

    printf("Material NAME: ");
    scanf("%s",&material2N);
 
    printf("Material CODE: ");
    scanf("%d",&material2C);

    printf("Material PRICE: ");
    scanf("%f",&material2P);

    //* Displaying the table

    printf("NAME\t CODE\t PRICE\n");

    printf("%-3s\t %-5d\t %7.2f\n",material1N, material1C, material1P);

    printf("%-5s\t %-3d\t %7.2f\n",material2N, material2C, material2P);

    return 0;
}
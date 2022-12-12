/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{
    float sshirt;
    float mshirt;
    float lshirt;
    int number;
    int total,subTotal,taxPrice;
    

    const double TAX = 0.13;
    const char patSize = 'S';

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&sshirt);
    printf("\nEnter the price for a MEDIUM shirt: $");
    scanf("%f",&mshirt);
    printf("\nEnter the price for a LARGE shirt: $");
    scanf("%f",&lshirt);



    printf("\n\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",sshirt);
    printf("MEDIUM  : $%.2f\n",mshirt);
    printf("LARGE  : $%.2f\n\n",lshirt);

    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying:");
    scanf("%d",&number);
    printf("\n\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n",number);

    subTotal=(number*sshirt)*100;
    taxPrice=(((TAX*sshirt)*number)*100);
    total=subTotal+taxPrice;

    printf("Sub-total: %d\n",subTotal);
    printf("Taxes    : %d\n",taxPrice);
    printf("Total    : %d\n",total);



    return 0;
}

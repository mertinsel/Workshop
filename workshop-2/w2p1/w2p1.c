/*
*****************************************************************************
                          Workshop - #2 (P1)

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main()
{


    const double TAX = 0.13;
    const char patSize = 'S';

    float small_shirt;
    float medium_shirt;
    float large_shirt;
    int number;
    int total,taxPrice,subTotal;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&small_shirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&medium_shirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&large_shirt);



    printf("\n\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",small_shirt);
    printf("MEDIUM : $%.2f\n",medium_shirt);
    printf("LARGE  : $%.2f\n\n",large_shirt);

    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying:");
    scanf("%d",&number);

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n",number);

    subTotal=(number*small_shirt)*100+0.5;
    taxPrice=(((TAX*small_shirt)*number)*100+0.5);
    total=subTotal+taxPrice;

    printf("Sub-total:$%8.4lf\n",(float)subTotal/100);
    printf("Taxes    :$%8.4lf\n",(float)taxPrice/100);
    printf("Total    :$%8.4lf\n",(float)total/100);



    return 0;
}

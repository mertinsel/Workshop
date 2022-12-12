/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    float sshirt, mshirt,lshirt;
    int patNumber,tomNumber,salNumber;
    int total,subTotal,taxPrice,coin,avargeCost;

    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

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
    scanf("%d",&patNumber);

    printf("\nTommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Patty is buying:");
    scanf("%d",&tomNumber);

    printf("\nSally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Patty is buying:");
    scanf("%d",&salNumber);

    printf("\nCustomer Size Price Qty Sub-Total\tTax\tTotal\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    subTotal=(patNumber*sshirt)*100;
    taxPrice=((patNumber*sshirt)*TAX)*100;
    total=subTotal+taxPrice;

    printf("Patty  %3c  %7.2lf  %-2d %9d %9d %9d\n",patSize,sshirt,patNumber,subTotal,taxPrice,total);
    subTotal=(salNumber*mshirt)*100;
    taxPrice=((salNumber*mshirt)*TAX)*100;
    total=subTotal+taxPrice;

    printf("Sally  %3c  %7.2lf  %-2d %9d %9d %9d\n",salSize,mshirt,salNumber,subTotal,taxPrice,total);
    subTotal=(tomNumber*lshirt)*100;
    taxPrice=((tomNumber*lshirt)*TAX)*100;
    total=subTotal+taxPrice;

    printf("Tommy  %3c  %7.2lf  %-2d %9d %9d %9d\n",tomSize,lshirt,tomNumber,subTotal,taxPrice,total);
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    subTotal=((tomNumber*lshirt)+(salNumber*mshirt)+(patNumber*sshirt))*100;
    taxPrice=((tomNumber*lshirt)*TAX+(salNumber*lshirt)*TAX+(patNumber*sshirt)*TAX)*100;
    total=subTotal+taxPrice;
    printf("%33d %9d %9d\n\n",subTotal,taxPrice,total);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");



    //tax free calculation
    printf("Sales EXCLUDING tax\n");
    printf("Coin\t Qty\tBalance\n");
    printf("-------- --- ---------\n");
    

    printf("%22d \n",subTotal);
    avargeCost=subTotal/(salNumber+patNumber+tomNumber);
    coin=subTotal/200;
    subTotal=subTotal%200;
    printf("Toonies %4d %9d\n",coin,subTotal);

    coin=subTotal/100;
    subTotal=subTotal%100;
    printf("Loonies %4d %9d\n",coin,subTotal);

    coin=subTotal/25;
    subTotal=subTotal%25;
    printf("Quarters %3d %9d\n",coin,subTotal);

    coin=subTotal/10;
    subTotal=subTotal%10;
    printf("Dimes %6d %9d\n",coin,subTotal);

    coin=subTotal/1;
    subTotal=subTotal%1;
    printf("Pennies %4d %9d\n\n",coin,subTotal);

    printf("Average cost/shirt:%1d\n\n",avargeCost);





    //tax calculation
    printf("Sales INCLUDING tax\n");
    printf("Coin\t Qty\tBalance\n");
    printf("-------- --- ---------\n");
    

    printf("%22d \n",total);
    avargeCost=total/(salNumber+patNumber+tomNumber);

    coin=total/200;
    total=total%200;
    printf("Toonies %4d %9d\n",coin,total);

    coin=total/100;
    total=total%100;
    printf("Loonies %4d %9d\n",coin,total);

    coin=total/25;
    total=total%25;
    printf("Quarters %3d %9d\n",coin,total);

    coin=total/10;
    total=total%10;
    printf("Dimes %6d %9d\n",coin,total);

    coin=total/1;
    total=total%1;
    printf("Pennies %4d %9d\n\n",coin,total);





    return 0;
}





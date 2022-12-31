/*
*****************************************************************************
                          Workshop - #2 (P2)


*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    float small_shirt, medium_shirt,large_shirt;
    int patNumber,tomNumber,salNumber;
    int total,subTotal,taxPrice,coin,avargeCost;
    


    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&small_shirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&medium_shirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&large_shirt);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",small_shirt);
    printf("MEDIUM : $%.2f\n",medium_shirt);
    printf("LARGE  : $%.2f\n\n",large_shirt);

    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&patNumber);

    printf("\nTommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&tomNumber);

    printf("\nSally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d",&salNumber);

    printf("\nCustomer Size Price Qty Sub-Total\tTax\tTotal\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    subTotal=(patNumber*small_shirt)*100+0.5;
    taxPrice=((patNumber*small_shirt)*TAX)*100+0.5;
    total=subTotal+taxPrice;

    printf("Patty  %3c  %7.2lf  %2d %9.4lf %9.4lf %9.4lf\n",patSize,small_shirt,patNumber,(float)subTotal/100,(float)taxPrice/100,(float)total/100);
    subTotal=(salNumber*medium_shirt)*100+0.5;
    taxPrice=((salNumber*medium_shirt)*TAX)*100+0.5;
    total=subTotal+taxPrice;

    printf("Sally  %3c  %7.2lf  %2d %9.4lf %9.4lf %9.4lf\n",salSize,medium_shirt,salNumber,(float)subTotal/100,(float)taxPrice/100,(float)total/100);
    subTotal=(tomNumber*large_shirt)*100+0.5;
    taxPrice=((tomNumber*large_shirt)*TAX)*100+0.5;
    total=subTotal+taxPrice;

    printf("Tommy  %3c  %7.2lf  %2d %9.4lf %9.4lf %9.4lf\n",tomSize,large_shirt,tomNumber,(float)subTotal/100,(float)taxPrice/100,(float)total/100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");

    subTotal=((tomNumber*large_shirt)+(salNumber*medium_shirt)+(patNumber*small_shirt))*100+0.5;
    taxPrice=(((tomNumber*large_shirt)*TAX)+((salNumber*medium_shirt)*TAX)+((patNumber*small_shirt)*TAX))*100+0.5;
    total=subTotal+taxPrice;
    printf("%33.4lf %9.4lf %9.4lf\n\n",(float)subTotal/100,(float)taxPrice/100,(float)total/100);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");



    //tax free calculation
    printf("Sales EXCLUDING tax\n");
    printf("Coin\t Qty\tBalance\n");
    printf("-------- --- ---------\n");
    

    printf("%22.4lf \n",(float)subTotal/100);
    avargeCost=subTotal;

    coin=subTotal/200;
    subTotal=subTotal%200;
    printf("Toonies %4d %9.4lf\n",coin,(float)subTotal/100);

    coin=subTotal/100;
    subTotal=subTotal%100;
    printf("Loonies %4d %9.4lf\n",coin,(float)subTotal/100);

    coin=subTotal/25;
    subTotal=subTotal%25;
    printf("Quarters %3d %9.4lf\n",coin,(float)subTotal/100);

    coin=subTotal/10;
    subTotal=subTotal%10;
    printf("Dimes %6d %9.4lf\n",coin,(float)subTotal/100);

    coin=subTotal/5;
    subTotal=subTotal%5;
    printf("Nickels %4d %9.4lf\n",coin,(float)subTotal/100);

    coin=subTotal/1;
    subTotal=subTotal%1;
    printf("Pennies %4d %9.4lf\n\n",coin,(float)subTotal/100);

    subTotal=avargeCost;
    
    printf("Average cost/shirt: $%.4f\n\n",(float)subTotal/(salNumber+patNumber+tomNumber)/100);





    //tax calculation
    printf("Sales INCLUDING tax\n");
    printf("Coin\t Qty\tBalance\n");
    printf("-------- --- ---------\n");
    

    printf("%22.4lf \n",(float)total/100);
    avargeCost=total;

    coin=total/200;
    total=total%200;
    printf("Toonies %4d %9.4lf\n",coin,(float)total/100);

    coin=total/100;
    total=total%100;
    printf("Loonies %4d %9.4lf\n",coin,(float)total/100);

    coin=total/25;
    total=total%25;
    printf("Quarters %3d %9.4lf\n",coin,(float)total/100);

    coin=total/10;
    total=total%10;
    printf("Dimes %6d %9.4lf\n",coin,(float)total/100);

    coin=total/5;
    subTotal=total%5;
    printf("Nickels %4d %9.4lf\n",coin,(float)subTotal/100);

    coin=total/1;
    total=total%1;
    printf("Pennies %4d %9.4lf\n\n",coin,(float)total/100);

    total=avargeCost;
    printf("Average cost/shirt: $%.4lf\n\n",(float)total/(salNumber+tomNumber+patNumber)/100);




    return 0;
}





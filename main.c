#include <stdio.h>
#include <stdlib.h>

int main()
{
 char Item_Name, soap, Sugar, maize_flour,cooking_oil,lentils;
 int Qty;
 int price,Amt,code,Total_Amt;
 char addAnother;
    do{
     system("cls");
    printf("======================\n");
 printf("BAKSHI MINI-MART\n");
 printf("======================\n");

  printf("===========\n");
  printf("ITEM MENU\n");
  printf("===========\n");
 printf("[1]sugar\t\tp 150\n");
 printf("[2]soap\t\tp  150\n");
 printf("[3]maize_flour\t\tp 200\n");
 printf("[4]cooking_oil\t\tp 400\n");
 printf("[5]lentils\t\tp 300\n");

  printf("Enter code:");
  scanf("%d", &code);
  printf("Enter Qty:");
  scanf("%d", & Qty);

  switch(code){
    case 1 : price = 150;
            break;
    case 2 : price = 150;
            break;
    case 3 : price = 200;
            break;
    case 4 : price = 400;
            break;
    case 5 : price = 300;
            break;
  }
  Amt= price* Qty;
  printf("\nAmt: %d", Amt);
  Total_Amt =  Total_Amt + Amt;
  printf("\nTotal_Amt: %d", Total_Amt);

   printf("\nAdd another(y/n)?");
  addAnother = getche();
    }while(addAnother == 'y' || addAnother == 'Y');


















    return 0;
}

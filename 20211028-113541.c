#include <stdio.h>

int main(){
int choices, price , payment, change;
printf("\n===============================");
printf("\nPlease pick you favorite order:");
printf("\n===============================");
printf("\n[1]Pepsi(P85)\n[2]Dr Pepper (P140)\n[3] Coca-cola(P79)\nChoice:");

scanf("%d", &choices);

switch (choices){

  case 1:
  price =85;
  printf("please input payment:");
  scanf("%d",&payment);
  if(payment>=price){
  printf("\nsuccess! Enjoy your pepsi sir/ma'am.\ ");
  change = payment-price;
  printf("\nchange: %d\n", change);
  }
  else
  {
    printf("apparently you do not have enough money");
  }
break; 

case 2:
price =140;
printf("please input payment");
scanf("%d", &payment);
if (payment>=price){
  printf("\nHere's your Dr Pepper Sir/Ma'am.");
  change = payment-price;
  printf("\nChange: %d\n", change);
}
else{
  printf("apparently you do not have enough money");
}
  
break;
case 3:
price =79;
printf(" Please input payment:");
scanf("%d", &payment);
if(payment>=price){
printf("\nsuccess enjoy your coca cola sir/ma'am.");
change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{
  printf("apparently you dont have enough money");
  }
  break;

  default:
  printf("invalid input");
}
  return 0;
  }
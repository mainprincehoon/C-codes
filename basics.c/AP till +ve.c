#include <stdio.h>
int main(){

int a,b;
printf("enter the number till you want the AP: ");
scanf("%d",&a);
printf("enter the common difference : ");
scanf("%d",&b);
printf("Your AP is : ");
while(a>0){
    printf("%d", a);
    a=a-b;
    printf(",");
}

return 0;
}


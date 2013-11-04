#include<stdio.h>
#include<conio.h>

int main ()
{
    int Int1,Int2,Int3,Int4,sum;
    printf("1st quarter:");
    scanf("%d",&Int1);
    printf("2nd quarter:");
    scanf("%d",&Int2);
    printf("3rd quarter:");
    scanf("%d",&Int3);
    printf("4th quarter:");
    scanf("%d",&Int4);   
    
    sum=(Int1+Int2+Int3+Int4)/4;
    printf("Average is %d", sum);
    getch();
    return 0;
}

#include<stdio.h>

main()

{
  int a;
  printf("enter the number a:");
  scanf("%d",&a);
  if (a>0)
  {
    print("%d is positive.",a);
  }
  else if (a<0)
  {
    printf("%d is negative.",a);
  }
   else if (a==0)
   {
    printf("%d is zero.",a);
   }
   getch();
}
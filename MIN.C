#include<stdio.h>

main()
{
  int num1,num2;
  print("enter two number");
  scanf("%d",&num1,&num2);
  if (num1<num2)
  {
   printf("%d is smaller",num1);
  }
  else if(num2<num1)
  {
   printf("%d is smaller",num2);
  }
  else
  {
   printf("%d and %d are equal",num1,num2);
  }
  getch();
}

#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[10]={0},i,top=-1,max=10,n,x;
 clrscr();
 printf("\n\t menu\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
 do
 {
  printf("\n enter ur choice \n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:if(top==max-1)
	  printf("overflow");
	  else
	  {
	  printf("enter element:\n");
	  scanf("%d",&x);
	  a[++top]=x;
	  }break;

   case 2:if (top<0)
	  printf("underflow");
	  else
	  printf("the deleted item is=%d",a[top--]);
	  break;

   case 3:if(top<0)
	  printf("stack izz empty");
	  else
	  {
	  printf("d element of stack r");
	  for(i=0;i<=top;i++)
	  printf("%d\n",a[i]);
	  }break;

   case 4:break;

   default: printf("invalid");
	    break;
	    }

	    }
	    while(n!=4);
	    }
	    getch();


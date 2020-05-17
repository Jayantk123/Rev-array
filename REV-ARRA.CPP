   #include<stdio.h>
   #include<conio.h>

   void main()
   {
   int a[20],i,n;
   clrscr();

   printf("Enter no. of digits of number:\n");
   scanf("%d",&n);

   printf("Enter no.:\n");
   for(i=1;i<=n;i++)
   {
   scanf("%d",&a[i]);
   }
   printf("Reverse of number is:\n");
   for(i=n;i>=1;i--)
   {
   printf("%d",a[i]);
   }
   getch();
   }
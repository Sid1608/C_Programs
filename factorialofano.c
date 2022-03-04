/* Write a program to find the factorial value
 of any number entered through the keyboard. */
 main()
 {
     int n,i,fact=1;
     printf("enter a no");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         fact=fact*i;
     }
     printf("fatorial of a no is %d",fact);

 }

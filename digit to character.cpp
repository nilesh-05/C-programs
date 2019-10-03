#include <stdio.h>
int main()
{
    int n, rem, ct=0, rev =0,m;
    scanf("%d", &n);
    m = n;
     while(n>0)
     {
         rem = n%10;
         rev = rev * 10 + rem;
         n = n/10;
     }
     n = m;
     while(rev>0)
     {
         rem = rev%10;
         rev = rev/10;

         if(ct==1)
           printf("thousand ");
         else if(ct==2)
           printf("hundred ");
           ct++;
         switch(rem)
         {
             case 1:
               printf("one ");
               break;
             case 2:
               if(ct==3)
               printf("twenty ");
               else
               printf("two ");
               break;
             case 3:
               if(ct==3)
               printf("thirty ");
               else
               printf("three ");
               break;
             case 4:
               if(ct==3)
               printf("fourty ");
               else
               printf("four ");
               break;
             case 5:
               if(ct==3)
               printf("fifty ");
               else
               printf("five ");
               break;
             case 6:
               if(ct==3)
               printf("sixty ");
               else
               printf("six ");
               break;
             case 7:
               if(ct==3)
               printf("seventy ");
               else
               printf("seven ");
               break;
             case 8:
               if(ct==3)
               printf("eighty ");
               else
               printf("eight ");
               break;
             case 9:
               if(ct==3)
               printf("ninety ");
               else
               printf("nine ");
               break;
         }
     }
    return 0;
}

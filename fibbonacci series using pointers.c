#include <stdio.h>

int main(int argc, char **argv)
{
    int i=0,j=1,a,k,end;
    int *p;
    p=&k;
    scanf("%d",&end);
    printf("0 1 ");
    for(a=1;a<=end;a++)
    {
        k=i+j;
        printf("%d ",*p);
        i=j;
        j=k;
    }
	return 0;
}

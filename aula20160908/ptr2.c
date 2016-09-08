#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5]={0,1,2,4,8};
    int flag=0;
    unsigned char *p=NULL, *q;
    p=q=(unsigned char *) vet;
    for (; p<q+sizeof(vet);p++)
    {
        if(*p==0x0)
            flag++;
        printf("%p:%X\n", p, *p);
    }
    printf("Bytes apenas com 0's:%d\n", flag);
    return 0;
}

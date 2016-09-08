#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[]={0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int flag=0;
    unsigned char *p=NULL, *q;
    p=q=(unsigned char *) vet;
    for (; p<q+sizeof(vet);p++)
    {
        if(*p==0xFF)
            flag++;
        printf("%p:%X\n", p, *p);
    }
    printf("Bytes apenas com 1's:%d\n", flag);
    return 0;
}

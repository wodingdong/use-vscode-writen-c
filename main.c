
#include <stdio.h>
#include "add/add.h"
#include "sub/sub.h"

int main()
{
    int a = 5;
    int b=2;
    int sum = add(a,b);
    int su = sub(a,b);
    
    printf("sum:%d\nsub:%d\n",sum,su);
    return 0;
}
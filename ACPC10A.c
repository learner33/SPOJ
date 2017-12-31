#include <stdio.h>

int main(void) {
int x,y,z; int p=0;
scanf("%d %d %d",&x,&y,&z);

do{
if(x==0 && y==0 && z==0)
{
	p=1;
    break;
}
else
{
	if(y-x==z-y)
	printf("AP %d\n",z+(z-y));
	else
	printf("GP %d\n",z*(z/y));
scanf("%d %d %d",&x,&y,&z);
}
}while(p!=1);
	return 0;
}

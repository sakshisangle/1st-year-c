#include<stdio.h>

enum{jan,feb,mar,apr,may,jun,jul,
     aug,sep,oct,nov,dec};
     
int main()
{
int i;
for(i=jan; i<=dec; i++)
printf("%d\n",i);

return 0;
}

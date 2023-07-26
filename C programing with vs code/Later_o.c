/*
1 2 3 4
  * *   1
*     * 2
*     * 3
*     * 4
*     * 5
  * *   6
*/
#include<stdio.h>
int main()
{
int r,c;

for(r=1;r<=6;r++)
{
switch(r)
{
case 2:
case 3:
case 4:
case 5:
for(c=1;c<=4;c++)
{
if((c==1)||(c==4))
printf("%c,3");
else
printf(" ");
}
break;
case 1:
case 6:
for(c=1;c<=4;c++)
{
if((c==2)||(c==3))
printf("%c,3");
else
printf(" ");
}
break;
}
printf("\n");
}
}




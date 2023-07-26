/*
1 2 3 4 5 6 7 8 9 10
*     *     * * *     1.
*     *   *           2.
*     *   *           3.
* * * *     * * *     4.
*     *           *   5.
*     *           *   6.
*     * *   * * *     7.
*/
#include<stdio.h>

int main()
{
int r,c;

for(r=1;r<=7;r++)
{
switch(r)
{
case 1:
for(c=1;c<=10;c++)
{
if((c==1)||(c==4)||(c==7)||(c==8)||(c==9))
printf("* ");
else
printf("  ");
}
break;
case 2:
case 3:
for(c=1;c<=10;c++)
{
if((c==1)||(c==4)||(c==6))
printf("* ");
else
printf("  ");
}
break;
case 5:
case 6:
for(c=1;c<=10;c++)
{
if((c==1)||(c==4)||(c==10))
printf("* ");
else
printf("  ");
}
break;
case 4:
for(c=1;c<=10;c++)
{
if((c==1)||(c==2)||(c==3)||(c==4)||(c==7)||(c==8)||(c==9))
printf("* ");
else
printf("  ");
}
break;
case 7:
for(c=1;c<=10;c++)
{
if((c==1)||(c==4)||(c==7)||(c==8)||(c==9)||(c==5))
printf("* ");
else
printf("  ");
}
break;
}
printf("\n");
}

}
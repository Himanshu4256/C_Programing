/*
			        * *               1
			      *     *             2
			    *         *           3
		      *             *         4
		    *                 *       5
		    * * * * * * * * * *       6
		    * * *         * * *       7
		    * * *   * *   * * *       8
		    * * * *     * * * *       9,
		    * * * *     * * * *       10,
		  * * * * *     * * * * *     11
		  * * * * * * * * * * * *     12
		  1 2 3 4 5 6 7 8 9 10 1112
*/
#include<stdio.h>

void main()
{
int r,c;

for(r=1;r<=12;r++)
{
switch(r)
{
case 9:
case 10:
for(c=1;c<=12;c++)
{
if((c==2)||(c==3)||(c==4)||(c==5)||(c==8)||(c==9)||(c==10)||(c==11))
printf("* ");
else
printf("  ");
}
break;
case 1:
for(c=1;c<=12;c++)
{
if((c==6)||(c==7))
printf("* ");
else
printf("  ");
}
break;
case 2:
for(c=1;c<=12;c++)
{
if((c==5)||(c==8))
printf("* ");
else
printf("  ");
}
break;
case 3:
for(c=1;c<=12;c++)
{
if((c==4)||(c==9))
printf("* ");
else
printf("  ");
}
break;
case 4:
for(c=1;c<=12;c++)
{
if((c==3)||(c==10))
printf("* ");
else
printf("  ");
}
break;
case 5:
for(c=1;c<=12;c++)
{
if((c==2)||(c==11))
printf("* ");
else
printf("  ");
}
break;
case 6:
for(c=1;c<=12;c++)
{
if((c==2)||(c==3)||(c==4)||(c==5)||(c==6)||(c==7)||(c==8)||(c==9)||(c==10)||(c==11))
printf("* ");
else
printf("  ");
}
break;
case 7:
for(c=1;c<=12;c++)
{
if((c==2)||(c==3)||(c==4)||(c==9)||(c==10)||(c==11))
printf("* ");
else
printf("  ");
}
break;
case 8:
for(c=1;c<=12;c++)
{
if((c==2)||(c==3)||(c==4)||(c==6)||(c==7)||(c==9)||(c==10)||(c==11))
printf("* ");
else
printf("  ");
}
break;
case 11:
for(c=1;c<=12;c++)
{
if((c==1)||(c==2)||(c==3)||(c==4)||(c==5)||(c==8)||(c==9)||(c==10)||(c==11)||(c==12))
case 12:
for(c=1;c<=12;c++)
printf("* ");
}
break;
}
printf("\n");
}

}
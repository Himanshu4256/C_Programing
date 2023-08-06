/*                  		 * * * * *                 1.
			       *           *               2.
			     *               *             3.
			     *               *             4.
			     *   * * * * *   *             5.
			     *   * * * * *   *             6.
			     *   * * * * *   *             7.
			     *               *             8.
			     *               *             9.
			     *               *             10.
			     *               *             11.
	     	     * * * * * * * * * * * * * * * * *     12.
		     * * * * * * * * * * * * * * * * *     13.
			       *           *               14.
			     *               *             15.
		     * * * * * * * * * * * * * * * * *     16.
	           *                                   *   17
		     * * * * * * * * * * * * * * * * *     18.
		   1 2 3 4 5 6 7 8 9 10  12  14  16  18
				       11  13  15  17  19
				       */
#include<stdio.h>

void main()
{
int r,c;

for(r=1;r<=18;r++)
{
switch(r)
{
case 3:
case 4:
case 8:
case 9:
case 10:
case 11:
for(c=1;c<=19;c++)
{
if((c==6)||(c==14))
printf("* ");
else
printf("  ");
}
break;
case 5:
case 6:
case 7:
for(c=1;c<=19;c++)
{
if((c==6)||(c==8)||(c==9)||(c==10)||(c==11)||(c==12)||(c==14))
printf("* ");
else
printf("  ");
}
break;
case 12:
case 13:
case 16:
case 18:
for(c=1;c<=19;c++)
{
if((c==2)||(c==3)||(c==4)||(c==5)||(c==6)||(c==7)||(c==8)||(c==9)||(c==10)||(c==11)||(c==12)||(c==13)||(c==14)||(c==15)||(c==16)||(c==17)||(c==18))
printf("* ");
else
printf("  ");
}
break;
case 1:
for(c=1;c<=19;c++)
{
if((c==8)||(c==9)||(c==10)||(c==11)||(c==12))
printf("* ");
else
printf("  ");
}
break;
case 2:
for(c=1;c<=19;c++)
{
if((c==7)||(c==13))
printf("* ");
else
printf("  ");
}
break;
case 14:
for(c=1;c<=19;c++)
{
if((c==7)||(c==13))
printf("* ");
else
printf("  ");
}
break;
case 17:
for(c=1;c<=19;c++)
{
if((c==1)||(c==19))
printf("* ");
else
printf("  ");
}
break;
case 15:
for(c=1;c<=19;c++)
{
if((c==6)||(c==14))
printf("* ");
else
printf("  ");
}
break;
}
printf("\n");
}
printf("\t\n Har Har mahadev...");

}

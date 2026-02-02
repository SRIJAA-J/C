#include<stdio.h>
#include<conio.h>
#include<string.h>
void head();
void Petrol();
void amount(char s[10],int n,char r[20]);
int main()
{
clrscr();
head();
getch();
return 0;
}
void head()
{
clrscr();
printf("\n--------------------------------------------------------------------------------");
printf("\t\tFUEL QUANTITY AND AMOUNT OF PETROL AND DIESEL");
printf("\nDONE BY: J SRIJAA       ENO:27357      COURSE: ADJP         FACULTY: SRUTHI");
printf("\n--------------------------------------------------------------------------------");
Petrol();
}
void Petrol()
{
float b;
float x;
char c[10];
char s[100];
int a=strlen(s);
/*printf("---------------------------------------------------------------------------------");
printf("FUEL QUANTITY AND AMOUNT OF PETROL AND DEISEL");
printf("DONE BY: J SRIJAA   Eno:27357    COURSE: ADJP   FACULTY: SRUTHI");
printf("---------------------------------------------------------------------------------");*/
printf("\nFuel Type is (P/D):");
gets(s);
if(strlen(s)==0)
{
printf("Null Input");
Petrol();
}
else if(strlen(s)==1)
{
if(s[0]=='P' || s[0]=='p')
{
printf("Petrol");
amount(s,75,"Petrol");
}
else if(s[0]=='D' || s[0]=='d')
{
printf("Diesel");
amount(s,70,"Diesel");
}
else if(s[0]!='P' && s[0]!='p' && s[0]!='D' && s[0]!='d')
{
printf("INVALID");
Petrol();
}
}
else if(strlen(s)>1)
{
printf("INVALID");
Petrol();
}
}
void amount(char s[10],int n,char r[20])
{
int i;
float b;
char c[10];
char p[20];
float x;
printf("\nEnter the amount between 50 to 10000:");
gets(c);
for(i=0;i<strlen(c);i++)
{
if(isdigit(c[i]))
{
}
else
{
printf("INVALID");
amount(s,n,r);
}
}
b=atoi(c);
if(b>=50 && b<=10000)
{
x=b/n;
printf("%f %s",x,r);
}
else if(!(b>=50 && b<=10000 ))
{
printf("INVALID");
amount(s,n,r);
}
a:
printf("\nDo you want to run the program again (Y/N):");
scanf("%s",&p);
if(p[0]=='Y' || p[0]=='y')
{
flushall();
head();
}
else if(p[0]=='N' || p[0]=='n')
{
printf("THANK YOU!!!");
}
else if(!(p[0]=='Y' && p[0]=='y' && p[0]=='N' && p[0]=='n'))
{
printf("INVALID");
goto a;
}
printf("\n-------------------------------------------------------------------------------");
}


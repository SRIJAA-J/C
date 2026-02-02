#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,n;
float a;
char v[100];
void head();
void program();
void decision();

int main()
{
clrscr();
head();
program();
decision();
getch();
return 0;
}

void head()
{
printf("\n----------------------------------------------------------------------------");
printf("\t\t\t\tElectricity Charge Amount");
printf("\nName: J Srijaa    \tE.No: 27357    \tCourse: ADJP   \tFaculty: Shruthi");
printf("\n----------------------------------------------------------------------------");
}

void program()
{
printf("\nEnter the number of units consumed: ");
gets(v);
if(strlen(v)==0)
{
printf("NULL INPUT");
}
for(i=0;i<strlen(v);i++)
{
if(isdigit(v[i]))
{
printf(" ");
}
else
{
printf("Error");
program();
}
}
n=atoi(v);
if(n<=100)
{
printf("\nYour Bill Amount is:%d",0);
}
else if(n>=100 && n<=250)
{
a=n*2.6;
printf("\nYour Bill Amount is:%f",a);
}
else if(n>=251 && n<=400)
{
a=n*3.5;
printf("\nYour Bill Amount is:%f",a);
}
else if(n>=401 && n<=600)
{
a=n*4.8;
printf("\nYour Bill Amount is:%f",a);
}
else if(n>=601)
{
a=(n*5)+0.2;
printf("\nYour Bill Amount is:%f",a);
}
}

void decision()
{
printf("\nDo you want to run the program again (Y/N): ");
gets(v);
if(strlen(v)==1)
{
if(v[0]=='Y' || v[0]=='y')
{
clrscr();
main();
}
else if(v[0]=='N' || v[0]=='n')
{
printf("Program Ended!!!");
}
else if(!(v[0]=='Y' || v[0]=='y' || v[0]=='N' || v[0]=='n'))
{
printf("Error");
decision();
}
}
else if(strlen(v)!=1)
{
if(!(v[0]=='Y' || v[0]=='y' || v[0]=='N' || v[0]=='n'))
{
printf("Error");
decision();
}
else
{
decision();
}
}
}






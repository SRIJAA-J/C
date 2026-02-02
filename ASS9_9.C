#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j,x;
char y[100];
char no[20];
void program();
void prog();
void asc();
void head();
void decision();
char n[5][20];

int main()
{
clrscr();
head();
program();
prog();
asc();
decision();
getch();
return 0;
}


void program()
{
int i;
for(i=0;i<strlen(no);i++)
{
if(isdigit(no[i]))
{
}
else
{
printf("Error");
program();
}
}
}
void prog()
{
printf("Enter n1: ");
gets(no[0]);
program(no[0]);
puts("Enter n1
printf("Enter n2: ");
gets(no[1]);
program(no[1]);
printf("Enter n3: ");
gets(no[2]);
program(no[2]);
printf("Enter n4: ");
gets(no[3]);
program(no[3]);
printf("Enter n5: ");
gets(no[4]);
program(no[4]);
}
void asc()
{
//char n[5][20];
//char no[20];
printf("\nType of Sorting (A/D): ");
gets(no);
if(strlen(n)==0)
{
printf("NULL INPUT");
//goto a;
asc();
}
if(strlen(n)==1)
{
if(n[0]=='A' || n[0]=='a')
{
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(no[i]>no[j])
{
 x=no[i];
 no[i]=no[j];
 no[j]=x;
}
}
}
for(i=0;i<5;i++)
{
printf("%d ",no[i]);
}
}
else if(n[0]=='D' || n[0]=='d')
{
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(no[i]<no[j])
{
x=no[i];
no[i]=no[j];
no[j]=x;
}
}
}
for(i=0;i<5;i++)
{
printf("%d ",no[i]);
}
}
//}
else if(!(n[0]=='A'|| n[0]=='a' || n[0]=='D' || n[0]=='d'))
{
asc();
}
}
}

/*int main()
{
clrscr();
head();
program(no);
prog();
asc();
decision();
getch();
return 0;
}*/

void head()
{
printf("--------------------------------------------------------------------------------\n");
printf("\t\t\tSORTING OF 5 NUMBERS");
printf("\nDone By: J SRIJAA    E.NO: 27357     COURSE: ADJP   FACULTY NAME: SHRUTHI        ");
printf("--------------------------------------------------------------------------------\n");
}

void decision()
{
printf("\n");
printf("Do you want to run the program again (Y/N): ");
gets(y);
if(y[0]=='Y' || y[0]=='y')
{
//flushall();
clrscr();
head();
}
else if(y[0]=='N' || y[0]=='n')
{
printf("Program Ended!!!");
}
else if(!(y[0]=='Y' || y[0]=='y' || y[0]=='N' || y[0]=='n'))
{
decision();
}
}

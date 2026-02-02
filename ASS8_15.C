#include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *s;
int i,j,x;
int n[5];
char y[100],no[5][20];
void head();
void program();
void asc();
void data();
void decision();

int main()
{
FILE *s;
clrscr();
s=fopen("e:\\student\\27357\\c\\FILE_1.txt","w");
head();
program();
asc();
data();
decision();
fclose(s);
getch();
return 0;
}

void head()
{
printf("--------------------------------------------------------------------------------\n");
printf("\t\t\tSORTING OF 5 NUMBERS");
printf("\nDone By: J SRIJAA    E.NO: 27357     COURSE: ADJP   FACULTY NAME: SHRUTHI       ");
printf("--------------------------------------------------------------------------------\n");
}

void program()
{
for(i=0;i<5;i++)
{
a:
printf("\nEnter the %d value : ",i+1);
gets(no[i]);
if(strlen(no[i])==0)
{
printf("NULL INPUT");
goto a;
}
for(j=0;j<strlen(no[i]);j++)
{
if(isdigit(no[i][j]))
{
printf(" ");
}
else
{
printf("Error VALUE");
goto a;
}
}
n[i]=atoi(no[i]);
}
}

void asc()
{
printf("\nType of Sorting (A/D): ");
gets(y);
if(strlen(y)==0)
{
printf("NULL INPUT");
asc();
}
if(strlen(y)==1)
{
if(y[0]=='A' || y[0]=='a')
{
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(n[i]>n[j])
{
 x=n[i];
 n[i]=n[j];
 n[j]=x;
}
}
}
for(i=0;i<5;i++)
{
printf("%d ",n[i]);
}
}
else if(y[0]=='D' || y[0]=='d')
{
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(n[i]<n[j])
{
x=n[i];
n[i]=n[j];
n[j]=x;
}
}
}
for(i=0;i<5;i++)
{
printf("%d ",n[i]);
}
}
else if(!(y[0]=='A'|| y[0]=='a' || y[0]=='D' || y[0]=='d'))
{
asc();
}
}
else if(strlen(y)!=1)
{
if(!(y[0]=='A'|| y[0]=='a' || y[0]=='D' || y[0]=='d'))
{
asc();
}
else
{
asc();
}
}
}
void data()
{
printf("\nDo you want to store the data (Y/N): ");
gets(y);
if(y[0]=='Y' || y[0]=='y')
{
clrscr();
fprintf(s,"%d",n[i]);
}
else if(y[0]=='N' || y[0]=='n')
{
decision();
}
else if(y[0]=='Y' || y[0]=='y' || y[0]=='N' || y[0]=='n')
{
decision();
}
}
void decision()
{
printf("\nDo you want to run the program again (Y/N): ");
gets(y);
if(strlen(y)==1)
{
if(y[0]=='Y' || y[0]=='y')
{
clrscr();
main();
}
else if(y[0]=='N' || y[0]=='n')
{
printf("Program Ended!!!");
}

if(!(y[0]=='Y' || y[0]=='y' || y[0]=='N' || y[0]=='n'))
{
decision();
}

}
else if(strlen(y)!=0)
{
if(!(y[0]=='Y' || y[0]=='y' || y[0]=='N' || y[0]=='n'))
{
decision();
}
else
{
decision();
}
}
}


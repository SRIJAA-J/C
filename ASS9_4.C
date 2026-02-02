#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j;
char x[5][10];
char no[5][20],y[100];
void program();
void asc();
void head();
void decision();

int main()
{
clrscr();
head();
program();
asc();
decision();
getch();
return 0;
}

void head()
{
printf("----------------------------------------------------------------------------");
printf("\t\t\t\tSorting of Strings                                           ");
printf("\tName: J Srijaa  E.No: 27357  Course: ADJP  Faculty Name: Shruthi   ");
printf("\n--------------------------------------------------------------------------");
}

void program()
{
for(i=0;i<5;i++)
{
a:
printf("\nEnter the %d string: ",i+1);
gets(no[i]);
if(strlen(no[i])==0)
{
printf("Null Input");
goto a;
}
for(j=0;j<strlen(no[i]);j++)
{
if(isalpha(no[i][j]))
{
printf(" ");
}
else
{
printf("Error Value");
goto a;
}
}
}
}

void asc()
{
printf("\nType of Sorting (A/D): ");
gets(y);
if(strlen(y)==0)
{
printf("Null Input");
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
if(strcmp(no[i],no[j])>0)
{
strcpy(x[i],no[i]);
strcpy(no[i],no[j]);
strcpy(no[j],x[i]);
}
}
}
for(i=0;i<5;i++)
{
printf("%s ",no[i]);
}
}
else if(y[0]=='D' || y[0]=='d')
{
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(strcmp(no[i],no[j])<0)
{
strcpy(x[i],no[i]);
strcpy(no[i],no[j]);
strcpy(no[j],x[i]);
}
}
}
for(i=0;i<5;i++)
{
printf("%s ",no[i]);
}
}
else if(!(y[0]=='A' || y[0]=='a' || y[0]=='D' || y[0]=='d'))
{
asc();
}
}
else if(strlen(y)!=1)
{
if(!(y[0]=='A' || y[0]=='a' || y[0]=='D' || y[0]=='d'))
{
asc();
}
else
{
asc();
}
}
}

void decision()
{
printf("\nDo you want to run the program again(Y/N): ");
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
printf("End the program");
}
else if(!(y[0]=='Y' || y[0]=='y' || y[0]=='N' || y[0]=='n'))
{
decision();
}
}
else if(strlen(y)!=1)
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








#include<stdio.h>
#include<conio.h>
#include<string.h>
char y[100];
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
printf("\t\t\tLength of the string ");
printf("\nName: J Srijaa  E.No: 27357 Course: ADJP Faculty Name: Priya");
printf("\n----------------------------------------------------------------------------");
}

void program()
{
char s[100],*ptr;
int i=0;
printf("\nEnter the string: ");
gets(s);
ptr=s;
/*if(isalpha(s[i]))
{
printf(" ");
}
else
{
printf("Invalid Input");
program();
}*/
//ptr=s;
while(*ptr!='\0')
{
if(isalpha(s[i]))
{
printf(" ");
}
else
{
printf("Invalid Input");
program();
}
i++;
ptr++;
}
printf("\nLength of the string: %d",i);
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
printf("Program Ended");
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


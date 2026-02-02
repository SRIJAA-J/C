#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j;
int length;
char s[100];
char y[100];
void head();
void program();
void lower();
void upper();
void decision();

int main()
{
clrscr();
head();
program();
lower();
upper();
decision();
getch();
return 0;
}

void head()
{
printf("\n--------------------------------------------------------------------------------");
printf("\t\t\t\tLength of String"                                                          );
printf("\nName: J Srijaa  E.No: 27357  Course: ADJP  Faculty Name: Shruthi"                );
printf("\n--------------------------------------------------------------------------------");
}

void program()
{
printf("\nEnter the string: ");
gets(s);
for(j=0;j<strlen(s);j++)
{
if(islower(s[j])  || isspace(s[j]))
{
printf(" ");
}
else
{
printf("Input must be a lower Character");
program();
}
}

/*
Program to write using String functions:

printf("\nLength of the String: %d",strlen(s));
printf("\nString in Uppercase: %s",strupr(s));
printf("\nString in Lowercase: %s",strlwr(s));
printf("\nString in Reversed case: %s",strrev(s));
*/

//Length of the string
for(i=0;s[i]!=0;i++)
{
length++;
}
printf("\nLength of the String: %d",i);
}

//String in lowercase
void lower()
{
while(s[i]!=0)
{
if(s[i]>='A' && s[i]<='Z')
{
s[i]=s[i]+32;
}
++i;
}
printf("\nString in Lowercase: %s",s);
}

//String in uppercase
void upper()
{
while(s[i]!=0)
{
if(s[i]>='a' && s[i]<='z')
{
s[i]=s[i]-32;
}
++i;
}
printf("\nString in Uppercase: %s",s);
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



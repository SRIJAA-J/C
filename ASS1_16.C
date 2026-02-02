#include<stdio.h>
#include<conio.h>
#include<string.h>

char X[100][5];
char Y[100];
int n1[5],i,j;
void head();
void program();
void comp();
void big();
void small();
void decision();

int main()
{
clrscr();
head();
program();
comp();
//big();
//small();
//decision();
getch();
return 0;
}

void head()
{
printf("------------------------------------------------------------------------\n");
printf("\t\t\tBIGGEST AND SMALLEST NUMBERS");
printf("\nDone By: J SRIJAA   Eno:27357   Course Name:ADJP  Faculty Name: Sruthi");
printf("\n------------------------------------------------------------------------\n");
}

void program()
{
for(i=0;i<5;i++)
{
a:
printf("\n\nEnter the %d Number    :   ",i+1);
gets(X[i]);
if(strlen(X[i])==0)
{
printf("NULL INPUT");
goto a;
}
for(j=0;j<strlen(X[i]);j++)
{
if(isdigit(X[i][j]))
{
printf("");
}
else
{
printf("Error VALUE");
goto a;
}
}
n1[i]=atoi(X[i]);
}
}
void comp()
{
if(n1[0]==0 && n1[1]==0 && n1[2]==0 && n1[3]==0 && n1[4]==0)
{
printf("\n\t\tAll the numbers are zero");
decision();
}
else if(n1[0]==n1[1] && n1[1]==n1[2] && n1[2]==n1[3] && n1[3]==n1[4])
{
printf("\n\t\tAll the numbers are equal");
decision();
}
else
{
big();
small();
}
}

void big()
{
if(n1[0]>=n1[1] && n1[0]>=n1[2] && n1[0]>=n1[3] && n1[0]>=n1[4])
{
printf("\n\t\tBiggest Number is:%d ",n1[0]);
}
else if(n1[1]>=n1[0] && n1[1]>=n1[2] && n1[1]>=n1[3] && n1[1]>=n1[4])
{
printf("\n\t\tBiggest Number is:%d ",n1[1]);
}
else if(n1[2]>=n1[0] && n1[2]>=n1[1] && n1[2]>=n1[3] && n1[2]>=n1[4])
{
printf("\n\t\tBiggest Number is:%d ",n1[2]);
}
else if(n1[3]>=n1[0] && n1[3]>=n1[1] && n1[3]>=n1[2] && n1[3]>=n1[4])
{
printf("\n\t\tBiggest Number is:%d ",n1[3]);
}
else if(n1[4]>=n1[0] && n1[4]>=n1[1] && n1[4]>=n1[2] && n1[4]>=n1[3])
{
printf("\n\t\tBiggest Number is:%d ",n1[4]);
}
}

void small()
{
if(n1[0]<=n1[1] && n1[0]<=n1[2] && n1[0]<=n1[3] && n1[0]<=n1[4])
{
printf("\n\t\tSmallest Number is:%d",n1[0]);
}
else if(n1[1]<=n1[0] && n1[1]<=n1[2] && n1[1]<=n1[3] && n1[1]<=n1[4])
{
printf("\n\t\tSmallest Number is:%d",n1[1]);
}
else if(n1[2]<=n1[0] && n1[2]<=n1[1] && n1[2]<=n1[3] && n1[2]<=n1[4])
{
printf("\n\t\tSmallest Number is:%d",n1[2]);
}
else if(n1[3]<=n1[0] && n1[3]<=n1[1] && n1[3]<=n1[2] && n1[3]<=n1[4])
{
printf("\n\t\tSmallest Number is:%d",n1[3]);
}
else if(n1[4]<=n1[0] && n1[4]<=n1[1] && n1[4]<=n1[2] && n1[4]<=n1[3])
{
printf("\n\t\tSmallest Number is:%d",n1[4]);
}
printf("\n---------------------------------------------------------------------------");
}

void decision()
{
printf("\nDo you want to run the program again(Y\\N):");
gets(Y);
if(strlen(Y)==1)
{
if(Y[0]=='Y' || Y[0]=='y')
{
clrscr();
main();
}
else if(Y[0]=='N' || Y[0]=='n')
{
printf("Program Ended");
}
else if(!(Y[0]=='Y' || Y[0]=='y' || Y[0]=='N' || Y[0]=='n'))
{
decision();
}
}

else if(strlen(Y)!=1)
{
if(!(Y[0]=='Y' || Y[0]=='y' || Y[0]=='N' || Y[0]=='n'))
{
decision();
}
else
{
decision();
}
}
}


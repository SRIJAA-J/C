#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,w;
float s,d;
char v[100];
char r[100];
char y[100];
void head();
void data();
void program();
void decision();

int main()
{
clrscr();
head();
data();
program();
decision();
getch();
return 0;
}

void head()
{
printf("\n--------------------------------------------------------------------------------");
printf("\n\t\t\tMULTINATIONAL CURRENCY");
printf("\nName: J Srijaa \tE.No: 27357  \tCourse: ADJP  \tFaculty:Shruthi & Priya");
printf("\n--------------------------------------------------------------------------------");
}

void data()
{
printf("\n\tCountry's Name    \t\t\tIn Indian rupees/Dollar");
printf("\n\t\t\t\t\t");
printf("\n\tSingapore(SD)     \t\t\tRs.55.17");
printf("\n\tMalasiya(Ringit)  \t\t\tRs.17.92");
printf("\n\tDubai(Dirham)     \t\t\tRs.20.27");
printf("\n\tAustralia(AUD)    \t\t\tRs.55.42");
printf("\n\tUSA(USD)          \t\t\tRs.74.46");
printf("\n\n\t\t\t\t\t");
}

void program()
{
a:
printf("\nEnter Indian Currency (Rs): ");
gets(r);
/*if(r>="1" || r<="32000")
{
printf(" ");
}
else if(!(r>="1" || r<="32000"))
{
printf("Error");
goto a;
}*/
if(strlen(r)==0)
{
printf("NULL INPUT");
goto a;
}
for(i=0;i<strlen(r);i++)
{
if(isdigit(r[i]))
{
printf(" ");
}
else
{
printf("Error");
goto a;
}
}
d=atol(r);
if(d>=1 && d<=32726)
{
printf(" ");
}
else if(!(d>=1 && d<=32726))
{
printf("Error");
goto a;
}
n:
printf("\nRupees value for: ");
gets(v);
if(strlen(v)==0)
{
printf("NULL INPUT");
goto n;
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
goto n;
}
}
w=atoi(v);
if(w==1)
{
s=d/55.17;
printf("\nOutput in Singapore(SD): %.2f",s);
}
else if(w==2)
{
s=d/17.92;
printf("\nOutput in Malasiya(Ringit): %.2f",s);
}
else if(w==3)
{
s=d/20.27;
printf("\nOutput in Dubai(Dirham): %.2f",s);
}
else if(w==4)
{
s=d/55.42;
printf("\nOutput in Austrailia(AUD): %.2f",s);
}
else if(w==5)
{
s=d/74.46;
printf("\nOutput in USA(USD): %.2f",s);
}
else if(!(w==1 ||w==2 ||w==3 ||w==4 ||w==5))
{
printf("Error");
goto n;
}
}

void decision()
{
flushall();
printf("\nDo you want to run the program again (Y/N): ");
gets(y);
if(strlen(y)==1)
{
if(y[0]=='Y'||y[0]=='y')
{
//clrscr();
main();
}
else if(y[0]=='N' ||y[0]=='n')
{
printf("Program Ended!!!");
}
else if(!(y[0]=='Y' ||y[0]=='y' ||y[0]=='N' ||y[0]=='n'))
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



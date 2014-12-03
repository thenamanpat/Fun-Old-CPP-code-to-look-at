#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int i,j,n,count=1, countskip=1,c=1,y=1,chany=1,limy;
 cout<<"Enter size:";
 cin>>n;
 cout<<"Enter vertical size:";
 cin>>limy;
 y=random(limy-5)+1;
 clrscr();
 while (!kbhit())
 {
  gotoxy(1,y);
  for (i=1;i<=(n+2);i++)
  {
   if (i==1 || i==(n+2))
   {
    cout<<' ';
    for (j=1;j<=n;j++)
    {
     if (count++!=countskip)
      cout<<'*';
     else
      cout<<' ';
    }
    cout<<' '<<endl;
  }
  else
  {
   if (count++!=countskip)
    cout<<'*';
   else
    cout<<' ';
   for (j=1;j<=n;j++)
    cout<<' ';
   if (count++!=countskip)
    cout<<'*';
   else
    cout<<' ';
   cout<<"\n";
   }
  }
  if(countskip<n)
   countskip++;
  else if (countskip <(n*3) && c%2)
   countskip+=2;
  else if (countskip == (n*3))
   { countskip+=n; c++; }
  else if (countskip > ((n*3)+1))
   countskip--;
  else if (countskip >(n+1))
   countskip-=2;
  else
  { c++; countskip-=n;}
  y=y+chany;
  if (y==limy-n-2 || y==1)
   chany=-chany;
  count=1;
  delay(96);
  clrscr();
 }
}




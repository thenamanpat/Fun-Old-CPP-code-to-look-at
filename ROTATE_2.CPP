#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int i,j,n,count=1, countskip=1,c=1;
 cout<<"Enter size:";
 cin>>n;
 while (!kbhit())
 {
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
  count=1;
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
  delay(60);
  clrscr();
 }
}




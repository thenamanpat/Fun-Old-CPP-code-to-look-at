#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void box(int limx, int limy)
{
  int i;
  gotoxy(1,1);
  cout<<(char)209;
  for (i=2;i<limx;i++)
   cout<<(char)205;
  cout<<(char)209;
  for (i=2;i<limy;i++)
  {
    gotoxy(limx,i);
    cout<<(char)179;
  }
  gotoxy(limx,i);
  cout<<(char)207;
  for (i=limx;i>=1;i--)
   cout<<"\b\b"<<(char)205;
  cout<<"\b\b"<<(char)207;
  for (i=limy-1; i>1;i--)
  {
   gotoxy(1,i);
   cout<<(char)179;
  }
}
void boxfill(int limx, int limy, char m)
{
  int i,y=1,x=1,c=limy/2;
  if (m=='I')
   m=220;
  else
   m=' ';
  while (c!=limy)
  {
  limx--; limy--; y++; x++;
  delay(200);
  gotoxy(x,y);
  cout<<m;
  for (i=3;i<limx;i++)
   cout<<m;
  cout<<m;
  for (i=2;i<limy;i++)
  {
    gotoxy(limx,i);
    cout<<m;
  }
  gotoxy(limx,i);
  cout<<m;
  for (i=limx;i>2;i--)
   cout<<"\b\b"<<m;
  for (i=limy-1; i>1;i--)
  {
   gotoxy(y,i);
   cout<<m;
  }
 }
}
void main()
{
 clrscr();
 box(79,25);
 getch();
 boxfill(79,25,'I');
 delay(500);
 boxfill(79,25,'O');
 getch();
}

#include<iostream.h>
#include<conio.h>
#include<dos.h>
void welcome(char *word,int limx,int y )
{
  int len=-1,i=0,x;
  while(word[(++len)+1]!=NULL);
  while(i<=len)
  {
   x=80;
   while (x!=limx)
   {
   gotoxy(--x,y);
   cout<<word[i]<<' ';
   delay(70);
   }
   limx++; i++;
  }
}
void main()
{
 cout<<"Enter name of company:";
 char *word;
 cin>>word;
 clrscr();
 cout<<"\t\tWELCOME TO\n ";
 welcome(word, 16, 2);
 getch();
}



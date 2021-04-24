#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void desc(char q[][20], int n)
{
 int i,j,p;
 char t[20],l[20];
 for(i=0;i<n-1;i++)
 { strcpy(l,q[i]), p=i;
   for(j=i+1;j<n;j++)
   if(strcmpi(l,q[j])<0)
   strcpy(l,q[j]) , p=j;
   strcpy(t,q[i]);
   strcpy(q[i],q[p]);
   strcpy(q[p],t);
 }
}
void main()
{
 clrscr();
 cout<<"\n\n_______________________________________________________________________\n";
 cout<<"     Arranging Array of Names in Descending order using selection sort\n";
 cout<<"_________________________________________________________________________";
 int n,i;   char a[6][20];
 cout<<"\n\n\n\n\n Enter the size of array =\t";
 cin>>n;
 if(n>6) n=6;
 cout<<"\n Enter all the values of the array:\n";
 for(i=0;i<n;i++)
 { cin>>a[i]; }
 desc(a,n);
 cout<<"\n Sorted Array :-\n";
 for(i=0;i<n;i++)
 { cout<<endl<<"\t\t"<<a[i]; }
 getch();
}


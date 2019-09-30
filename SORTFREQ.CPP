#include<iostream.h>
#include<conio.h>
void main()
{      clrscr();
       int a[100],n,i,j,t;
       cin>>n;
       for(i=0;i<n;i++)
       {	cin>>a[i];
       }
       for(i=0;i<n;i++)
       {	for(j=i+1;j<n;j++)
		{	if(a[j]<a[i])
			{	t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
       }
       int s[10][10];
/*       for(i=0;i<n;i++)
       cout<<a[i]<<"\t";
   */    j=0;
       int y=0,z=1,q=0;
       for(i=0;i<n;i=j)
       {	for(j=i;a[i]==a[j];j++)
		{     	q++;
		}	s[y][0]=a[i];
			s[y][z]=q;
			y++;
			q=0;
       }

   //    cout<<y;

       cout<<endl;
  /*     for(i=0;i<y;i++)
       {	for(int m=0;m<=z;m++)
		{	cout<<s[i][m]<<"\t";
		}
		cout<<endl;
       } */
	int te=0;
	for(i=0;i<y-1;i++)
       {	for(j=i+1;j<y;j++)
		{	if(s[i][1]<s[j][1])
			{	t=s[i][1];    		te=s[i][0];
				s[i][1]=s[j][1];        s[i][0]=s[j][0];
				s[j][1]=t;              s[j][0]=te;
			}      te=0;
		}
       }
	for(i=0;i<y;i++)
	{	for(j=i+1;j<y;j++)
		 {	if(s[i][1]==s[j][1])
		       {	if(s[j-1][1]>s[j][1])
				{     te=s[i][0];
				s[i][0]=s[j][0];
				s[j][0]=te;
				}
		       }
		 }
	}


   /*    cout<<"freq sort";
       for(i=0;i<y;i++)
       {	for(int m=0;m<=z;m++)
		{	cout<<s[i][m]<<"\t";
		}
		cout<<endl;
       } */                          int k=0;
       int f[100];
       for(i=0;i<y;i++)
       {	for(int m=1;m<=s[i][1];m++)
		{       f[k]=s[i][0];
			k++;
		}
       }
       cout<<"final"<<endl;
       for(i=0;i<n;i++)
       {	cout<<f[i]<<"\t";
       }
       getch();

}
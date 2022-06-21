//Q#1C++ program that inputs current day and month from the user, 
//and calculates the total number of days in the current year till the entered date
#include<iostream>
using namespace std;

int main()
    {
     int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     int mon,date;
     int total=0,totaldays;
     cout<<"Enter the date"<<endl;
     cin>>date;
     cout<<"Enter the month"<<endl;
     cin>>mon;
   if(date>31 || mon>12)
   cout<<"Invaild choice"<<endl;
   else
        {
          for(int i=0; i<mon-1; i++)
          total= total+month[i];
          totaldays=date+total;
          cout<<"The total number of days till today is "<<totaldays;
        }
return 0;
}

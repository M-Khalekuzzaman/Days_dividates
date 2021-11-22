#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int days,months,years,weeks;
    cout<<"Enter your days : ";
    cin>>days;

    years = days/365;
    months = (days%365)/30;
    weeks = (days%30)/7;
    days = days - ((years*365) + (months*30) + (weeks*7));

    cout<<"Years : "<<years<<endl<<"Months : "<<months<<endl<<"Weeks :"<<weeks<<endl<<"Days : "<<days<<endl;
    getch();
}

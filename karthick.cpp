#include<iostream>
using namespace std;
class student
{
private:
int admno;
char sname[20];
float eng,math,science;
float total;
float ctotal()
{
return (eng+math+science);
}
public
{
cout<<"Enter admission number ";
cin>> admno;
cout<<"Enter student name " ;
cin>>(sname);
cout<< "Enter marks in english, math, science ";
cin>>eng>>math>>science;
total=ctotal();
}

{
cout<<"Admission number "<<admno<<"\nStudent name "<<sname<<"\nEnglish "
<<eng<<"\nMath "<<math<<"\nScience "<<science<<"\nTotal "<<total;
}
};

int main ()
{
student obj ;
obj.Takedata();
obj.Showdata();
return 0;
}




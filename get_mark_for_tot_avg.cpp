#include<iostream>
using namespace std;
getmark(int sub)
{
    int marks[100],total=0;
    for(int i=0;i<sub;i++)
    {
        cout<<"mark "<<i+1<<":";
        cin>>marks[i];
        total+=marks[i];
    }
    float avg=total/sub;
    float cal=sub*100;
    float per=(total/cal)*100;
    cout<<"the total marks of  subjects :"<<total;
    cout<<"\n the average of marks:"<<avg;
    cout<<"\n the percentage of total marks:"<<per;
}
int main()
{
    int sub;
    cout<<"enter the number of subjects :";
    cin>>sub;
    getmark(sub);



}

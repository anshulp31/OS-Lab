#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class fcfs{
    public:
    int pid;
    int at;
    int bt;
    int ct;
    int wt;
    int tat;
};
bool cmp(fcfs x,fcfs y)
{
   return x.at<y.at;
}
void waiting_time(fcfs a[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        
        a[i].wt=a[i].tat-a[i].bt;
    }
    
}
void turnaround_time(fcfs a[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        a[i].tat=a[i].ct-a[i].at;
    }
    cout<<"Turnaround time\n";
   
    
}
void cmp_time(fcfs a[],int n)
{
    a[0].ct=a[0].bt;
    for (int i = 1; i < n; i++)
    {
        /* code */
        a[i].ct=a[i-1].ct+a[i].bt;
    }
    cout<<"completion time\n";
    
    
}
int main()
{
    int n;
    cout<<"Enter the no. of process:";
    cin>>n;
    fcfs a[n];
    for (int i = 0; i < n; i++)
    {
       a[i].pid=i+1;
       cout<<"Enter arrival time for "<<i+1<<" process:";
       cin>>a[i].at;
       cout<<"Enter burst time for "<<i+1<<" process:";
       cin>>a[i].bt;
    }
    sort(a,a+n,cmp);
    cmp_time(a,n);
    turnaround_time(a,n);
    waiting_time(a,n);
    cout<<"Process_id       Arrival_time       Burst_time      Completion_time      Turnar_time      waiting_time"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"  "<<a[i].pid<<"                            "<<a[i].at<<"                      "<<a[i].bt<<"                     "<<a[i].ct<<"                      "<<a[i].tat<<"          "<<a[i].wt<<endl;
    }
    
}
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
    return a.first>b.first;
}


int main()
{
    vector<pair<int,int>>job;
    int p,d,i,n,j;

    cout<<"Enter the number of jobs:";
    cin>>n;

    cout<<"Enter the profit and deadline corresponds to each job ";
    for(i=0;i<n;i++)
    {
        cin>>p>>d;
        job.push_back(make_pair(p,d));
    }

    sort(job.begin(),job.end(),compare);

    int maxEndTime=0;
    for(i=0;i<n;i++)
    {

        if(job[i].second>maxEndTime)
            maxEndTime=job[i].second;
    }
    int fill[maxEndTime];
    int count=0,maxProfit=0;
    for(i=0;i<maxEndTime;i++)
    {
        fill[i]=-1;
    }
    for(i=0;i<n;i++)
    {

        int j=job[i].second-1;
        while(j>=0 && fill[j]!=-1)
        {
            j--;
        }
        if(j>=0 && fill[j]==-1)
        {

            fill[j]=i;
            count++;
            maxProfit+=job[i].first;
        }
    }
    cout<<count<<" "<<maxProfit<<endl;

}

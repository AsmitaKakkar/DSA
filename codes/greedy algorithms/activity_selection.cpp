#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>activity;
    int st,et;
    int n,i,j;

    cout<<"Enter the number of activities";
    cin>>n;
    cout<<"Enter the start time and end time of the activities";
    for(i=0;i<n;i++)
    {
        cin>>st>>et;
        activity.push_back(make_pair(et,st));
    }

    sort(activity.begin(),activity.end());

    int count=0;
    int current_end=-1;
    for(i=0;i<n;i++)
    {

        if(activity[i].second>current_end)
        {

            count++;
            current_end=activity[i].first;
        }

    }
    cout<<count;
}

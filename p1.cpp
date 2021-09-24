#include<iostream>
#include<set>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m,ele1,ele2;
vector<int> v1,v2,v3;
cout<<"enter numbers in set 1\n";
cin>>n;
cout<<"\nenter elements in set 1\n";
for(int i=0;i<n;i++)
{
cin>>ele1;
v1.push_back(ele1);
}
cout<<"\nenter number of elements in set 2\n"<<endl;
cin>>m;
for(int i=0;i<m;i++)
{
cin>>ele2;
v2.push_back(ele2);
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(v1[i]==v2[j])
{
cout<<v1[i];
}
}
}

return 0;
}

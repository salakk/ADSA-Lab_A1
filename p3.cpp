#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
int n,i,ele,larg1,larg2;
vector<int> v;
cout<<"enter the number of elements in an array\n";
cin>>n;
cout<<"enter elements in an array\n";
for(i=0;i<n;i++)
{
cin>>ele;
v.push_back(ele);
}
if(n==1)
{
cout<<"largest value is"<<v[0]<<endl;
cout<<"second largest value is"<<v[0]<<endl;
}
else
{
larg1=0;larg2=-1;
for(int i=1;i<v.size();i++)
{
if(v[i]>v[larg1])
{
larg2=larg1;
larg1=i;
}
else if(v[i]<v[larg1])
{
if(larg2==-1||v[larg2]<v[i])
larg2=i;
}
}
}
  cout<<"largest element in an array is   "<<v[larg1];
  cout<<"\nsecond largest in an array is  "<<v[larg2]<<endl;
  return 0;
}


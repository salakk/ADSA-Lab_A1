#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> A;
int n,i,ele,max,min;
cout<<"enter number of elements in an array"<<endl;
cin>>n;
cout<<"enter elements in an arry"<<endl;
for(i=0;i<n;i++)
{
cin>>ele;
A.push_back(ele);
}
cout<<"elements in an array are"<<endl;
for(i=0;i<A.size();i++)
{
cout<<A[i]<<" ";
}
cout<<endl;
if(n==1)
{
cout<<"max value is"<<A[0]<<endl;
cout<<"min value is"<<A[0]<<endl;
}

if(n%2==0)
{
 if(A[0]>A[1])
 {
 max=A[0];
 min=A[1];
 }
else
 {
 max=A[1];
 min=A[0];
  }
i=2;
}
else
{
min=A[0];
max=A[0];
i=1;
}

while(i<n-1)
{
if(A[i]>A[i + 1])
{
if(A[i]>max)
max=A[i];
if(A[i + 1]<min)
min=A[i + 1];
}
else
{
if(A[i + 1]>max)
max=A[i + 1];
if(A[i]<min)
min=A[i];
}
i=i+2;
}
cout<<"max value is"<<" "<<max<<endl;
cout<<"min value is"<<" "<<min<<endl;
return 0;
}


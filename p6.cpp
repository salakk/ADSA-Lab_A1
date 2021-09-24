#include <iostream>
#include <vector>
using namespace std;

bool sy(vector<vector<int> >v)
{
for(int i=0;i<v.size();i++)
for(int j=0;j<v[i].size();j++)
  if(v[i][j]!=v[j][i])
   return false;
 return true;
}

int main()
{
int R,C;
cout<<"enter number of rows and coloumb "<<endl;
cin>>R>>C;
vector<vector<int> > v;
int num=10;
for(int i=0; i<R; i++) 
{
vector<int> v1;
cout<<"enter row "<<i<<endl;
for (int j = 0; j < C; j++)
{
cin>>num;
v1.push_back(num);
}
v.push_back(v1);
}
cout<<"matrix is "<<endl;
for (int i=0; i<v.size(); i++)
{
for (int j=0; j<v[i].size(); j++)
cout << v[i][j] << " ";
cout<<endl;
}

if(sy(v))
cout<<"\nyes symmetric \n";
else
cout<<"\nnot symmetric\n";

return 0;
}


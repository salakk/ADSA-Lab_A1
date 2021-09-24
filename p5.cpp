#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
vector < vector <int> > V;
vector <int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);

V.push_back(v1);

vector <int> v2;
v2.push_back(2);
v2.push_back(1);
v2.push_back(3);
v2.push_back(4);
v2.push_back(5);
v2.push_back(94);

V.push_back(v2);

vector <int> v3;
v3.push_back(2);
v3.push_back(1);
v3.push_back(4);
v3.push_back(3);
v3.push_back(5);
v3.push_back(67);

V.push_back(v3);

vector <int> v4;
v4.push_back(12);
v4.push_back(1);
v4.push_back(4);
v4.push_back(3);
v4.push_back(5);
v4.push_back(2);

V.push_back(v4);
vector<int> res;

bool ele_found=true;
int index=0;
int min=V[0].size();
for(int i=0;i<V.size();i++)
{
sort(V[i].begin(),V[i].end());
if(min>V[i].size())
{
min=V[i].size();
index=i;
}
}
for(auto it=V[index].begin();it!=V[index].end();++it)
{
for(int j=0;j<V.size();j++)
{
if(j!=index)
{
if(binary_search(V[j].begin(),V[j].end(),*it));
else
{
ele_found=false;
break;
}
}
}
if(ele_found)
res.push_back(*it);
}
cout<<"given sets are\nn";
cout<<"intersection of given "<<V.size()<<" set is"<<endl;
for(int i=0;i<res.size();i++)
{
cout<<res[i]<<"  ";
}
return 0;
}

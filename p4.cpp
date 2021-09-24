#include <iostream>
#include <fstream>
using namespace std;
int main()
{
int k;
string filename("salak.txt");
int number;
ifstream input_file(filename);
cout<<"how many natural numbers are there in a file\n";
cin>>k;
int  sum_na=k*(k+1)/2;
if(!input_file.is_open()) 
{
cerr<<"file not present"<<filename<< endl;
return EXIT_FAILURE;
}
int sum=0;
while(input_file>>number) 
{
sum=sum+number;
}
int mis=sum_na-sum;
cout<<"missing number is"<<mis<<endl;
input_file.close();
return EXIT_SUCCESS;
return 0;
}

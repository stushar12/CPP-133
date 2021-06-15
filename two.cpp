// s="abc"
// "","a","b","c","ab","ac","bc","abc"


#include <bits/stdc++.h>
using namespace std;

void subsequence(string input,string output)
{

if(input.length()==0)
{
//if(output.length()>0)                                 if we want to print only non empty subsequence
cout<<output<<" "<<output.length()<<endl;
return;
}

subsequence(input.substr(1),output);            //not including the variable and passing the rest input

subsequence(input.substr(1),output+input[0]);       //including the variable and passing the rest input

}

int main()
{
   subsequence("abc","");
}

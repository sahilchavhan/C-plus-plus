//recursive problems
//all possible paths from one point to another point with the help of dice
#include<iostream>
using namespace std;

int paths(int s,int e)
{
    int count=0;
    if(s==e)
    return 1;
    if(s>e)
    return 0;
    for(int i=1;i<=6;i=i+1)
    {
         count=count+paths(s+i,e);
    }
    return count;
}
int main()
{
    cout<<"number of paths are"<<paths(0,3)<<endl;
    
    return 0;
}
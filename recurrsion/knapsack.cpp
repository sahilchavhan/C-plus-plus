//recursive problem
// knapsack problem
#include<iostream>
using namespace std;

int knapsack(int weight[],int value[],int n,int W,int V)
{
    if(n==0 || W==0)
    return V;

    if(weight[n-1]>W)
    return knapsack(weight, value, n-1, W, V);

    return max(knapsack(weight, value, n-1, W, V), knapsack(weight, value, n-1, W-weight[n-1], V+value[n-1]));

}

int main()
{
    int weight[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapsack(weight,value,3,W,0)<<endl;

    return 0;
}
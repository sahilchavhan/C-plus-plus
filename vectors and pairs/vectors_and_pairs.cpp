//vectors and pairs
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(3);
    v.push_back(14);
    for(int i=0;i<v.size();i=i+1)
    cout<<v[i]<<endl;

    vector<int> v2(4,80);
    for(int i=0;i<v2.size();i=i+1)
    cout<<v2[i]<<endl;

    swap(v,v2);//this function is used to swap the elements of vectors
    for(int i=0;i<v2.size();i=i+1)
    cout<<v2[i]<<endl;

    // v.pop_back();

    // sort(v.begin(),v.end());//this functon will sort the vector
    for(int i=0;i<v.size();i=i+1)
    cout<<v[i]<<endl;

    vector<int> v3;
    v3.push_back(5);
    v3.push_back(2);
    v3.push_back(4);
    v3.push_back(3);
    // sort(v3.begin(),v3.end(), );
    for(int i=0;i<v3.size();i=i+1)
    cout<<v3[i]<<endl;

    //pairs
    pair <int,char> p;
    p.first=3;
    p.second='h';
    return 0;
}
//strings
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a="sahil";
    cout<< a <<endl;
    string b=" my name is sahil";
    cout<< b <<endl;

    // string c;
    // cin>>c;// my name is sahil
    // cout<< c <<endl;// my

    // string d;
    // getline(cin, d);// my name is sahil
    // cout<< d <<endl;// my name is sahil

    // cout<<a+b<<endl; // sahil my name is sahil
    // a.append(b);
    // cout<<a; // sahil my name is sahil

    // a.clear();
    // cout<<a<<endl;// string will be erased

    // if(!a.empty())
    // cout<<"a is not empty"; // this method is usd to eheck wether string is empty or not

    string e="abc";
    string f="abc";
    cout<<e.compare(f)<<endl;// if strings are equal it will return 0

    cout<<a.find("hi")<<endl; //it will return position of "hi"
    cout<<b.find("hi")<<endl; //it will return position of "hi"

    b.insert(3,"lol");// to insert string in a string
    cout<<b<<endl; //mylol name is sahil

    cout<<b.size()<<endl;//
    cout<<b.length()<<endl;// both methods are used to find length

    for(int i=0;i<b.length();i=i+1)//applying loop
    cout<<b[i]<<endl;

    string g=b.substr(2,6);//printing substring
    cout<<g<<endl;

    string h="98";//here98 is not a int it is a string
    int j=stoi(h);// stoi is usedto convert string to integer
    cout<<j+2<<endl;//100
    return 0;

}
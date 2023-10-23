//insertion sort
//here we are taking a pivot from i=1 to i=n and we are checking he elements in left side of pivot if they are small then we are not doing anything else we are shuffling them with the pivot
// this method is better than the bubble sort and selection sort
// wew are checking pivot with its previus eleement if pivot is small the we are shifting all previous elements to the right which are bigger than pivot and inserting pivot in thatposition
// best time compexity is O(n) 
// worst time complexity is O(n2) 
#include<iostream>
using namespace std;

int main()
{
    int n;
    int i,j,key,pos;
    cout<<"enter the number of term";
    cin>>n;
    int aray[n];
    for(i=0;i<n;i=i+1)
    {
        cin>>aray[i];
    }
    
    for(i=1;i<n;i=i+1)
    {
        pos=aray[i];
        j=i-1;
        while (aray[j]>pos && j>=0)
        {
            aray[j+1]=aray[j];
            j=j-1;
        }
        
        aray[j+1]=pos;
    }

    for(i=0;i<n;i=i+1)
    {
        cout<<aray[i]<<" ";
    }


    return 0;
}

//in bubble sort we are actully compairing two elements of array one by one and we are swapping greater elememt to the right?
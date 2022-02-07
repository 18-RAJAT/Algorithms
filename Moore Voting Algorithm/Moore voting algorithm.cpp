#include<bits/stdc++.h>
using namespace std;

//To find the candidate of Majority
int Find_Candidate(int a[],int size)
{
    int Majority_Index = 0,count = 1;

    for(int i=1;i<size;++i)
    {
        if(a[Majority_Index] == a[i])
        count++;

        else
        count--;

        if(count == 0)
        {
            Majority_Index = i;
            count = 1;
        }
    }

    return a[Majority_Index];
}

//Function to check the candidate is occur more then n/2 times:

bool Is_Majority(int a[],int size,int candidate)
{
    int count = 0;
    for(int i=0;i<size;++i)
    
    if(a[i] == candidate)
    count++;

    if(count > size/2)
    return 1;

    else
    return 0;
}

//Function to print the majority element

void Print_Majority(int a[],int size)
{
   //The candidate for majority to find

   int candidate = Find_Candidate(a,size);

   //Find the candidate if it is majority

   if(Is_Majority(a,size,candidate))
   cout<<" "<<candidate<<" "<<endl;

   else

   cout<<"No Majority Element is There"<<endl;
}

int main()
{
    int a[] = {3,2,3,2};
    int size = (sizeof(a))/sizeof(a[0]);

    //Function call
    Print_Majority(a,size);

    return 0;
}
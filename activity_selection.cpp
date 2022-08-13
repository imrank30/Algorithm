#include<iostream>
using namespace std;
int start[6]={1,3,0,5,8,5};
int finish[6]={2,4,6,7,9,9};
void selection(int start[],int finish[],int n)
{
    int i,j;
    i=0;
    cout<<"the activity can be selected according to index:" <<i <<endl;
    for(j=1;j<n;j++)
    {
        if(start[j]>=finish[i])
        {
            cout<< "the activity can be selected according to index:" <<j <<endl;
            i=j;
        }
    }
}
int main()
{
    int x;
    x=6;
    cout<< "the value of array is x=" <<x <<endl;
    selection(start,finish,x);
    cout<< "the result is optimal solution."<<endl;
}

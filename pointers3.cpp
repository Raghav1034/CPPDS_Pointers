#include<iostream>

using namespace std;


void swap (int *x,int *y);
int main()
{
    int i,j,c;
    i = 5;
    j = 8;
    cout<<"Before Swap "<<i<<j<<endl;
    swap(&i,&j);
    cout<<"After Swap "<<i<<j<<endl;
}
void swap(int *m , int *n)
{
    int tmp;
    tmp = *m;
    *m = *n;
    *n = tmp;
    return;
}
//call by refernce matlab address is passed
//call by value copy of value are passed
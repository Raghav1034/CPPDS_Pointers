#include<iostream>

using namespace std;

int main()
{
    char name[100];
    int i = 0;
    int length = 0;

    cout<<"Enter a Name : ";
    cin>>name;
    cout<< name <<endl;

    while (name[i] != '\0')
    {
            length++;
            i++;
    }
    cout<<"Length of the string is "<< length<<endl;



    //for loop;

    for (i =  length - 1; i>=0 ; i--)
    {
        cout<<name[i];
    }


    
    
    
    
    
    return 0;
}
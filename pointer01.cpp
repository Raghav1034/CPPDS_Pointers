#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int *int_ptr;

    float f;
    float *flt_ptr;
    char *chr_ptr;

    i = 5;
    f = 3.14;

    int_ptr = &i;
    cout<<"*int_ptr = "<<*int_ptr<<endl;
    cout<<"&i = "<<&i<<endl;
    cout<< "int_ptr = "<<int_ptr;

   //j = *int_ptr;   //same effect as j=i but 

}


//compare two strings    strlen(str1)!= strlen(sstr2)
                                    //for(i=0;i<strlen(str1);i++){if(*str1==*str2)}
//concatenate
//convert upper case to lower case
//using pointers and loops
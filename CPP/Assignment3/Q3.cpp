#include<iostream>
using namespace std;

int main()
{
    int num[]={1,2,3,4,5};
    int n=5;
    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
       if (num[i] % 2 == 0)
        {
            even++;
        }   
        else
        odd++;
    }
    cout<<"Even Number is: "<<even<<endl;
    cout<<"Odd Number is: "<<odd<<endl;


}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No: "<<endl;
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<char('A'+j)<<" ";
        }
        
        cout<<endl;
    }
    return 0;
    
}


// A B C D E
// A B C D
// A B C
// A B
// A
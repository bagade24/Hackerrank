#include <iostream>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(j>=i)
                cout<<" ";
            else
                cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
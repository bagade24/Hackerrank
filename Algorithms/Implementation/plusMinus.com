#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],i=0;
    double p=0.0,q=0.0,z=0.0;
    
    for(i=0;i<n;i++)
        {
    cin>>arr[i];    
    if(arr[i]>0)
        p++;
    else if(arr[i]<0)
        q++;
    else
        z++;
    }
    p=p/n;
    q/=n;
    z/=n;
    cout<<p<<endl<<q<<endl<<z;
    return 0;
}
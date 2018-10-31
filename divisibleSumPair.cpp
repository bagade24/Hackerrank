
#include <iostream>

using namespace std;


int main(){
    int n,i=0,j=0,count=0;
    int k;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if((arr[i]+arr[j])%k==0)
                {count++;}
        }
    }
    cout<<count;
    return 0;
}

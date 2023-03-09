#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        int i,j,flag=0;
        for(i=0;i<n;i++) /// Array Input
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(j=n-1;j>0;j--)
        {
            if(a[j] - a[j-1]>1){flag=-1; break;}
        }


            if(flag==0){cout<<"YES\n";}
            else cout<<"NO\n";


    }

    return 0;
}

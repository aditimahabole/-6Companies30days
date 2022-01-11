
// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countSubArrayProductLessThanK(const vector<int>& a,int n,long long k)
    {
        const int len=a.size();
        long long curpro=1;
        int count=0;
        for(int s=0,e=0;e<len;e++)

        {

            cout<<"---------------------------------------"<<endl;
            cout<<"s     =  "<<s<<endl;
            cout<<"e     =  "<<e<<endl;
            cout<<"---------------------------------------"<<endl;

            cout<<"_________________________________"<<endl;
            cout<<"current product  Before =  "<<curpro<<endl;
           curpro*=a[e];
           cout<<"current product   After    =  "<<curpro<<endl;
           cout<<"_________________________________"<<endl;
           while(s<e && curpro>=k)
           {
                cout<<"_________INSIDE_____WHILE______"<<endl;
            cout<<"current product  Before    =  "<<curpro<<endl;
            cout<<"a[s]             =  "<<a[s]<<endl;
            cout<<" s                 = "<<s<<endl;
           curpro/=a[s++];
           cout<<" s++             = "<<s<<endl;
           cout<<"a[s++]         = "<<a[s]<<endl;
           cout<<"current product  After(div)   =  "<<curpro<<endl;
           cout<<"_________________________________"<<endl;

           }
           if(curpro<k)
           {
               cout<<"____________________IF___________________"<<endl;
               cout<<"current pro      =  "<<curpro<<endl;
               cout<<"s      =  "<<s<<endl;
               cout<<"e     =  "<<e<<endl;
               int l=e-s + 1;
               cout<<"l       =  "<<l<<endl;
               count+=l;
               cout<<"current  count    =  "<<count<<endl;
               cout<<"_________________________________________"<<endl;

           }
        }
        return count;
    }

int main() {
    int arr[]={ 1, 9, 2, 8, 6, 4, 3 };
    int n=sizeof(arr)/sizeof(arr[0]);
     vector<int>a;
    long long k=100;
    for(int i=0;i<n;i++ )
    {
        a.push_back(arr[i]);
    }
    cout <<countSubArrayProductLessThanK(a,n,k)<< endl;



    return 0;
}



// CODE THAT EXCEEDED TIME 
/*
bool is_prime(int n)
	{
	    if(n==2 || n==3)
	    {
	        return true;
	    }
	    for (int i=2;i<n/2;i++)
	    {
	        if(n%i==0)
	        {

	            return false;
	        }
	    }
	    return true;
	}
	int getNthUglyNo(int n)
	{
	   if(n>=1 && n<=6)
	   {
	       return n;
	   }
	   int  i=2;


	    int count=6;
	    int  num ;
	    int num1=7;

	    while(count<n)
	    {
	        i=2;
	        num=num1;

	        while(num>1)
	        {
	            if(is_prime(i))
	            {
	                if(i>5)
	               {
	                   break;
	               }
	              if(num%i!=0)
	               {
	                 i++;
	                 continue;
	               }

	            }
	            else
	            {
	                i++;
	            }

	            num=num/i;

	        }

	        if(i==2 || i==3 || i==5)
	           {
	                count++;
	           }
	           num1++;

	    }
	    return num1-1;
	}
*/
//accepted code 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

	int getNthUglyNo(int n)
	{
	   if(n>=1 && n<=6)
	   {
	       return n;
	   }

    set<long long int> s;
    s.insert(1);
    cout<<"_______________________"<<endl;
    cout<<"n before = "<<n<<endl;
    n--;
    cout<<"n after = "<<n<<endl;
    cout<<"_______________________"<<endl;

    while (n)
    {
        auto it = s.begin();
        long long int x = *it;
    cout<<"x ="<<x<<endl;
    cout<<"erase "<<endl;
        s.erase(it);
         cout<<"_______________________"<<endl;
        s.insert(x * 2);
        cout<<"x * 2 = "<<x * 2<<endl;
        s.insert(x * 3);
        cout<<"x * 3 = "<<x * 3<<endl;
        s.insert(x * 5);
        cout<<"x * 5 = "<<x * 5<<endl;
        cout<<"_______________________"<<endl;
    cout<<"_______________________"<<endl;
    cout<<"n before  = "<<n<<endl;
    n--;
    cout<<"n after = "<<n<<endl;
    cout<<"_______________________"<<endl;
    }

    return *s.begin();
	}


int main()
{

  cout<<getNthUglyNo(10);
    return 0;
}
/* OUTPUT :
_______________________
n before = 10
n after = 9
_______________________
x =1
erase
_______________________
x * 2 = 2
x * 3 = 3
x * 5 = 5
_______________________
_______________________
n before  = 9
n after = 8
_______________________
x =2
erase
_______________________
x * 2 = 4
x * 3 = 6
x * 5 = 10
_______________________
_______________________
n before  = 8
n after = 7
_______________________
x =3
erase
_______________________
x * 2 = 6
x * 3 = 9
x * 5 = 15
_______________________
_______________________
n before  = 7
n after = 6
_______________________
x =4
erase
_______________________
x * 2 = 8
x * 3 = 12
x * 5 = 20
_______________________
_______________________
n before  = 6
n after = 5
_______________________
x =5
erase
_______________________
x * 2 = 10
x * 3 = 15
x * 5 = 25
_______________________
_______________________
n before  = 5
n after = 4
_______________________
x =6
erase
_______________________
x * 2 = 12
x * 3 = 18
x * 5 = 30
_______________________
_______________________
n before  = 4
n after = 3
_______________________
x =8
erase
_______________________
x * 2 = 16
x * 3 = 24
x * 5 = 40
_______________________
_______________________
n before  = 3
n after = 2
_______________________
x =9
erase
_______________________
x * 2 = 18
x * 3 = 27
x * 5 = 45
_______________________
_______________________
n before  = 2
n after = 1
_______________________
x =10
erase
_______________________
x * 2 = 20
x * 3 = 30
x * 5 = 50
_______________________
_______________________
n before  = 1
n after = 0
_______________________
12
*/

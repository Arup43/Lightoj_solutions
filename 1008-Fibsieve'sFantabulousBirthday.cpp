#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int a,upperPerfectSq;
    double sq;
    long long int T,b,r,c,root_upper;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a;
        sq=sqrt((double)a);
        b=sq;
        if(sq==b)
        {
            if(a%2==0)
            {
                c=b;
                r=1;
            }
            else
            {
                c=1;
                r=b;
            }
        }
        else
        {
            upperPerfectSq=(b+1)*(b+1);
            root_upper=b+1;
            if(upperPerfectSq%2==0)
            {
                if((upperPerfectSq-a)<=(root_upper-1))
                {
                    c=root_upper;
                    r=upperPerfectSq-a+1;
                }
                else
                {
                    r=root_upper;
                    c=root_upper-((upperPerfectSq-a)-(root_upper-1));
                }
            }
            else
            {
                if((upperPerfectSq-a)<=(root_upper-1))
                {
                    r=root_upper;
                    c=upperPerfectSq-a+1;
                }
                else
                {
                    c=root_upper;
                    r=root_upper-((upperPerfectSq-a)-(root_upper-1));
                }
            }
        }
        cout<< "Case " << i+1 << ": " << c << " " << r << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    long long t,s,total,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        cin>>s;
        total=0;
        for(int j=0;j<s;j++)  
            { 
                cin>>a>>b>>c;
                total+=a*c;
            }
    cout<<total<<endl;
    }        
//system("pause");
}

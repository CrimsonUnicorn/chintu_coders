#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n,z=n;
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    cout<<c<<endl;
    int sum=0;
    while(x>0){
        int last = x%10;
        cout<<last<<endl;
        sum = sum + pow(last,c--);
        x=x/10;
        cout<<sum<<endl;
        
    } 
    
    if(sum==z){
        cout<<"It is a disarium number";
    }
    else{
        cout<<"It is not a disarium number";
    }
    return 0;  
}
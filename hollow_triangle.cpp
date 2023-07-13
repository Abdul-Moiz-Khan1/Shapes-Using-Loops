#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,a=0;
    for(i=5;i>=1;i--)
                     {
                      for(j=1;j<=i;j++) 
                                        {
                                         cout<<" ";    
                                        }       
                      
                      cout<<"*";
                      for(k=1;k<a;k++)
                                      {
                                       cout<<" ";
                                      }
                      a=a+2;
                      if(a!=2)
                          {
                           cout<<"*";
                          }
                      cout<<endl;
                     
                     }
    for(i=1;i<=11;i++)
                     {
                      cout<<"*";
                     }
    cout<<endl;
    
    system("PAUSE");
    return 0;
}

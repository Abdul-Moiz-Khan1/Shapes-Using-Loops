#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
              for(i=1;i<=5;i++)
                                {
                                 for(k=1;k<=15;k++)
                                                   {
                                                    cout<<" ";     
                                                   }    
                                 for(j=1;j<=i;j++)
                                                  {
                                                   cout<<"*";      
                                                  }
                                cout<<endl;
                                }
              
              for(i=1;i<=3;i++)
                                {
                                 for(j=1;j<=20;j++)
                                                  {
                                                   cout<<"*";                 
                                                  }            
                                 cout<<endl;
                                }
              for(i=5;i>=1;i--)
                               {
                                for(j=1;j<=15;j++)
                                                  {
                                                   cout<<" ";             
                                                  }             
                                for(k=1;k<=i;k++) 
                                                  {
                                                   cout<<"*";              
                                                  }            
                                cout<<endl;
                               }
    
    system("PAUSE");
    return 0;
}

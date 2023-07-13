#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,a=1,b=10;
            for(i=5;i>=1;i--)
                             {
                                 for(j=1;j<=i;j++)
                                                   {
                                                    cout<<" ";                                                 
                                                   }        
                                 for(j=1;j<=a;j++)
                                                  {
                                                   cout<<"*";          
                                                  }
                                 for(j=1;j<=b;j++)
                                                  {
                                                   cout<<" ";                     
                                                  }
                                 for(j=1;j<=a;j++)
                                                  {
                                                   cout<<"*";          
                                                  }
                                 for(j=1;j<=b;j++)
                                                  {
                                                   cout<<" ";                     
                                                  }
                                 for(j=1;j<=a;j++)
                                                  {
                                                   cout<<"*";          
                                                  }            
                                 a=a+2;
                                 b=b-2;
                                 cout<<endl;
                             }
    
    system("PAUSE");
    return 0;
}

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int a=1,b=0,i,j;
                 for(i=10;i>=1;i--)
                                   {
                                        for(j=1;j<=i;j++)
                                                         {
                                                          cout<<" "; 
                                                          }     
                                        for(j=1;j<=a;j++)
                                                         {
                                                          cout<<"*";       
                                                         } 
                                        a=a+2;
                                        b++;
                                        cout<<endl;
                                   }
    a=21;b=10;
               for(i=1;i<=11;i++)
                                 {
                                     for(j=1;j<i;j++)
                                                       {
                                                        cout<<" ";     
                                                       }              
                                     for(j=1;j<=a;j++)
                                                      {
                                                       cout<<"*";                
                                                      }
                                     a=a-2;
                                     b--;
                                     cout<<endl;
                                 }
    system("PAUSE");
    return 0;
}

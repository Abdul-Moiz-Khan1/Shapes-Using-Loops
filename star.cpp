#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,a=1,b,c;
            for(i=5;i>=1;i--)
                             {
                              for(j=1;j<=4;j++)
                                               {
                                                cout<<" ";     
                                               }
                              for(j=1;j<=i;j++)
                                               {
                                                cout<<" ";     
                                               }       
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<"* ";
                                               }
                             a++;
                             cout<<endl;
                             }
    a=0,b=10;
            for(i=1;i<=5;i++)
                             {
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<" ";          
                                               }
                              for(j=1;j<=b;j++)
                                               {
                                                cout<<"* ";         
                                               }                      
                                        
                             a++;
                             b--;
                             cout<<endl;
                             }
    a=3,b=3,c=0;
            for(i=1;i<=5;i++)
                             {
                              for(j=1;j<=4;j++)
                                               {
                                                cout<<" ";                       
                                               }
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<"* ";                       
                                               }           
                              for(j=1;j<=c;j++)
                                                 {
                                                  cout<<" ";          
                                                 }
                              for(j=1;j<=b;j++)
                                               {
                                                cout<<"* ";           
                                               }
                              a--;
                              b--;
                              c=c+4;
                              cout<<endl;
                             }
    system("PAUSE");
    return 0;
}

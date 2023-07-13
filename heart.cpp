#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,a=2,c=6;
            for(i=1;i<=3;i++)
                             {
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<" ";     
                                               }       
                              for(j=1;j<=i;j++)
                                               {
                                                cout<<"**";           
                                               }
                              for(j=1;j<=c;j++)
                                               {
                                                cout<<" ";                      
                                               }
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<" ";                      
                                               }
                              for(j=1;j<=i;j++)
                                               {
                                                cout<<"**";            
                                               }
                              a--;
                              c--;
                              cout<<endl;
                             }
    
    a=1;
            for(i=8;i>=1;i--)
                              {
                                        
                              for(j=1;j<=a;j++)
                                               {
                                                cout<<" ";                       
                                               }           
                              for(j=1;j<=i;j++)
                                                { 
                                                 cout<<"* ";           
                                                }
                               a++;
                               cout<<endl;
                              }
    
    system("PAUSE");
    return 0;
}

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int i,j,k,l,m;
           
           for(i=1;i<=9;i++)
                            {            
                                 if(i==5)
                                         {
                                          for(j=1;j<=3;j++)  
                                                             {
                                                               for(k=1;k<=23;k++)
                                                                                {
                                                                                 cout<<"*";    
                                                                                }                      
                                                               cout<<endl;
                                                              }     
                                         }
                                 else
                                 {                   
                                 for(l=1;l<=10;l++)
                                                   {
                                                    cout<<" ";
                                                    }                             
                                 for(m=1;m<=3;m++)
                                                  {
                                                   cout<<"*";     
                                                   }               
                                  cout<<endl;
                                  }
                            }                                            
                                
    system("PAUSE");
    return 0;
}

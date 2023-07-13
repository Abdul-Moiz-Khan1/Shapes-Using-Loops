#include <iostream>
using namespace std;
int main()
{
 int i,j;
         for(i=1;i<=5;i++)
                          {
                           for(j=1;j<=10;j++)
                                             {
                                              cout<<" ";       
                                             }      
                           for(j=1;j<=i;j++)
                                            {
                                             cout<<"*";        
                                            }
                           cout<<endl;
                          }   

 int a=16;
         for(i=1;i<=3;i++)
                          {
                           for(j=1;j<=a;j++)
                                             {
                                              cout<<"*";                  
                                             }    
                           a++;
                           cout<<endl;
                          }

 a=17;
         for(i=1;i<=2;i++)
                          {
                           for(j=1;j<=a;j++)
                                            {
                                             cout<<"*";      
                                            }            
                           a--;
                           cout<<endl;
                          }                 
                          
         for(i=5;i>=1;i--)
                          {
                           for(j=1;j<=10;j++)
                                             {
                                              cout<<" ";       
                                             }      
                           for(j=1;j<=i;j++)
                                            {
                                             cout<<"*";        
                                            }
                           cout<<endl;
                          }
    
 system ("PAUSE");    
 return 0;
}

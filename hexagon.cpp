#include <iostream>
using namespace std;
int main()
{
 int i,j,a=4;  
 
         for(i=1;i<=4;i++)
                          {
                           for(j=1;j<=a;j++)
                                            {
                                             cout<<" ";    
                                            }      
                           for(j=1;j<=i;j++)
                                            {
                                             cout<<"*";       
                                            }
                           for(j=1;j<=4;j++)
                                            {
                                             cout<<"*";                  
                                            }    
                           for(j=1;j<=i;j++)
                                            {
                                             cout<<"*";     
                                            }                            
                           a--;
                           cout<<endl;
                          }
                                 
         for(i=1;i<=3;i++)
                          {
                           for(j=1;j<=14;j++)
                                             {
                                              cout<<"*";                        
                                             }            
                           cout<<endl;
                          }
 
 a=4;
         for(i=1;i<=4;i++)
                          {
                           for(j=1;j<=i;j++)
                                           {
                                            cout<<" ";               
                                           }
                           for(j=1;j<=a;j++)
                                            {
                                             cout<<"*";              
                                            }            
                           for(j=1;j<=4;j++)
                                            {
                                             cout<<"*";             
                                            }
                           for(j=1;j<=a;j++)
                                            {
                                             cout<<"*";                        
                                            }   
                           
                           a--;
                           cout<<endl; 
                          }
    system ("PAUSE");
    return 0;
}

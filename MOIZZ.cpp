#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l;
            for(i=1;i<=5;i++)
                             {
                              for(j=1;j<=5;j++) 
                                               {
                                                if(j==1 || j==5 || (i==j && i<=3) || (i+j==6 && i<=3) )
                                                                                  {
                                                                                   cout<<"*";           
                                                                                  }else 
                                                                                        {
                                                                                         cout<<" ";
                                                                                        }
                                                
                                               }       
                              cout<<"    ";
                              for(j=1;j<=5;j++)
                                               {
                                                if(i==1 || i==5 || j==5 || j==1)
                                                                                  {
                                                                                   cout<<"*";           
                                                                                  }else 
                                                                                        {
                                                                                         cout<<" ";
                                                                                        }    
                                               }
                              cout<<"    ";
                              for(j=1;j<=5;j++)
                                               {
                                                if(i==1 || i==5 || j==3)
                                                                                  {
                                                                                   cout<<"*";           
                                                                                  }else 
                                                                                        {
                                                                                         cout<<" ";
                                                                                        }    
                                               }
                              cout<<"    ";
                              for(j=1;j<=5;j++)
                                               {
                                                if(i==1 || i==5 || i+j==6)
                                                                                  {
                                                                                   cout<<"*";           
                                                                                  }else 
                                                                                        {
                                                                                         cout<<" ";
                                                                                        }    
                                               }
                              cout<<"    ";
                              for(j=1;j<=5;j++)
                                               {
                                                if(i==1 || i==5 || i+j==6)
                                                                                  {
                                                                                   cout<<"*";           
                                                                                  }else 
                                                                                        {
                                                                                         cout<<" ";
                                                                                        }    
                                               }
                              cout<<endl;
                             }
    system("PAUSE");
    return 0;
}

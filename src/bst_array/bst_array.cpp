/******************************************************************************


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    
    int numElement=6;
    int binaryLoop=numElement/2;
    int array[] = {11,23,44,52,68,76};
    int findElement = 76;
    int *leftArray = &array[0]; 
    int *rightArray = &array[numElement-1];
    int *midArray  = &array[(numElement-1)/2];
    int currentMid = (numElement-1)/2;
    
    cout<< "leftArray = "<<*leftArray<< " midArray= "<<*midArray<<" rightArray="<<*rightArray<<endl;
   

    for (int i=0; i<=binaryLoop; i++)
    {
       if(*midArray<findElement)
       {
           leftArray = &array[currentMid+1]; 
           currentMid = currentMid + (numElement-1)/2;
           midArray =  &array[currentMid+1];
           cout<< "leftArray = "<<*leftArray<< " midArray= "<<*midArray<<" rightArray="<<*rightArray<<endl;
           
       }
       else if(*midArray==findElement)
       {
            cout<< "findElement mid" << *midArray << endl;
       }
       else
       {
           cout<< "findElement left" << *leftArray << endl;+
           
       }
    }
    
    return 0;
}

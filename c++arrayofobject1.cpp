#include<iostream>
using namespace std;


main()


{
  
   int arr[10], i;
   cout<<"Enter numbers =  ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   
   cout<<"\n Even Numbers are = \n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   
}

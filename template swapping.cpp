//Write the program to swap the two values using 
// template.

#include<iostream>
using namespace std;
template <typename T>
void swap_fun (T &a, T &b)
{
	 T temp;
	  temp=a;
	  a=b;
	  b=temp;
}
int main()

{
	int i=10;
  int j=20;
  
   cout<<"before swapping value of a is "<<i<<" and b is"
	   <<j<<endl;
	   
	 swap_fun(i,j);  
	
   cout<<"after swapping value of a is "<<i<<"and b is "
     <<j<<endl;	
	
}

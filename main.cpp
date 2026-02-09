#include <iostream>
#include <iomanip>
#define SIZE 10 // need to change into dynamic size

using namespace std;

int main(int argc,char *argv[])
{

  int size = 0; // Initiate size at 0 waiting for user input
  cout << "Enter size of array: ";
  cin >> size;

  int *pa, *pb, i, temp;
  int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
  // change this to create array with size user input

  pa = &a[0]; //pa =a;
  cout<<"Original: ";

  for (i=0; i<SIZE-1; i++ ,pa++)
  {
    cout<<setw(3)<<*pa ;//<<endl;
    //cout<<pa<<endl;
  }

  cout<<setw(3)<<*pa<<endl;

  pa = &a[0];  
  pb = &a[SIZE-1];

  for (i=0; i<SIZE/2; i++)
  {
    temp = *pa;  
    *pa = *pb;  
    *pb = temp;
    pa++;  pb--;
  }

  pa=&a[0];
  pb-=SIZE/2;
  cout<<"Reversed: ";
  
  for (i=0; i<SIZE-1; i++ ,pa++)
  {
    cout<<setw(3)<<*pa ;//<<endl;
    //cout<<pa<<endl;
  }

  cout<<setw(3)<<*pa<<endl;

  return 0;

}

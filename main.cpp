#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char *argv[])
{

  int *pa, *pb, i, temp;

  int n = argc - 1; // amount of data user entered

  pa = new int[n]; // create array of n integers and store address in pointer pa 

  int *a = pa;  // store starting address that pa points to

  for (i = 0; i < n; i++)
  {
    *pa = atoi(argv[i+1]);
    pa++;
  }
  // int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
  // change this to create array with size user input

  // pa = &a[0]; //pa =a;
  pa = a; // reset address stored in pa

  cout<<"Original: ";

  for (i=0; i<n-1; i++ ,pa++) // Loop through the array to output original 
  {
    cout<<setw(3)<<*pa ;//<<endl;
    //cout<<pa<<endl;
  }

  cout<<setw(3)<<*pa<<endl; // to display last element

  pa = a;  // reset address stored in pa

  pb = &a[n-1]; // assign address at the end of array

  for (i=0; i<n/2; i++)
  {
    temp = *pa;  // store pa in temp
    *pa = *pb;  // change val in pa to val in pb
    *pb = temp; // now element in pb become element from pa
    pa++;  // shift
    pb--;
  }

  pa = a;
  //pb-=SIZE/2;

  cout<<"Reversed: ";
  
  for (i=0; i<n-1; i++ ,pa++)
  {
    cout<<setw(3)<<*pa ;//<<endl;
    //cout<<pa<<endl;
  }

  cout<<setw(3)<<*pa<<endl;


  return 0;

}

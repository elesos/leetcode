// C++ code to demonstrate working of all_of() 
#include<iostream> 
#include<algorithm> // for all_of() 
using namespace std; 
int main() 
{ 
	// Initializing array 
	int ar[6] = {1, 2, 3, 4, 5, -6}; 

	// Checking if all elements are positive  检查所有是否满足
	all_of(ar, ar+6, [](int x) { return x>0; })? 
		cout << "All are positive elements" : 
		cout << "All are not positive elements"; 
		
		
		
	 // Checking if any element is negative 
	 //只要有 任意一个元素 满足即可
    any_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 
  	

	return 0; 

}


/////////////////////////////////////////////////////////////////

#include<iostream> 
#include<algorithm> // for copy_n() 
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, 6}; 
  
    // Declaring second array 
    int ar1[6]; 
  
    // Using copy_n() to copy contents 
    copy_n(ar, 6, ar1); 
  
    // Displaying the copied array 
    cout << "The new array after copying is : "; 
    for (int i=0; i<6 ; i++) 
       cout << ar1[i] << " "; 
  
    return 0; 
  
} 



//连续赋值
// C++ code to demonstrate working of iota() 
#include<iostream> 
#include<numeric> // for iota() 
using namespace std; 
int main() 
{ 
	// Initializing array with 0 values 
	int ar[6] = {0}; 

	// Using iota() to assign values 
	iota(ar, ar+6, 20); 

	// Displaying the new array 
	cout << "The new array after assigning values is : "; 
	for (int i=0; i<6 ; i++) 
	cout << ar[i] << " ";  //20 21 22 23 24 25

	return 0; 

} 

//http://www.cplusplus.com/reference/algorithm/all_of/
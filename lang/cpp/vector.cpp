// C++ program to illustrate the 
// iterators in vector 
/* #include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Output of begin and end: "; 
	for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 

	//c代表常量的
	cout << "\nOutput of cbegin and cend: "; 
	for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
		cout << *i << " "; 

	
	
	cout << "\nOutput of rbegin and rend: "; 
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
		cout << *ir << " "; 

	cout << "\nOutput of crbegin and crend : "; 
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
		cout << *ir << " "; 

	return 0; 
}  */

//=============================Capacity===================
// C++ program to illustrate the 
// capacity function in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Size : " << g1.size(); 
	cout << "\nCapacity : " << g1.capacity(); 
	cout << "\nMax_Size : " << g1.max_size() << endl; 

	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 
	
	
	// resizes the vector size to 4 
	g1.resize(4); 

	// prints the vector size after resize() 
	cout << "\nSize : " << g1.size() << endl; 

	
	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 
	
	
	
	// checks if the vector is empty or not 
	if (g1.empty() == false) 
		cout << "\nVector is not empty"; 
	else
		cout << "\nVector is empty"; 

	// Shrinks the vector 
	g1.shrink_to_fit(); 
	cout << "\nVector elements are: "; 
	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 

	return 0; 
} 




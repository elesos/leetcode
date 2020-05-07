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
/* #include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Size : " << g1.size(); 
	cout << "\nCapacity : " << g1.capacity();  //8
	cout << "\nMax_Size : " << g1.max_size() << endl; 

	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 
	
	
	// resizes the vector size to 4 
	g1.resize(4); 

	// prints the vector size after resize() 
	cout << "\nSize : " << g1.size() << endl; 

	//少了最后一个元素
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
	
	cout << "\nCapacity : " << g1.capacity();  //4
	cout << "\nMax_Size : " << g1.max_size() << endl; 

	return 0; 
} 
 */

 // C++ program to illustrate the 
// element accesser in vector 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 10; i++) 
		g1.push_back(i * 10); //10次，10个元素

	cout << "\nReference operator [g] : g1[2] = " << g1[2]; //30

	cout << "\nat : g1.at(4) = " << g1.at(4); 

	cout << "\nfront() : g1.front() = " << g1.front(); 

	cout << "\nback() : g1.back() = " << g1.back();  //最后一个index=9

	// pointer to the first element 
	int* pos = g1.data(); 

	cout << "\nThe first element is " << *pos << endl; 
	return 0; 
} 

 */

//=============================Modifiers================
// CPP program to demonstrate 
// how to assign constant values to a vector 

/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> v; 
	v.assign(7, 100); //(int size, int value)

	cout << "Size of first: " << int(v.size()) << '\n'; //7

	cout << "Elements are\n"; 
	for (int i = 0; i < v.size(); i++) 
		cout << v[i] << endl; 
	return 0; 
} 
 */
 
 
// CPP program to demonstrate 
// how to assign values to a vector 
// from a list 

/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> v1; 
	int a[] = { 1, 2, 3 }; 

	// assign first 2 values 
	v1.assign(a, a + 2); 

	cout << "Elements of vector1 are\n"; 
	for (int i = 0; i < v1.size(); i++)  //只有1 2
		cout << v1[i] << " "; 

	vector<int> v2; 
	// assign first 3 values 
	v2.assign(a, a + 3); 

	cout << "\nElements of vector2 are\n"; 
	for (int i = 0; i < v2.size(); i++) 
		cout << v2[i] << " "; 

	return 0; 
} 
 */
 
// CPP program to demonstrate 
// how to modify vector size 

/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> v; 
	v.assign(7, 100); 

	cout << "Size of first: " << int(v.size()) << '\n'; 

	cout << "Elements are\n"; 
	for (int i = 0; i < v.size(); i++) 
		cout << v[i] << endl; 

	// modify the elements 
	v.assign(v.begin(), v.begin() + 3); 

	cout << "\nModified VectorElements are\n"; 
	for (int i = 0; i < v.size(); i++) 
		cout << v[i] << endl; 
	return 0; 
} 
 */
 
 
// CPP program to illustrate 
// Implementation of clear() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 
//O(N)
int main() 
{ 
	vector<int> myvector; 
	myvector.push_back(1); 
	myvector.push_back(2); 
	myvector.push_back(3); 
	myvector.push_back(4); 
	myvector.push_back(5); 

	// Vector becomes 1, 2, 3, 4, 5 

	myvector.clear(); 
	// vector becomes empty 

	// Printing the vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	return 0; 
}  */

// CPP program to illustrate 
// working of erase() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5 }; 
	vector<int>::iterator it; 

	it = myvector.begin(); 
	myvector.erase(it); 

	// Printing the Vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; //2 3 4 5
	return 0; 
} 
 */

// CPP program to illustrate 
// Implementation of erase() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5 }; 
	vector<int>::iterator it1, it2; 

	it1 = myvector.begin(); 
	it2 = myvector.end(); 
	it2--; 
	it2--; 

	myvector.erase(it1, it2); 

	// Printing the Vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	return 0;  // 4 5
} 
 */

#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5 }; 
	vector<int>::iterator it1, it2; 

	it1 = myvector.begin(); 
	it2 = myvector.end(); 
	

	myvector.erase(it1, it2); 

	// Printing the Vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	return 0;  // 4 5
} 


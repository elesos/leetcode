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

/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5 }; 
	vector<int>::iterator it1, it2; 

	it1 = myvector.begin() + 1; 
	it2 = myvector.end(); 
	

	myvector.erase(it1, it2); 

	// Printing the Vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	cout << endl;
	return 0;  // 4 5
} 
 */
 
// CPP program to illustrate 
// Application of erase() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 

	for (auto i = myvector.begin(); i != myvector.end(); ++i) { 
		if (*i % 2 == 0) { 
			myvector.erase(i); 
			i--; //TODO
		} 
	} 

	// Printing the vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	return 0; 
} 
 */
//=====================at==
// CPP program to illustrate 
// Implementation of at() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector; 
	myvector.push_back(3); 
	myvector.push_back(4); 
	myvector.push_back(1); 
	myvector.push_back(7); 
	myvector.push_back(3); 
	cout << myvector.at(3); 
	return 0; 
} 
 */
// CPP program to illustrate 
// Application of at() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector; 
	myvector.push_back(1); 
	myvector.push_back(2); 
	myvector.push_back(3); 
	myvector.push_back(4); 
	myvector.push_back(5); 
	myvector.push_back(6); 
	myvector.push_back(7); 
	myvector.push_back(8); 
	myvector.push_back(9); 
	// vector becomes 1, 2, 3, 4, 5, 6, 7, 8, 9 

	for (int i = 0; i < myvector.size(); i += 2) { 

		cout << myvector.at(i); 
		cout << " "; 
	} 

	return 0; 
} 
 */
//==========================swap
// same type and same size 

// CPP program to illustrate 
// Implementation of swap() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	// vector container declaration 
	vector<int> myvector1{ 1, 2, 3, 4 }; 
	vector<int> myvector2{ 3, 5, 7, 9 }; 

	// using swap() function to swap 
	// elements of vector 
	myvector1.swap(myvector2); 

	// printing the first vector 
	cout << "myvector1 = "; 
	for (auto it = myvector1.begin(); it < myvector1.end(); ++it) 
		cout << *it << " "; 

	// printing the second vector 
	cout << endl << "myvector2 = "; 
	for (auto it = myvector2.begin(); it < myvector2.end(); ++it) 
		cout << *it << " "; 
	return 0; 
}  */


// C++ program to illustrate the 
// vector::emplace() function 
// insertion at thefront 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> vec = { 10, 20, 30 }; 

	// insert element by emplace function 
	// at front 
	auto it = vec.emplace(vec.begin(), 15); 

	// print the elements of the vector 
	cout << "The vector elements are: "; 
	for (auto it = vec.begin(); it != vec.end(); ++it) 
		cout << *it << " "; //15 10 20 30

	return 0; 
}  */

// C++ program to illustrate the 
// vector::emplace() function 
// insertion at the end 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> vec = { 10, 20, 30 }; 

	// insert element by emplace function 
	// at the end 
	auto it = vec.emplace(vec.end(), 16); 

	// print the elements of the vector 
	cout << "The vector elements are: "; 
	for (auto it = vec.begin(); it != vec.end(); ++it) 
		cout << *it << " "; 

	return 0; 
} 
 */

 // C++ program to illustrate the 
// vector::emplace() function 
// insertion at the middle 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> vec = { 10, 20, 30 }; 

	// insert element by emplace function 
	// in the middle 
	auto it = vec.emplace(vec.begin() + 2, 16); //10 20 16 30

	// print the elements of the vector 
	cout << "The vector elements are: "; 
	for (auto it = vec.begin(); it != vec.end(); ++it) 
		cout << *it << " "; //TODO

	return 0; 
} 
 */
 
// INTEGER VECTOR EXAMPLE 
// CPP program to illustrate 
// Implementation of emplace() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> myvector; 
	myvector.emplace_back(1); 
	myvector.emplace_back(2); 
	myvector.emplace_back(3); 
	myvector.emplace_back(4); 
	myvector.emplace_back(5); 
	myvector.emplace_back(6); 
	// vector becomes 1, 2, 3, 4, 5, 6 

	// printing the vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 

	return 0; 
	
}  */


// STRING VECTOR EXAMPLE 
// CPP program to illustrate 
// Implementation of emplace() function 
/* #include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

int main() 
{ 
	// vector declaration 
	vector<string> myvector; 
	myvector.emplace_back("This"); 
	myvector.emplace_back("is"); 
	myvector.emplace_back("a"); 
	myvector.emplace_back("computer science"); 
	myvector.emplace_back("portal"); 

	// vector becomes This, is, a computer science, portal 

	// printing the vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 

	return 0; 
	
}  */


// CHARACTER VECTOR EXAMPLE 
// CPP program to illustrate 
// Implementation of emplace() function 
/* #include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<char> myvector; 
	myvector.emplace_back('a'); 
	myvector.emplace_back('c'); 
	myvector.emplace_back('x'); 
	myvector.emplace_back('y'); 
	myvector.emplace_back('z'); 
	// vector becomes a, c, x, y, z 

	// printing the vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; //a c x y z

	return 0; 
	
} 
 */
 
// CPP program to illustrate 
// Application of emplace_back function 
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	//int count = 0; 
	vector<int> myvector; 
	myvector.emplace_back(1); 
	myvector.emplace_back(2); 
	myvector.emplace_back(3); 
	myvector.emplace_back(4); 
	myvector.emplace_back(5); 
	myvector.emplace_back(6); 
	// while (!myvector.empty()) { 
		// count++; 
		// myvector.pop_back(); 
	// } 
	// cout << count; 
	count << myvector.size() << endl;
	return 0; 
} 

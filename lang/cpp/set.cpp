/* //https://www.geeksforgeeks.org/set-in-cpp-stl/

//每个元素都是unique, 要修改只能先删除再添加修改后的值


#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	// empty set container 
	set <int, greater <int> > gquiz1;		 //是尖括号， 从大到小排序了

	// insert elements in random order 
	gquiz1.insert(40); 
	gquiz1.insert(30); 
	gquiz1.insert(60); 
	gquiz1.insert(20); 
	gquiz1.insert(50); 
	gquiz1.insert(50); // only one 50 will be added to the set 
	gquiz1.insert(10); 

	// printing set gquiz1 
	set <int, greater <int> > :: iterator itr; 

	cout << "\nThe set gquiz1 is : "; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 
	cout << endl; 



	// assigning the elements from gquiz1 to gquiz2 
	set <int> gquiz2(gquiz1.begin(), gquiz1.end()); 

	// print all elements of the set gquiz2 
	cout << "\nThe set gquiz2 after assign from gquiz1 is : "; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; //从小到大
	} 
	cout << endl; 




	// remove all elements up to 30 in gquiz2 
	cout << "\ngquiz2 after removal of elements less than 30 : "; 
	gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); //a range
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 

	// remove element with value 50 in gquiz2 
	int num; 
	num = gquiz2.erase (50); 
	cout << "\ngquiz2.erase(50) : "; 
	cout << num << " removed \t" ; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 

	cout << endl; 


    

	//lower bound and upper bound for set gquiz1 
	cout << "gquiz1.lower_bound(40) : "
		<< *gquiz1.lower_bound(40) << endl; 
	cout << "gquiz1.upper_bound(40) : "
		<< *gquiz1.upper_bound(40) << endl; 

	//lower bound and upper bound for set gquiz2 
	cout << "gquiz2.lower_bound(40) : "
		<< *gquiz2.lower_bound(40) << endl; 
	cout << "gquiz2.upper_bound(40) : "
		<< *gquiz2.upper_bound(40) << endl; 

	return 0; 

} 
 */




// CPP program to demonstrate the 
// set::lower_bound() function 
#include <bits/stdc++.h> //里面包含了iostream等头文件
using namespace std; 
int main() 
{ 

	set<int> s; 

	// Function to insert elements 
	// in the set container ，会排序
	s.insert(1); 
	s.insert(4); 
	s.insert(2); 
	s.insert(5); 
	s.insert(6); 

	cout << "The set elements are: "; 
	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; 

	// when 2 is present 
	auto it = s.lower_bound(2); 
	cout << "\nThe lower bound of key 2 is "; 
	cout << (*it) << endl; 

	// when 3 is not present 
	// points to next greater after 3 
	it = s.lower_bound(3); 
	cout << "The lower bound of key 3 is "; 
	cout << (*it) << endl; 

	// when 8 exceeds the max element in set 
	it = s.lower_bound(8); 
	cout << "The lower bound of key 8 is ";  //返回number of elements
	cout << (*it) << endl; 

	return 0; 
} 

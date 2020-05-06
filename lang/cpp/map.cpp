//https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

// C++ program to illustrate 
// map::insert({key, element}) 
/* 
#include <iostream> 
#include <iterator> 
#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 60 }); 

	// does not inserts key 2 with element 20 
	mp.insert({ 2, 20 }); 
	
	mp.insert({ 5, 50 }); 

	// prints the elements 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 	<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
}  */


/* 

#include <iostream> 
#include <iterator> 
#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 
  
    // initialize container 
    map<int, int> mp, mp1; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
  
    // inserts all elements in range 
    // [begin, end) in mp1 
    mp1.insert(mp.begin(), mp.end()); 
  
    // prints the elements 
    cout << "Elements in mp1 are\n"; 
    cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    return 0; 
} 
 */

/* #include <iostream> 
#include <iterator> 
#include <bits/stdc++.h> 

using namespace std; 


int main() 
{ 

	// initialize container 
	multimap<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 20 }); 
	mp.insert({ 4, 50 }); 

	cout << "The elements from position 3 in map are : \n"; 
	cout << "KEY\tELEMENT\n"; 

	
	for (auto itr = mp.find(3); itr != mp.end(); itr++) 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 

	return 0; 
} 
 */

// C++ function for illustration 
// map::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 10 }); 
	mp.insert({ 5, 50 }); 
	mp.insert({ 4, 40 }); 
	for (auto it = mp.begin(); it != mp.end(); it++) { 
		cout << (*it).first << " " << (*it).second << endl; 
	} 

	// when 2 is present 
	auto it = mp.lower_bound(2); 
	cout << "The lower bound of key 2 is "; 
	cout << (*it).first << " " << (*it).second << endl; 

	// when 3 is not present 
	// points to next greater after 3 
	it = mp.lower_bound(3); 
	cout << "The lower bound of key 3 is "; 
	cout << (*it).first << " " << (*it).second; 

	// when 6 exceeds 
	it = mp.lower_bound(6); 
	cout << "\nThe lower bound of key 6 is "; 
	cout << (*it).first << " " << (*it).second; 
	return 0; 
} 


/* #include <iostream> 
#include <map> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	multimap <int, int> gquiz1;	 // empty multimap container 

	// insert elements in random order 
	gquiz1.insert(pair <int, int> (1, 40)); 
	gquiz1.insert(pair <int, int> (2, 30)); 
	gquiz1.insert(pair <int, int> (3, 60)); 
	gquiz1.insert(pair <int, int> (4, 20)); 
	gquiz1.insert(pair <int, int> (5, 50)); 
	gquiz1.insert(pair <int, int> (6, 50)); 
	gquiz1.insert(pair <int, int> (6, 10)); 

	// printing multimap gquiz1 
	multimap <int, int> :: iterator itr; 
	cout << "\nThe multimap gquiz1 is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	// assigning the elements from gquiz1 to gquiz2 
	multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end()); 

	// print all elements of the multimap gquiz2 
	cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 

	// remove all elements up to element with value 30 in gquiz2 
	cout << "\ngquiz2 after removal of elements less than key=3 : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	// remove all elements with key = 4 
	int num; 
	num = gquiz2.erase(4); 
	cout << "\ngquiz2.erase(4) : "; 
	cout << num << " removed \n" ; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	cout << endl; 

	//lower bound and upper bound for multimap gquiz1 key = 5 
	cout << "gquiz1.lower_bound(5) : " << "\tKEY = "; 
	cout << gquiz1.lower_bound(5)->first << '\t'; 
	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl; 
	cout << "gquiz1.upper_bound(5) : " << "\tKEY = "; 
	cout << gquiz1.upper_bound(5)->first << '\t'; 
	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl; 

	return 0; 

} 
 */

 
/* 
#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 


int main() 
{ 
  	
	
    // empty map container 
    map<int, int> gquiz1; 
  
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz1.insert(pair<int, int>(2, 30)); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(4, 20)); 
    gquiz1.insert(pair<int, int>(5, 50)); 
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int, int>(7, 10)); 
  
    // printing map gquiz1 
    map<int, int>::iterator itr; 
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from gquiz1 to gquiz2 
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end()); 
  
    // print all elements of the map gquiz2 
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to 
    // element with key=3 in gquiz2 
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove all elements with key = 4 
    int num; 
    num = gquiz2.erase(4); 
    cout << "\ngquiz2.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    // lower bound and upper bound for map gquiz1 key = 5 
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.lower_bound(5)->second << endl; 
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = "; 
    cout << gquiz1.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << gquiz1.upper_bound(5)->second << endl; 
  
    return 0; 
}  */


//https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
// map and pair


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

	// insert elements in random order , 仍会按key排序
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
/* 
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
	cout << "The lower bound of key 2 is: "; 
	cout << (*it).first << " " << (*it).second << endl; 

	// when 3 is not present 
	// points to next greater after 3 
	it = mp.lower_bound(3); 
	cout << "The lower bound of key 3 is: "; 
	cout << (*it).first << " " << (*it).second; 

	// when 6 exceeds 
	//the iterator returned points to number of elements in the map as key and element=0.值固定为0
	// 4 0
	it = mp.lower_bound(6); 
	cout << "\nThe lower bound of key 6 is: "; 
	cout << (*it).first << " " << (*it).second; 
	return 0; 
}  */

/* #include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 12, 30 }); 
    mp.insert({ 11, 10 }); 
    mp.insert({ 15, 50 }); 
    mp.insert({ 14, 40 }); 
  
    // when 11 is present 返回比它大的
    auto it = mp.upper_bound(11); 
    cout << "The upper bound of key 11 is "; 
    cout << (*it).first << " " << (*it).second << endl; 
  
    // when 13 is not present 
    it = mp.upper_bound(13); 
    cout << "The upper bound of key 13 is "; 
    cout << (*it).first << " " << (*it).second << endl; 
  
    // when 17 is exceeds the maximum key, so size 
        // of mp is returned as key and value as 0. 
    it = mp.upper_bound(17); 
    cout << "The upper bound of key 17 is "; 
    cout << (*it).first << " " << (*it).second; 
    return 0; 
}  */


//===================================pair===================================
//CPP program to illustrate pair STL 
/* #include <iostream> 
#include <utility> 
using namespace std; 

int main() 
{ 
	pair <int, char> PAIR1 ; 

	PAIR1.first = 100; 
	PAIR1.second = 'G' ; 

	cout << PAIR1.first << " " ; 
	cout << PAIR1.second << endl ; 

	return 0; 
}  */

//CPP program to illustrate Initializing of pair STL 
/* #include <iostream> 
#include <utility> 
using namespace std; 

int main() 
{ 
	pair <string,double> PAIR2 ("GeeksForGeeks", 1.23); 

	cout << PAIR2.first << " " ; 
	cout << PAIR2.second << endl ; 
	
return 0; 
}  */


//CPP program to illustrate auto-initializing of pair STL 
/* #include <iostream> 
#include <utility> 

using namespace std; 

int main() 
{ 
	pair <int, double> PAIR1 ; 
	pair <string, char> PAIR2 ; 

	cout << PAIR1.first ; //it is initialised to 0 
	cout << PAIR1.second ; //it is initialised to 0 

	cout << " "; 

	cout << PAIR2.first ; //it prints nothing i.e NULL 
	cout << PAIR2.second ; //it prints nothing i.e NULL 

	return 0; 
}  */

/* #include <iostream> 
#include <utility> 
using namespace std; 

int main() 
{ 
	pair <int, char> PAIR1 ; 
	pair <string, double> PAIR2 ("GeeksForGeeks", 1.23) ; 
	pair <string, double> PAIR3 ; 

	PAIR1.first = 100; 
	PAIR1.second = 'G' ; 

	PAIR3 = make_pair ("GeeksForGeeks is Best",4.56); 

	cout << PAIR1.first << " " ; 
	cout << PAIR1.second << endl ; 

	cout << PAIR2.first << " " ; 
	cout << PAIR2.second << endl ; 

	cout << PAIR3.first << " " ; 
	cout << PAIR3.second << endl ; 

	return 0; 
} 
 */

//CPP code to illustrate operators in pair 
/* #include <iostream> 
#include<utility> 
using namespace std; 

int main() 
{ 
	pair<int, int>pair1 = make_pair(1, 12); //TODO 居然没有空格？
	pair<int, int>pair2 = make_pair(9, 12); 


	cout << (pair1 == pair2) << endl; 
	cout << (pair1 != pair2) << endl; 
	cout << (pair1 >= pair2) << endl; 
	cout << (pair1 <= pair2) << endl; 
	cout << (pair1 > pair2) << endl; 
	cout << (pair1 < pair2) << endl; 

	return 0; 
} 

 */

 

//================erase
// C++ program to illustrate 
// map::erase(key) 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 

	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 60 }); 
	mp.insert({ 5, 50 }); 

	// prints the elements 
	cout << "The map before using erase() is : \n"; 
	cout << "KEY\tELEMENT\n"; 
	//TODO auto
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	
	
	
	

	// function to erase given keys 
	mp.erase(1); 
	mp.erase(2); 

	// prints the elements 
	cout << "\nThe map after applying erase() is : \n"; 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
} 
 */


// C++ program to illustrate 
// map::erase() 
/* #include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	map<int, int> mp; 
	// insert elements in random order 
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 60 }); 
	mp.insert({ 2, 20 }); 
	mp.insert({ 5, 50 }); 

	// prints the elements 
	cout << "The map before using erase() is : \n"; 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	// function to erase in a given range 
	// find() returns the iterator reference to 
	// the position where the element is 
	auto it1 = mp.find(2); 
	auto it2 = mp.find(5); 
	mp.erase(it1, it2);   //5不会删除

	// prints the elements 
	cout << "\nThe map after applying erase() is : \n"; 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
} 


 */





/* 

#include <iostream> 
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

	// printing 
	multimap <int, int> :: iterator itr; 	//TODO 
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
	
	cout << "gquiz1.upper_bound(5) : " << "\tKEY = "; //返回比它大的
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
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); //不包括3
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
} 
 */

//////////////////////////////////////////////unordered_map=============
// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
	// Declaring umap to be of <string, int> type 
	// key will be of string type and mapped value will 
	// be of double type 
	unordered_map<string, int> umap; 

	// inserting values by using [] operator 
	umap["GeeksforGeeks"] = 10; 
	umap["Practice"] = 20; 
	umap["Contribute"] = 30; 

	// Traversing an unordered map 
	for (auto x : umap) 
	    cout << x.first << " " << x.second << endl; 

} 

 
 
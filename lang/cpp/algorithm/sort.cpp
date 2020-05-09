//sort internally uses IntroSort. it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.
//

#include <iostream> 
#include <algorithm> 

using namespace std; 

/* void show(int a[]) 
{ 
	for(int i = 0; i < 10; ++i) 
		cout << a[i] << " "; 
} 

int main() 
{ 
	int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	cout << "\n The array before sorting is : "; 
	show(a); 

	sort(a, a+10); 

	cout << "\n\n The array after sorting is : "; 
	show(a); 

	return 0; 

} 
 */
 
void show(char a[]) 
{ 
	for(int i = 0; i < 10; ++i) 
		cout << a[i] << " "; 
} 

int main() 
{ 
	char a[10]= {'b', 'a', 'd', 'c', 'f', 'e', 'h', 'g', 'j', 'i'}; 
	cout << "\n The array before sorting is : "; 
	show(a); 

	sort(a, a+10); 

	cout << "\n\n The array after sorting is : "; 
	show(a); 

	return 0; 

} 

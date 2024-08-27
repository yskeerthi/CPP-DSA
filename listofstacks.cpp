// C++ program for implementation 
// of the lists of stack 

#include <bits/stdc++.h> 
using namespace std; 

// Function for printing the 
// elements in a list 
void showlist(list<stack<int> > ls) 
{ 

	// Traverse the list and 
	// print row wise stack 
	for (list<stack<int> >::iterator it1 
		= ls.begin(); 
		it1 != ls.end(); ++it1) { 

		// Copy rows in stack 
		stack<int> it2 = *it1; 

		// Print stack elements while 
		// it is not empty 
		while (!it2.empty()) { 
			cout << it2.top() << " "; 
			it2.pop(); 
		} 
		cout << endl; 
	} 
} 

// Driver Code 
int main() 
{ 
	// List of stacks 
	list<stack<int> > ls; 

	// Insert rows in list 
	for (int i = 0; i < 10; ++i) { 
		// Insert element in 
		// stack as column 
		stack<int> s; 

		for (int j = i; j < 10; j++) { 
			s.push(j); 
		} 

		ls.push_back(s); 
	} 

	cout << "List of stack is : \n"; 
	showlist(ls); 

	return 0; 
} 

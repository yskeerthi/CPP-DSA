#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
int main() {
  // vector<int> v{1,2,3};
  vector<int> v;
  for (int i = 0; i <= 10; i++) {
    v.push_back(i);
  }

  print(v);
  cout << "first value: " << v.front() << endl;
  cout << "last value: " << v.back() << endl;
  cout << "size: " << v.size() << endl;
  cout << "is empty: " << v.empty() << endl;
  v.pop_back();
  print(v);
  // first value through iterators
  cout << "first value: " << *v.begin() << endl;

  cout << "last value: " << *v.end() << endl;
}

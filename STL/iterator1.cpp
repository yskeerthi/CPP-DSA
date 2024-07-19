#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
int main() {
    vector<int> v{1, 2, 3, 4, 5};
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    v.insert(v.begin(), 5, 102);

    v.insert(v.begin() + 3, 104);
    v.erase(v.begin(),v.begin()+3);
    //v.clear()--to clear the vector
   print(v);

    return 0;
}

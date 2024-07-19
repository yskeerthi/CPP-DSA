#include <iostream>
#include <set>
using namespace std;

void print_set(set<int> s) {
    set<int>::iterator it;
    cout << "set: ";
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void print_multiset(multiset<int> ms) {
    multiset<int>::iterator it;
    cout << "Multiset: ";
    for (it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s{5, 4, 2, 3, 2, 1};
    print_set(s);

    for (int i = 6; i <= 10; i++)
        s.insert(i);
    print_set(s);

    cout << "size: " << s.size() << endl;
    cout << "Set is empty or not: " << (s.empty() ? "Yes" : "No") << endl;
    cout << "5 present in set or not: " << s.count(2) << endl;

    if (s.find(55) != s.end())
        cout << "55 is present in set!" << endl;
    else
        cout << "55 is not-present in set!" << endl;

    if (s.find(55) != s.end())
        s.erase(s.find(55));

    print_set(s);

    // Multiset
    multiset<int> ms{1, 2, 3, 4, 2, 2, 3, 3, 5, 4, 7, 4, 8};
    print_multiset(ms);

     cout<<"lower_bound of 3: "<<*ms.lower_bound(3)<<endl;
    cout<<"upper_bound of 4: "<<*ms.upper_bound(4)<<endl;

    return 0;
}

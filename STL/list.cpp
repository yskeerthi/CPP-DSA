#include <iostream>
#include <list>
using namespace std;

void print_list(const list<int>& ls)
{
    for (auto it = ls.begin(); it != ls.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main() {
    list<int> ls;
    for (int i = 1; i <= 10; i++)
        ls.push_back(i);
    
    print_list(ls);
    
    ls.push_front(9);
    print_list(ls);
    
    ls.pop_front();
    print_list(ls);
    
    ls.pop_back();
    print_list(ls);

    cout << "first value: " << ls.front() << endl;
    cout << "last value: " << ls.back() << endl;
    cout << "size: " << ls.size() << endl;

    ls.insert(ls.begin(), 501);
    print_list(ls);

    list<int>::iterator temp = ls.begin();
    advance(temp, 2);
    ls.insert(temp, 67);
    print_list(ls);

    ls.erase(ls.begin(), ls.end());
    print_list(ls);

    return 0;
}

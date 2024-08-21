#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    string n;
    cin >> n;
    size_t pos = n.find('i');
    if (pos != string::npos) {
        reverse(n.begin(), n.begin() + pos);
        n.erase(pos, 1);
    }

    cout << n << endl;

    return 0;
}

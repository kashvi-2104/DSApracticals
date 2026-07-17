#include <iostream>
using namespace std;

int main() {
    string items[] = {"cupcake", "brownie", "cheesecake", "chocolate", "tiramisu"};
    int n = 5;

    int h;
    cout << "Enter number of hours: ";
    cin >> h;

    int k = h % n;

    cout << "Final display order: ";
    for (int i = 0; i < n; i++) {
        cout << items[(i + k) % n] << " ";
    }

    return 0;
}
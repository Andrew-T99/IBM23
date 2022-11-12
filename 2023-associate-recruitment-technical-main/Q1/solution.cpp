

#include <iostream>
using namespace std;

int main () {
    int n;
    int sum = 0;

    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    cout << sum << endl;
    return 0;
}
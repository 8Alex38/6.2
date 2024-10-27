/*
5
1
2
3
4
5
*/

#include <iostream>
#include <vector>

using namespace std;

int sumOddIndices(const vector<int>& a) {
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % 2 != 0) { 
            sum += i;        
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Numbers: ";
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter: " << i << ": "; 
        cin >> a[i];
    }

    int result = sumOddIndices(a);
    cout << "Sum: " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int zeros = 0;
	    int ones = 0;
	    int twoes = 0;
	    int unknown;
	    for (int i = 0; i < n; i++) {
	        cin >> unknown;
	        if (unknown == 0)
	            zeros += 1;
	        if (unknown == 1)
	            ones += 1;
	        if (unknown == 2)
	            twoes += 1;
	    }
	    for (int i = 0; i < zeros; i++) {
	        cout << 0 << " ";
	    }
	    for (int i = 0; i < ones; i++) {
	        cout << 1 << " ";
	    }
	    for (int i = 0; i < twoes; i++) {
	        cout << 2 << " ";
	    }
	    cout << endl;
	}
	return 0;
}

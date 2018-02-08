#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int *arr = new int[n];
	    bool *leader = new bool[n];
	    memset(leader, false, sizeof(bool));
	    for (int i = 0; i < n; i++)
	        cin >> arr[i];
        int max = arr[n - 1];
        leader[n - 1] = true;
        for (int i = n - 2; i >= 0; i--)
            if (arr[i] > max) {
                leader[i] = true;
                max = arr[i];
            }
        for (int i = 0; i < n; i++)
            if (leader[i] == true)
                cout << arr[i] << " ";
        cout << endl;
	}
	return 0;
}

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
	    int *presum = new int[n];
	    int *postsum = new int[n];
	    bool flag = false;
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    presum[0] = 0;
	    postsum[n - 1] = 0;
	    for (int i = 1; i < n; i++)
	        presum[i] = presum[i - 1] + arr[i - 1];
	    for (int i = n - 2; i >= 0; i--)
	        postsum[i] = postsum[i + 1] + arr[i + 1];
	    for (int i = 0; i < n; i++)
	        if (postsum[i] == presum[i]) {
	            cout << i + 1 << endl;
	            flag = true;
	            break;
	        }
	    if (flag == false) 
	        cout << "-1" << endl;
	}
	return 0;
}

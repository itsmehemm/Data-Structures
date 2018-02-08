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
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    int *dp = new int[n];
	    dp[0] = arr[0];
	    for (int i = 1; i < n; i++) {
	        dp[i] = arr[i];
	        for (int j = i - 1; j >= 0; j--) {
	            if (arr[i] > arr[j]) {
	                dp[i] = (dp[j] + arr[i]) > dp[i] ? dp[j] + arr[i] : dp[i];
	            }
	        }
	    }
	    int max = dp[0];
	    for (int i = 1; i < n; i++)
	        if (dp[i] > max)
	            max = dp[i];
	    cout << max << endl;
	}
	return 0;
}

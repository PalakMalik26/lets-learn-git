//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long sumOfDivisors(int n) {
        vector<long long>divisorsum(n+1,0);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                divisorsum[j]+=i;
            }
            
        }
        long long totalsum=0;
        for(int i=1;i<=n;i++){
            totalsum+=divisorsum[i];
        }
        // Write Your Code here
        return totalsum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        long long ans = ob.sumOfDivisors(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
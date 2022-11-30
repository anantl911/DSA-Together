//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}
// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
    int min = arr[0], max = arr[0];
    for(int i = 0 ; i < 2 ; i++){
    for(int j = 0 ; j < n ; j++){
        if(i==0){
        if(arr[j]<min) min = arr[j];
        }
        else{
            if(arr[j]>max) max = arr[j];
        }
    }
    }
    struct pair minmax;
    minmax.max = max;
    minmax.min = min;
    return minmax;
    }
//? https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

//! T.C -> O(n)
//! S.C -> O(1)

#include<bits/stdc++.h>
using namespace std;

//* Using Queue

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> kSmallest;
        
        for (int i = 0; i < k; i++) {
            kSmallest.push(arr[i]);
        }
        
        for (int i = k; i <= r; i++) {
            if (arr[i] < kSmallest.top()) {
                kSmallest.pop();
                kSmallest.push(arr[i]);
            }
        }
        
        return (kSmallest.top());
    }
};
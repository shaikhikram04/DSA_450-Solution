//? https://www.geeksforgeeks.org/problems/max-min/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

//! T.C -> O(n)
//! S.C -> O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min = A[0];
    	int max = A[0];
    	
    	for (int i = 1; i < N; i++) {
    	    if (A[i] < min)
    	        min = A[i];
	        
	        if (A[i] > max)
	            max = A[i];
    	}
    	
    	return (min + max);
    }

};
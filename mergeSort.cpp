/*merge sort example
*/
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//function declaration
void mergeSort(vector<int>& nums, int beg, int end);
void merge(vector<int>& nums, int lbeg, int lend, int rbeg, int rend);

int main() {
    //variable declaration
    vector<int> a {5, 2, 1, 3, 4};

    int n = a.size();

    mergeSort(a, 0, n-1);

    //print result
    for(int i=0; i<a.size(); ++i) {
        printf("%d\f", a[i]);
    }

    return 0;
}

void mergeSort(vector<int>& nums, int beg, int end) {
    if(beg >= end) return;
    int mid = beg + (end-beg)/2;
    mergeSort(nums, beg, mid);
    mergeSort(nums, mid+1, end);
    merge(nums, beg, mid, mid+1, end);
}

void merge(vector<int>& nums, int lbeg, int lend, int rbeg, int rend) {
    int n = nums.size();
    vector<int> temp(n);
    int i = lbeg, j = rbeg, k = lbeg;
    while(i <= lend && j <= rend) {
        if(nums[i] < nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }
    while(i <= lend) {
        temp[k++] = nums[i++];
    }
    while(j <= rend) {
        temp[k++] = nums[j++];
    }
    for(k = lbeg; k <= rend; ++k) {
        nums[k] = temp[k];
    }
}
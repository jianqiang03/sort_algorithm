/*selection sort example
*/
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//function declaration
void selectionSort(vector<int>& nums);

int main() {
    //variable declaration
    vector<int> a {5, 2, 1, 3, 4};

    selectionSort(a);

    //print result
    for(int i=0; i<a.size(); ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}

void selectionSort(vector<int>& nums) {
    if(nums.empty()) return;
    int n = nums.size();
    for(int k=0; k<n-1; ++k) {
        int small = nums[k];
        int pos = k;
        for(int j=k+1; j<n; ++j) {
            if(nums[j] < small) {
                small = nums[j];
                pos = j;
            }
        }
        if(pos != k) swap(nums[k], nums[pos]);
    }
}
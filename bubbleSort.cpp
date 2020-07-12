/*bubble sort example
*/
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//function declaration
void bubbleSort(vector<int>& nums);

int main() {
    //variable declaration
    vector<int> a {5, 2, 1, 3, 4};

    bubbleSort(a);

    //print result
    for(int i=0; i<a.size(); ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}

void bubbleSort(vector<int>& nums) {
    if(nums.empty()) return;
    int n = nums.size();
    for(int k=0; k<n-1; ++k) {
        for(int j=0; j<n-k-1; ++j) {
            if(nums[j] > nums[j+1])
            swap(nums[j], nums[j+1]);
        }
    }
}
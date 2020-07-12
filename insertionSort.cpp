/*insertion sort example
*/
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//function declaration
void insertionSort(vector<int>& nums);

int main() {
    //variable declaration
    vector<int> a {5, 2, 1, 3, 4};

    insertionSort(a);

    //print result
    for(int i=0; i<a.size(); ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}

void insertionSort(vector<int>& nums) {
    if(nums.empty()) return;
    int n = nums.size();
    for(int k=1; k<=n-1; ++k) {
        int j = k-1;
        int temp = nums[k];
        while(nums[j] > temp && j >= 0) {
            nums[j+1] = nums[j];
            --j;
        }
        nums[j+1] = temp;
    }
}
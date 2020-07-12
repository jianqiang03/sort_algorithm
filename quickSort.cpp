/*quick sort example
*/
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

//function declaration
void quickSort(vector<int>& nums, int beg, int end);
int partition(vector<int>& nums, int beg, int end);

int main() {
    //variable declaration
    vector<int> a {5, 2, 1, 3, 4};

    int n = a.size();

    quickSort(a, 0, n-1);

    //print result
    for(int i=0; i<a.size(); ++i) {
        printf("%d\f", a[i]);
    }

    return 0;
}

void quickSort(vector<int>& nums, int beg, int end) {
    if(beg >= end) return;
    int p = partition(nums, beg, end);
    quickSort(nums, beg, p-1);
    quickSort(nums, p+1, end);
}

int partition(vector<int>& nums, int beg, int end) {
    int pivot = beg;
    int i = beg+1;
    int j = end;
    while(true) {
        while(nums[i] < nums[pivot]) {
            ++i;
            if(i == end) break;
        }
        while(nums[j] > nums[pivot]) {
            --j;
            if(j == beg) break;
        }
        if(i >= j) break;
        swap(nums[i], nums[j]);
    }
    swap(nums[pivot], nums[j]);
    return j;
}
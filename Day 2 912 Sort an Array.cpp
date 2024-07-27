#include <vector>

class Solution {
public:

    void merge(vector<int>& arr, int st, int mid, int end) {
        int n1 = mid - st + 1;
        int n2 = end - mid;

        vector<int> L(n1);
        vector<int> R(n2);
        
        for (int i = 0; i < n1; ++i)
            L[i] = arr[st + i];
        for (int j = 0; j < n2; ++j)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = st;
        while (i < n1 && j < n2) 
        (L[i] <= R[j]) ? arr[k++] = L[i++]: arr[k++] = R[j++];

        while (i < n1) arr[k++] = L[i++];

        while (j < n2) arr[k++] = R[j++];
    }

    void mergeSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            mergeSort(arr, st, mid);
            mergeSort(arr, mid + 1, end);
            merge(arr, st, mid, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

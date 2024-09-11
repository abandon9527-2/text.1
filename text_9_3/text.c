#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1, j, k;
    while (i >= 0 && m + n > 0)
    {
        nums1[i + n] = nums1[i];
        //nums1[i] = 0;
        i--;
    }
    i = 0; j = 0; k = 0;
    while ((k < m + n) && (i < m) && (j < n))
    {
        if (nums1[n + i] < nums2[j])
        {
            nums1[k] = nums1[n + i];
            //nums1[n + i] = 0;
            k++;
            i++;
        }
        else
        {
            nums1[k] = nums2[j];
            //nums2[j] = 0;
            j++;
            k++;
        }
    }
    while (j < n)
    {
        nums1[m + j] = nums2[j];
        j++;
    }
}

int main()
{
    int nums1[] = { 1 }; 
    int m = 3;
    int nums2[1];
    int  n = 3;
    merge(nums1, 4, 1, nums2, 4, 0);
}
// 4. 寻找两个正序数组的中位数
// 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。
// 算法的时间复杂度应该为 O(log (m+n)) 。

// 示例 1：
// 输入：nums1 = [1,3], nums2 = [2]
// 输出：2.00000
// 解释：合并数组 = [1,2,3] ，中位数 2

// 示例 2：
// 输入：nums1 = [1,2], nums2 = [3,4]
// 输出：2.50000
// 解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5

// 提示:
// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 106

#include<iostream>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int numLength = nums1.size() + nums2.size();
    vector<double> resultVec;
    int index1 = 0;
    int index2 = 0;
    double result = 0;
    for(int i = 0; i <= numLength/2; ++i){
        if(index1 < nums1.size() && (index2 >= nums2.size() || nums1[index1] < nums2[index2])){
            resultVec.push_back(nums1[index1]);
            index1++;
        }
        else if(index2<nums2.size()){
            resultVec.push_back(nums2[index2]);
            index2++;
        }
    }
    if (numLength % 2 == 0){
        result = (resultVec[index1+index2 - 2] + resultVec[index1+index2 - 1]) / 2;
    }
    else{
        result = resultVec[index1 + index2 - 1];
    }

    return result;
}

int main(){

    vector<int> nums1{0, 0};
    vector<int> nums2{0 ,0};
    cout<<findMedianSortedArrays(nums1, nums2)<<endl;
    return 0;
}
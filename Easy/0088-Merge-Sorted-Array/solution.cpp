#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int p1 = m-1;
    int p2 = n-1;
    int p = m+n-1;

    while(p2>=0){
        if (p1 >= 0 && nums1.at(p1) > nums2.at(p2)){
            nums1.at(p) = nums1.at(p1);
            p1--;
        }else{
            nums1.at(p) = nums2.at(p2);
            p2--;
        }
        p--;
    }
}
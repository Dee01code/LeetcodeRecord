class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
​
        int s=0;
        int e=m-1;
        int ans=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int i=0;
            int j=mid;
            bool flag=false;
            while(j<m&&i<n)
            {
                if(nums1[i]<=nums2[j])
                {
                    flag=true;
                    break;
                }
                i++;
                j++;
            }
            if(flag==true)
            {
                ans=mid;            //it can be the possible answer
                s=mid+1;            //considering the right side
            }
            else
            {
                e=mid-1;            //considering the left side
            }
        }
        return ans;
    }
};

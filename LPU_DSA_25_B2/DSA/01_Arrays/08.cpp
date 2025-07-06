// https://leetcode.com/problems/two-sum/

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return{-1,-1};
//     }
// };

/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++){
            //Check if today's price is lower than minPrice so far
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else{
                //Calculate profit if we sell today
                int profit = prices[i] - minPrice;

                if(profit > maxProfit){
                    maxProfit = profit;
                }     
            }
        }
        return maxProfit;
    }
};



https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(num[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low = 0, mid = 0;
      int high = nums.size() - 1;

      while(mid <=high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
      }  
    }
};


https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    int findMaxElement(vector<int>& piles){
        int maximum = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maximum = max(maximum, piles[i]); 
        }
        return maximum;
    }

    long long calculateHours(vector<int>& piles, int k){
        long long totalHours = 0;
        for(int i = 0; i < piles.size(); i++){
            totalHours += ceil((double)piles[i]/(double)k);
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMaxElement(piles);

        while(low <= high){
            int mid = (low+high)/2;
            long long totalHours = calculateHours(piles, mid);

            if(totalHours <= h){
                high = mid-1;
            }
            else {
                low = mid+1;
            }

        }
        return low;
    }
};
















*/
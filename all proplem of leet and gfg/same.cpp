class Solution {
public:
int sum =0;
    int missingNumber(vector<int>& nums) {
       int n=0;
        for(int i=0;i<1000;i++){
            if(nums[i]!=0){
                n++;
            }
            else{
                break;
            }
        }
        sum =(n*(n+1))/2;
        for (int i = 0; i < n; i++){
            sum = sum- nums[i];
        }
        return -sum;
    }
};

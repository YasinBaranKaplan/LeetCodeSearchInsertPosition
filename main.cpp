#include <iostream>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i<nums.size();i++){
            if(target==nums[i]||target<nums[i])
            return i;

           else if(i+1==nums.size() )
             return nums.size();


            }
        return(0);
        }

};

int main(){
return 0;
}

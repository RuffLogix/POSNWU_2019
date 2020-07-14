#include <bits/stdc++.h>

using namespace std;

class solution{
    public:
        int maxSubArray(vector<int>& nums) {
            int n = nums.size();
            int mem[n];

            memset(mem,0,sizeof(mem));

            mem[n] = nums[0];
        
            for(int i=1 ; i<n ; i++){
                mem[i] = max(mem[i-1],mem[i]) + nums[i];
            }

            return  *max_element(mem,mem+n);
        }
};

int main(){
    solution a;
    vector<int> b = {-2,1,-3,4,-1,2,1,-5,4};
    cout << a.maxSubArray(b);
}
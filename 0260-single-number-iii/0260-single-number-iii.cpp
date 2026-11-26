class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {       
    int x=0;
	int pos=0;
	int sd=0;
    int nsd=0;
	for(int i=0;i<nums.size();i++){
		x^=nums[i];
	}
	while(x!=0){
		if((x&1)==1){
			break;
		}
		x=x>>1;
		pos++;
	}
	for(int i=0;i<nums.size();i++){
		if(((nums[i]>>pos)&1)==1){
			sd^=nums[i];
		}
		else{
			nsd^=nums[i];
		}
	}
    return {sd,nsd};
	}       
    
};
#include<iostream>
#include<vector>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> result;
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j=i+1; j< nums.size(); ++j)
		{
			if (target - nums[i] == nums[j] && i!=j)
			{
				cout << nums[i] << nums[j] << endl;
				result.push_back(i);
				result.push_back(j);
				break;
			}
			else
			{
				continue;
				result.push_back(-1);
			}
		}
	}
	return result;
}
void main()
{
	vector <int>nums{ 3,3 };
	int target = 6;
	twoSum(nums, target);
}
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int,int>m;
    for(auto i:nums) m[i]++;
    return min(m.size(), nums.size()/2);
}
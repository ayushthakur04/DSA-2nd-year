class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char>mp;
        for(char a:jewels)
        {
            mp.insert(a);
        }
        int count=0;
        for(char i:stones)
        {
            if(mp.find(i)!=mp.end())
            {
                count++;
            }
        }
        return count;
    }
};

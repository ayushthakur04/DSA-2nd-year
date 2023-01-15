int Solution::solve(string A) 
{
    unordered_map<char,int>mp;
    for(char  a:A )
    {
       mp[a]++;
    }
    int odd=0;
    for(auto a:mp )
    {
        if(a.second%2==1)
        odd++;
           
    }
    if(odd>1){
        return 0;
    }
    else
    {
        return 1;
    }
}

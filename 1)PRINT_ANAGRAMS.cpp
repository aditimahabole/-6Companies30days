//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#
string get_key(string &s)
{
	bool already[26] = { false };
	for (int i = 0; i < s.length(); i++)
	{
	    already[s[i] - 'a'] = true ;
	}

	string key = "";
	for (int i=0; i< 26; i++)
	{
	    if (already[i])
	    {
	      key = key + (char)('a'+i);
	    }

	}

	return key;
}
    vector<vector<string>> Anagrams(vector<string>& string_list)
    {
        unordered_map<string,vector<int>> momo;
        vector<vector<string>>v;
        vector<string>v2;
        for(int i=0;i<string_list.size();i++)
        {
            string key=get_key(string_list[i]);
            momo[key].push_back(i);
        }
        int k=0;
        for(auto i=momo.begin(); i!=momo.end() ;i++)
        {
            for(auto j=(*i).second.begin();j!=(*i).second.end();j++)
            {
                v2.push_back(string_list[*j]);
            }
           v.push_back(v2);
        }
        return v;
    }

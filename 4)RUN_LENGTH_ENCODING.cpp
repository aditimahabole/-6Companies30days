//HERE I USED MAP 

string encode(string src)
{     
    int n=src.length();
    unordered_map<char,int>count;
    count[src[0]]=1;
    string ans="";
    int i;
  for( i=1;i<=n;i++)
  {
      if(count.find(src[i])==count.end())
      {
          ans=ans+src[i - 1]+to_string(count[src[i - 1]]);
          count.erase(src[i-1]);
      }
      
          count[src[i]]++;
  }  
  
  return ans;
}

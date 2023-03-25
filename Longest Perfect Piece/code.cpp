class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        int start = 0,end = 0,ans=0;
        
        multiset <int> ms;
        while (end<N)
        {
            ms.insert(arr[end++]);
            
            while (abs(*ms.begin()-*--ms.end())>1)
            {
                ms.erase(ms.find(arr[start++]));
            }
            ans=max(ans,(int)ms.size());
        }
        return ans;
    }
};

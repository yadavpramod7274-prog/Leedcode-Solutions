class Solution {
public:
    int calPoints(vector<string>& arr) {
       vector<int>score;
       for(int i=0;i<arr.size();i++){
        if(arr[i]=="C"){
            score.pop_back();
        }
        else if(arr[i]=="D"){
            score.push_back( score.back()*2);
        }
        else if(arr[i]=="+"){
            int n=score.size();
             score.push_back(score[n-1]+score[n-2]);
        }
        else score.push_back(stoi(arr[i]));
       }
       int ans=0;
       for(int i=0;i<score.size();i++){
         ans+=score[i];
       }
       return ans; 
    }
};
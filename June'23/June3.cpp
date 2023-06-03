class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        for(int i = N1-2; i >= 0; --i) S1[i]+=S1[i+1];
        for(int i = N2-2; i >= 0; --i) S2[i]+=S2[i+1];
        for(int i = N3-2; i >= 0; --i) S3[i]+=S3[i+1];
        S1.push_back(0);
        S2.push_back(0);
        S3.push_back(0);
        int i = 0, j = 0, k = 0;
        while(!(S1[i]==S2[j] && S2[j]==S3[k])) {
            if(S1[i]>=S2[j] && S1[i]>=S3[k]) ++i;
            else if(S2[j]>=S1[i] && S2[j]>=S3[k]) ++j;
            else if(S3[k]>=S2[j] && S3[k]>=S1[i]) ++k;
        }
        return S1[i];
    }
};
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res; 
    int len1 = strings.size();
    int len2 = queries.size();
    for(int i=0; i<len2; i++){
        int ctr =0;
        for(int j=0; j<len1; j++){
            if(strings[j]==queries[i])  ctr++; 
        }
        res.push_back(ctr);
    }
    return res;
}

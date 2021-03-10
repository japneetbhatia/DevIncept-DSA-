vector<int> reverseArray(vector<int> a) {
    int n = a.size();
    int temp;
    for(int i=0,j=n-1; i < j; i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
 return a;
}

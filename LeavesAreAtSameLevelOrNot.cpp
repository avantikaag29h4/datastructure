void fun(Node* root,int h,vector<int>&arr){
    if(root!=NULL){
        if(root->left==NULL&&root->right==NULL)
        arr.push_back(h);
        fun(root->left,h+1,arr);
        fun(root->right,h+1,arr);
    }
}
bool check(Node *root) {
    vector<int>arr;
    int h=1;
    fun(root,h,arr);
    int n=arr.size();
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<endl;
        if(i+1<n&&arr[i]!=arr[i+1])
        return false;
    }
    return true;
}
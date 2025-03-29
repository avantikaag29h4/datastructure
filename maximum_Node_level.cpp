int maxNodeLevel(Node *root) {
    map<int,int>mp;
    int maxw=0;
    int level=0;
    queue<Node*>q;
    q.push(root);
    int size;
    while(!q.empty()){
         size=q.size();
        for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        maxw=max(size,maxw);
        mp.insert({maxw,level});
        level++;
    }
     auto maxElement=mp.rbegin();
     return maxElement->second;
}

int getMaxWidth(Node* root) {
    if(root==NULL)
    return 0;
    int size,prev=0,max=0;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        size=q.size();
        if(prev>size)
        max=prev;
        else
        max=size;
        for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        prev=size;
    }
    return max;
}
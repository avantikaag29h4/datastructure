bool equal(queue<Node*>q1,queue<Node*>q2){
    while(!q1.empty()||!q2.empty()){
        Node* temp1=q1.front();
        Node* temp2=q2.front();
        if(temp1->data!=temp2->data){
            // cout<<temp1->data<<"d"<<endl;
            // cout<<temp2->data<<"d"<<endl;
        return false;
        }
        q1.pop();
        q2.pop();
    }
    return true;
}
bool isIdentical(Node *r1, Node *r2) {
    queue<Node*>q1;
    queue<Node*>q2;
    q1.push(r1);
    q2.push(r2);
    while(!q1.empty()||!q2.empty()){
        // cout<<"dagka"<<endl;
        int n1=q1.size();
        int n2=q2.size();
        int x=equal(q1,q2);
        // cout<<x<<endl;
        if(x==0)
        return false;
        // cout<<"asroie"<<endl;
        for(int i=0;i<n1;i++){
            Node* temp1=q1.front();
            q1.pop();
            if(temp1->left!=NULL)
            q1.push(temp1->left);
            if(temp1->right!=NULL)
            q1.push(temp1->right);
        }
        for(int j=0;j<n2;j++){
            Node* temp2=q2.front();
            q2.pop();
            if(temp2->left!=NULL)
            q2.push(temp2->left);
            if(temp2->right!=NULL)
            q2.push(temp2->right);
        }
    }
    return true;
}
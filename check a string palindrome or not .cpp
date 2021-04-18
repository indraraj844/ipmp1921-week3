    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        string data;
        node* next;
    };
  void push(struct node** root,string data)
  {
      node* temp=new node();
      temp->data=data;
      temp->next=(*root);

      (*root)=temp;
  }
    void print_list(node* root)
    {
        if(!root)
        {
            cout<<" no element ";
            return;
        }
        struct node* temp=root;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool isPallindrome(node*a)
    {
        
    }
    
    int main()
    {
    node* a = NULL; 
    push(&a, "r"); 
    push(&a, "ada"); 
    push(&a, "r"); 
    print_list(a);
    if(isPallindrome(a))
    cout<<" this is a pallindrome string";
    else
     cout<<" not pallindrome";
    
    return 0;
    } 
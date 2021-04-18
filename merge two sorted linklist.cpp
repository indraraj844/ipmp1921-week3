    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        int data;
        node* next;
    };
  void push(struct node** root,int data)
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
    }
    
    node* SortedMerge(node* a,node* b)
    {
        if(!a)return b;
        else if(!b)return a;
        else
        {
            node* res;
            if(a->data<=b->data)
            {
                res=a;
            res->next=SortedMerge(a->next,b);
            }
            else
           {
                res=b;
            res->next=SortedMerge(a,b->next);
           }
           return res;
        }
    }
    int main()
    {
    node* res = NULL; 
    node* a = NULL; 
    node* b = NULL; 

    push(&a, 15); 
    push(&a, 10); 
    push(&a, 5); 
  
    push(&b, 20); 
    push(&b, 3); 
    push(&b, 2); 
    res = SortedMerge(a, b); 
  
    cout << "Merged Linked List is: \n"; 
    print_list(res); 
    return 0;
    }
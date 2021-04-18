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
->for a char linklist
M1 using stack
    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        char data;
        node* next;
    };
  void push(struct node** root,char data)
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
    bool isPallindrome(struct node** a)
    {
        if(!(*a))return true;
        
        stack<char>s;
        node* temp =(*a);
        while(temp)
        {
            s.push(temp->data);
            temp=temp->next;
        }
        temp=(*a);
        while(temp)
        {
            if(temp->data!=s.top())
            {
                cout<<temp->data<<" "<<s.top()<<endl;
                return false;
            }
            s.pop();
            temp=temp->next;
        }
        return true;

        
    }
    
    int main()
    {
    node* a = NULL; 
    push(&a, 'r'); 
    push(&a, 'a'); 
    push(&a, 'd'); 
    push(&a, 'a'); 
    push(&a, 'r'); 
    if(isPallindrome(&a))
    cout<<" this is a pallindrome string";
    else
     cout<<" not pallindrome";
    
    return 0;
    } 
 M2:
by reverse last half and compare
    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        char data;
        node* next;
    };
  void push(struct node** root,char data)
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
    int length(struct node* root)
    {
        node* temp=root;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    bool isPallindrome(struct node* root)
    {
        if(!(root))return true;
        
        node* slow=root;
        node* fast=root;
        while(fast&&fast->next)
         {
             slow=slow->next;
             fast=fast->next->next;
         }
             node* curr;
             int l=length(root);
         if(l%2==0)
         {
             curr=slow;
         }
         else 
           curr=slow->next;
       
        node* next=NULL;
        node* prev=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

      node* temp2=prev;
      node* temp1=root;

      while(temp2)
      {
          if(temp1->data!=temp2->data)
          return false;
          temp1=temp1->next;
          temp2=temp2->next;
      }
      return true;
    }
    
    int main()
    {
    node* a = NULL; 
    push(&a, 'r'); 
    push(&a, 'a'); 
    push(&a, 'd'); 
    push(&a, 'a'); 
    push(&a, 'r'); 
    if(isPallindrome(a))
    cout<<" this is a pallindrome string";
    else
     cout<<" not pallindrome";
    
    return 0;
    } 
thank you


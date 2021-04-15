    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        int data;
        node* next;
        node* prev;
    };
    struct node* root=NULL;

    void insert_at_begin(int item)
    {
      struct node* ptr=new node();
          if(root==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       root=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = root;  
       root->prev=root;  
       root=ptr;  
   }  
    
    }

    void insert_at_last(int data)
    {
         node* new_node=new node();
            new_node->data=data;
            new_node->next=NULL;
            new_node->prev=NULL;
            
            if(root==NULL)
            root=new_node;
            else
            {
                node* temp=root;
                while(temp->next)
                {
                    temp=temp->next;
                }
                temp->next=new_node;
                new_node->prev=temp;
            }
    }
    void insert_at_pos(int data,int pos)
    {
         node* new_node=new node();
            new_node->data=data;
            new_node->next=NULL;
            if(!root&&pos>0)
            {
                cout<<" insertation is not possible";
                return;
            }
            else if(!root&&!pos)
            root=new_node;
            else if(root&&!pos)
            {
                new_node->next=root;
                root=new_node;
            }
            else
            {
                node* temp=root;
                for(int i=1;i<pos-1;i++)
                    temp=temp->next;
                
                if(temp->next)
                  {
                      temp->next->prev=new_node;
                    new_node->next=temp->next;
                  } 
                 
                temp->next=new_node;

            }

    }
    void delete_begin()
    {
        if(!root)return;
        else
        {
            node* temp=root;
             temp->next->prev=NULL;
            root=root->next;
            temp->next=NULL;
            free(temp);
        }

    }
    void delete_end()
    {
        if(!root)return;
        else if(!root->next)
        {
            root=NULL;
            return;
        }
        else
        {
            node* temp=root;
            while(temp->next->next)
             temp=temp->next;
            
            node* last=temp->next;
            temp->next=NULL;
            free(last);
        }
    }
    void delete_random(node* prev)
    {
        if(!root ||!prev||!root->next)return;
        else
        {
            node* temp=prev->next;
            temp->next->prev=prev;
            prev->next=temp->next;
            free(temp);
        }

    }
   
   void print_list()
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
    int main()
    {
    insert_at_begin(3);
    insert_at_begin(4);
    insert_at_begin(5);
    insert_at_last(6);
    insert_at_last(7);
    insert_at_pos(8,2);
    print_list();
    cout<<endl;
    delete_begin();
    delete_end();
    delete_random(root->next);
    print_list();

    return 0;
    }
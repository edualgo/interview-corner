#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
};

class helper
{
public:
    int length(Node* head)
    {
        Node* temp = head;
        int count = 0;
        while(temp != NULL)
        {
            temp = temp -> next;
            count++;
        }
        return count;
    }
    void print_ll(Node* head)
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }
    Node* take_input()
    {
        int data;
        cin >> data;
        Node* head = nullptr;
        Node* tail = nullptr;
        while(data != -1)
        {
            Node* n = new Node(data);
            if(head==nullptr)
            {
                head = n;
                tail = n;
            }
            else
            {
                tail -> next = n;
                tail = tail -> next;
            }
            cin >> data;
        }
        return head;
    }

};

class solution
{
public:
     Node* reverse_linked_recursive(Node* head)
     {
         if(head == nullptr || head -> next == nullptr)
         {
             return head;
         }
         Node* small_head = reverse_linked_recursive(head -> next);
         head -> next = nullptr;
         Node* temp = small_head;
         while(temp -> next != nullptr)
         {
            temp = temp -> next;
         }
         temp -> next = head;
         head = small_head;
         return head;
     }

     Node* reverse_linked_iterative(Node* head)
     {
         if(head == nullptr || head -> next == nullptr)
         {
             return head;
         }
         Node* prev = nullptr, *temp, *curr = head;
         while(curr)
         {
             temp = curr -> next;
             curr -> next = prev;
             prev = curr;
             curr = temp;
         }
         return prev;
     }
};


int main()
{
    helper help_object;
    solution sol;
    Node* head = help_object.take_input();
    Node* head2 = sol.reverse_linked_recursive(head);
    Node* head3 = sol.reverse_linked_iterative(head);
    help_object.print_ll(head2);
    help_object.print_ll(head3);
    return 0;
}

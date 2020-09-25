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
     Node* deleteDuplicates(Node* head)
     {
         if(head == nullptr || head -> next == nullptr)
         {
             return head;
         }
         Node* small_head = deleteDuplicates(head -> next);
         while(small_head != nullptr && head -> data == small_head -> data)
         {
             cout << small_head -> data << endl;
             Node* temp = small_head;
             small_head = small_head -> next;
             temp -> next = nullptr;
         }
         head -> next = small_head;
         return head;
     }
};


int main()
{
    helper help_object;
    solution sol;
    Node* head = help_object.take_input();
    Node* head2 = sol.deleteDuplicates(head);
    help_object.print_ll(head2);
    return 0;
}

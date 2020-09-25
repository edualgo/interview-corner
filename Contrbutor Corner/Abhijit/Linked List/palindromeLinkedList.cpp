#include<bits/stdc++.h>
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
    bool is_palindrome(Node* head)
    {
        /// getting a stack and filling it up
        stack<int> level;
        Node* temp = head;
        while(temp != nullptr)
        {
            level.push(temp -> data);
            temp = temp -> next;
        }
        
        /// checking the top element of the stack with temp -> data
        temp = head;
        while(temp)
        {
            if(level.top() != temp -> data)
            {
                return false;
            }
            else
            {
                level.pop();
                temp = temp -> next;
            }
        }
        return true;
    }

    bool is_palindrome_optimized(Node* head)
    {
        /// getting the length
        int length = 0;
        Node* temp = head;
        while(head != nullptr)
        {
            length++;
            head = head -> next;
        }
        head = temp;
        if(length <= 1)
        {
            return true;
        }
        
        /// Reversing half of the list
        int count = 0;
        Node* head2 = head;
        Node* prev = nullptr;
        while(count < length/2)
        {
            Node* tem = head2 -> next;
            head2 -> next = prev;
            prev = head2;
            head2 = tem;
            count++;
        }
        head = head2;
        head2 = prev;
        
        /// Checking the palindrome criteria with half reversed list
        if(length %2 == 1)
        {
            head = head -> next;}
            while(head2 != nullptr && head != nullptr)
            {
                if(head2 -> data != head -> data)
                {
                    return false;
                }
                head = head -> next;
                head2 = head2 -> next;
            }
            return true;
     }
};


int main()
{
    helper help_object;
    solution sol;
    Node* head = help_object.take_input();
    cout << sol.is_palindrome(head) << endl;
    cout << sol.is_palindrome_optimized(head) << endl;
}

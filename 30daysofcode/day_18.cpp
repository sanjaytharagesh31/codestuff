#include <iostream>

using namespace std;

class Solution {
    
    struct stack{
        char c;
        stack *next;
    } *top1, *temp1;
    
    struct queue{
        char c;
        queue *next;
    } *top2, *rear, *temp2;
    
    public:
    Solution(){
        top1=NULL;
        top2=NULL;
        rear=NULL;
    }
    void pushCharacter(char ch){
        temp1 = new stack;
        temp1->c=ch;
        if(top1==NULL){
            top1=temp1;
            temp1->next=NULL;
        }
        else{
            temp1->next=top1;
            top1=temp1;
        }
    }
    void enqueueCharacter(char ch){
        temp2 = new queue;
        temp2->c=ch;
        if(top2==NULL){
            top2=temp2;
            rear=temp2;
            temp2->next=NULL;
        }
        else{
            rear->next=temp2;
            rear=temp2;
            temp2->next=NULL;
        }
    }
    char popCharacter(){
        temp1=top1;
        top1=top1->next;
        return temp1->c;
    }
    char dequeueCharacter(){
        temp2=top2;
        top2=top2->next;
        return temp2->c;
    }
    

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}

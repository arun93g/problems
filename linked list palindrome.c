/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int count(struct ListNode *temp)
{
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    return count;

}


bool isPalindrome(struct ListNode* head){

    int num=count(head);
    int j=num/2,i=0;

    int *n;
    n=malloc(j*sizeof(int));
    struct ListNode* temp;
    temp=head;

    while(j--)
    {
        n[i++]=temp->val;
        temp=temp->next;
    }

    if(num%2!=0)
    temp=temp->next;

    while(temp!=NULL)
    {
        i--;
        if(temp->val!=n[i])
        return false;
        temp=temp->next;
    }
    free(n);
    return true;




}

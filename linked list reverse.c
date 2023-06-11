/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 int count(struct ListNode* temp)
 {
     int num=0;
     while(temp!=NULL)
     {
         num++;
         temp=temp->next;

     }
     return num;

 }
struct ListNode* reverseList(struct ListNode* head){

    int n=count(head);
    int *p,i=0;
    p=(int*)malloc(n*sizeof(int));

    struct ListNode* temp;
    temp=head;

    while(temp!=NULL)
    {
        p[i++]=temp->val;
        temp=temp->next;
    }
    temp=head;
    for(int j=n-1;j>=0;j--)
    {
      temp->val=p[j];
      temp=temp->next;

    }

    return head;


}

//Program for Polynomial Multiplication using linked list
#include "1poly.h"
Node *multi(Node*list1,Node*list2)
{
    Node*result=NULL;
    for(Node *l1=list1;l1!=NULL;l1=l1->next){
        for(Node *l2=list2;l2!=NULL;l2=l2->next){
            int pow=l1->pow+l2->pow;
            int coe=l1->coe*l2->coe;
            insert_last(&result,coe,pow);
        }

    }
    Node *current=result;
    while(current!=NULL){
        for(Node *p=current;p->next!=NULL;p=p->next){
            if(p->next->pow==current->pow){
                Node *temp=p->next;
                current->coe+=temp->coe;
                 p->next=temp->next;
                 free(temp);
            }
        }
        current=current->next;
    }

    return result;

}
int main(){
    Node * list1=initialize();
    Node *list2=initialize();
    Node *result=initialize();
    insert_last(&list1,2,5);
    insert_last(&list1,4,4);
    insert_last(&list2,10,2);
    insert_last(&list2,25,1);


    printf("\nThe 1 polynomial is\n");
    show(list1);
    printf("\nThe 2 polynomial is \n");
    show(list2);
    printf("\nThe multiplication of two polynomial is\n");
    result=multi(list1,list2);
    show(result);
return 0;
}

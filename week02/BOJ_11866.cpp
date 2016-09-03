#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

vector<int> output;

typedef struct _node {
    //singly linked list

    int index;  //1, 2, 3, ...
    struct _node *next;
}node;

typedef node* nptr;

typedef struct _list {

    int count;
    nptr head;
}list;

void init (list* lptr);
void insert (list* lptr, int value, int position);
void deleteNode (list* lptr, int position);
int search (list* lptr, int value);
void modify (list* lptr, int value, int position);
void printList (list* lptr);

void init (list* lptr) {
    //init list
    lptr->count = 0;
    lptr->head = NULL;
}

void insert (list* lptr, int value, int position) {
    
    // boundary check
    if(position < 1 || position > (lptr->count)+1){
        printf("Out of bound\n");
        return;
    }

    nptr new_nptr = new node;
    new_nptr->index = value;

    if(position == 1){
        new_nptr->next = lptr->head;
        lptr->head = new_nptr;
    }
    else{
        nptr tmp = lptr->head;
        for(int i=1 ; i<position-1 ; i++)
            tmp = tmp->next;

        new_nptr->next = tmp->next;
        tmp->next = new_nptr;
    }
    lptr->count++;
}

void deleteNode (list* lptr, int position) {

    // boundary check
    if(position < 1 || position > (lptr->count)+1){
        printf("Out of bound\n");
        return;
    }

    nptr tmp = lptr->head;
    
    int printIndex;

    if(position == 1){
        lptr->head = tmp->next;
        printIndex = tmp->index;
        delete(tmp);
    }
    else{
        for(int i=1 ; i<position-1 ; i++)
            tmp = tmp->next;

        nptr deletenptr = tmp->next;
        tmp->next = deletenptr->next;
        printIndex = deletenptr->index;
        delete(deletenptr);
    }
    output.push_back(printIndex);
//    printf("[%d]", printIndex);
    lptr->count--;
}

void josephus (int n, int m) {

    // n 명의 list 만들어양
    list* mylist = new list();
    init(mylist);

    for(int i=1 ; i<=n ; i++)
        insert(mylist, i, i);


/*
    printf("?!\n");
    nptr tmp2 = mylist->head;
    for(int i=0 ; i<mylist->count ; i++){
        printf("[%d]", tmp2->index);
        tmp2 = tmp2->next;
    }
*/

    int idx = 0;
    nptr tmp;
    while(n) {
//        printf("!");
        for(int i=0 ; i<m ; i++){
            ++idx;
            if(idx > mylist->count)
                idx = 1;
        /*
            if(tmp->next == NULL){
                tmp = mylist->head;
            }
            else if(idx == 1)
                tmp = mylist->head;
            else if(idx > mylist->count){
                idx = 1;
                tmp = mylist->head;
            }
            else
                tmp = tmp->next;
            //왜 자꾸 tmp = tmp->next 에서 error 발생? NULL 가리키면 안됨?
        */
        }
//        printf("idx[%d]", idx);
        deleteNode(mylist, idx--);
        if(idx < 1)
            idx = mylist->count;
        --n;      
    }


    printf("<");
    for(int i=0 ; i<output.size() ; i++){
        printf("%d", output[i]);
        if(i<output.size()-1)
            printf(", ");
    }
    printf(">");

}


int main (void) {

    int N, M;
    scanf("%d %d", &N, &M);

    josephus(N, M);

    return 0;
}

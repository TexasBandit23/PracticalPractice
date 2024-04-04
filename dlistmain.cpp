#include "dlist.h"


int main()
{
    dlist object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    node* head = object.getHead();
    //cout << head->data << endl;
    //cout << head->next->data << endl;
    object.test(head);
    cout << endl;
    object.display();
    
    return 0;
}

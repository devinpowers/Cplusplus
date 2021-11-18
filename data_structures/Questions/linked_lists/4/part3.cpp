Node*& lessThan( Node* const & head, int x){

        if( !head ) throw std::invalid_argument("Empty linked list");

        Node* toBeReturned;
        Node*  currentHeadNode = head;
        Node**  currentReturned = & toBeReturned;

        while( currentHeadNode ){

            if(currentHeadNode -> data < x ){

                *currentReturned = new Node{ currentHeadNode -> data };
                currentReturned = &((*currentReturned) -> next);
            }

            currentHeadNode = currentHeadNode->next;
        }

        return toBeReturned;
}
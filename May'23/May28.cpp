int getNthFromLast(Node *head, int n)
{
       Node* f = head, *s = head;
       for(int i = 1; i < n; ++i) {
           f = f->next;
           if(!f) return -1;
       }
       while(f->next) {
           f = f->next; s = s->next;
       }
       return s->data;
}
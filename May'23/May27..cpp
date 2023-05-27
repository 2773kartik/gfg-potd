class Solution{
    public:
    struct Node* reverse(struct Node* head) {
        Node* prev = NULL, *next = head;
        while(next) {
            Node* temp = next->next;
            next->next = prev;
            prev = next;
            next = temp;
        }
        return prev;
    }
    struct Node* modifyTheList(struct Node *head)
    {
        Node* f = head, *s = head, *o = NULL;
        if(!head || !head->next) return head;
        while(f && f->next) {
            o = s;
            s = s->next;
            f = f->next->next;
        }
        o->next = NULL;
        o = head;
        f = reverse(s);
        Node* l = o, *k = f;
        while(o && f) {
            f->data = (f->data - o->data);
            s = f;
            f = f->next; o = o->next;
        }
        o = reverse(head);
        if(f) f->next = o;
        else s->next = o;
        return k;
    }
};
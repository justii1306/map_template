template <typename key, typename data>

class map_template{
	private:
		struct node{
			key klucz;
			data dane;
			node* next;

			node(): next(NULL) { }
        };

        node* head;

	public:

        map_template(): head(NULL) { }

        map_template (const map_template & l){
            node * p1 = 0; 
            node * p2 = 0; 

            if( l.head == 0 ){
                head = 0;
            }else{
                head = new node;
                head -> klucz = l.head -> klucz;
                head -> dane = l.head -> dane;

                p1 = head;
                p2 = l.head -> next;
            }
            while( p2 ){
                p1 -> next = new node;
                p1 = p1 -> next;
                p1 -> klucz = p2 -> klucz;
                p1 -> dane = p2 -> dane;

                p2 = p2 -> next;
            }
            p1 -> next = 0;
        }

        map_template& operator= (const map_template & l){
            if (&l == this){
                return *this;
            }

            map_template t (l);

            node *k = head;
            head = t.head;
            t.head = k;

            return *this;
        }

        ~map_template(){ 
            while(head){
                node* tmp = head;
                head = head -> next;
                delete tmp;
            }
        }

        void Add(key klucz_nowy, data dane_nowy){
          node* wezel = new node;

            wezel->klucz=klucz_nowy;
            wezel->dane=dane_nowy;

            wezel->next=head;
            head=wezel;  
        }

        data* Find(key klucz_szukaj){
           
            return 0;
        }

        friend std::ostream& operator << (std::ostream& o, const map_template& m){
            for (node* i = m.head; i; i = i->next)
                o << i->klucz << ": " << i->dane << '\n';
            return o;
        }
};

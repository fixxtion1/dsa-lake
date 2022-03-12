# Hashing

Hashing works best when we have to strictly search, insert and delete in O(1)

It is not useful for:

1.  Finding the closest value

2.  Sorted Data

3. Prefix Searching

1 and 2 can be done by use self balancing trees

3 can be done by trie data structure

keys -> Hash Function -> Direct Address Table(Array)

### How Hash funciton work?

-> should always map a large key to same small key

-> should generate values from 0 to m-1

-> should be fast, o(1) for integers and O(len) for strings

-> should unfiormaly distribue large keys in hash table slot



### Collision Handling

If we know keys in advance -> perfect hashing

If we don't know keys in advance:

-> Chaining: We make chain of colliding items

-> Open Addressing: We use same array is position is occupied we try to put value in other slot


#### Chaining:

Hash table is basically an array of linked list header and when collision happens idea is to push back the item to linked list.

Performance:

Load factor(alpha) : How big you want ur hash table to be -> number of keys / number of slots

Expected chain length=  alpha

Expected time to search= O(1+alpha)

Expected time to insert/delete = O(1+alpha)

Data structure used for storing chains:

-> Linked list: all operations are O(l)

-> Dynamic Sized array: same as linked linked, cache friendliness

-> Self Balancing tree: all operations are O(log l), no cache frindliness


Implementation of chaining:

```
struct myHash{
	int BUCKET;
	list<int> *table;
	myHash(int b){
		BUCKET = b;
		table = new list<int>[BUCKET];
	}
	
	void insert(int key){}
	void delete(int key){}
	void search(int key){}
	
	int hash(int key){return key%BUCKET;}
	
};
```



#### Open Addressing

Idea is to use only array to store eveyr key

-> no of slots in hash table >= no of keys to inserted

-> Cache friendly

If collison happens we'll use linear probing(we linearly search for next empty slot)

Searching:




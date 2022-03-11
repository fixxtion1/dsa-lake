#Hashing

Hashing works best when we have to strictly search, insert and delete in O(1)

It is not useful for:

1.  Finding the closest value

2.  Sorted Data

3. Prefix Searching

1 and 2 can be done by use self balancing trees

3 can be done by trie data structure


keys -> Hash Function -> Direct Address Table(Array)

How Hash funciton work?

-> should always map a large key to same small key

-> should generate values from 0 to m-1

-> should be fast, o(1) for integers and O(len) for strings

-> should unfiormaly distribue large keys in hash table slot



Collision Handling

If we know keys in advance -> perfect hashing

If we don't know keys in advance:

-> Chaining: We make chain of colliding items

-> Open Addressing: We use same array is position is occupied we try to put value in other slot


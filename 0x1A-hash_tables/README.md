##0x1A-hash_tables
###hash_tables.h
The prototypes of all your functions should be included in your header file called hash_tables.h
###0-hash_table_create.c 
a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
Returns a pointer to the newly created hash table
###1-djb2.c
a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);
###2-key_index.c
 a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
This function should use the hash_djb2 function that you wrote earlier
Returns the index at which the key/value pair should be stored in the array of the hash table
###3-hash_table_set.c
 a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
Returns: 1 if it succeeded, 0 otherwise
###4-hash_table_get.c
a function that retrieves a value associated with a key.

Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for


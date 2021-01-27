#include <iostream>
#include <string>

const int SIZE = 15;

class hashMap
{
private:
	std::string value;

public:
	hashMap(std::string value) 
	{
		this->value = value;
	}
};

class hashTable {
private:
	hashMap** Table; // pointer to pointer this can only be initialized to pointer 
public:
	hashTable() {
		Table = new hashMap*[SIZE];
		for (unsigned i = 0; i < SIZE; i++)
		{
			Table[i] = NULL;
		}
	}

	int hashFunc(std::string value) { // giving a value a key 
		int key = 0;
		for (unsigned i = 0; i < value.size(); i++)
		{
			key += value[i];
		}

		return key & SIZE;
	}

	void insert(std::string value) { // inserting value to table index 
		int key = hashFunc(value);

		for (unsigned i = 0; i < SIZE; i++)
		{
			if (Table[i] == NULL)
			{
				//IF THE ITS NULL THEN INSERT.
				Table[key] = new hashMap(value);
			}
		}
	}

	hashMap* search(std::string value) {
		int key = hashFunc(value);

		if (!Table[key])
		{
			return NULL;
		}
		else
		{
			return Table[key];
		}
	}

	void remove(std::string value) {
		int key = hashFunc(value);

		if (!Table[key])
		{
			std::cout << "element is not found\n";
		}
		else
		{
			Table[key] = NULL;
			std::cout << "element : " << value << " ereased \n";
		}
	}
};


int main() {
	hashTable hash;
	hash.insert("one");
	std::cout << hash.search("one") << std::endl;

	hash.remove("one");

	std::cout << hash.search("one") << std::endl;
	

}
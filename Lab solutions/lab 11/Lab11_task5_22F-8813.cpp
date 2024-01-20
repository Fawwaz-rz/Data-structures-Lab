//#include<iostream>
//#include<list>
//#include<assert.h>
//#include<fstream>
//#include<string>
//using namespace std;
//template<class v >
//class HashItem
//{
//public:
//	int key;
//	v value;
//	short status;
//	list<v> ll; 
//	HashItem() : key(0), value(v()), status(0) 
//	{
//		
//	}
//};
//template<class v>
//class HashMap
//{
//public:
//	float loadfactor = 0.75;
//	HashItem<v> *hashArray;
//	int capacity;
//	int currentElements;
//	int getNextCandidateIndex(int key, int i)
//	{
//		int index = 0;
//		index = (key+i) % capacity;
//		return index;
//	}
//	HashMap() {
//		capacity = 10; 
//		currentElements = 0;
//		hashArray = new HashItem<v>[capacity];
//	}
//	HashMap(int const capacity)
//	{
//		assert(capacity > 1);
//
//		if (capacity >= 1)
//		{
//			this->capacity = capacity; 
//			hashArray = new HashItem<v>[capacity];
//		}
//		else
//		{
//			cout << "wrong capacity input\n";
//		}
//	}
//	void insert(int  key, v  value)
//	{
//		// int index = key % capacity;
//		int index = 0;
//		int i = 1; 
//		while (hashArray[index].status == 2)
//		{
//			index = getNextCandidateIndex(key, i); 
//			i++;
//		}
//		hashArray[index].key = key;
//		hashArray[index].value = value;
//		hashArray[index].status = 2;
//		currentElements++;
//		cout << value << " : inserted\n";
//	}
//	void doublecap()
//	{
//		int tempcapacity = capacity;
//		capacity = capacity * 2;
//		HashItem<v>* tempArray = hashArray;
//		hashArray = new HashItem<v>[capacity];
//		currentElements = 0;
//		int i = 0;
//		while (i < tempcapacity)
//		{
//			if (tempArray[i].status == 2)
//			{
//				insert(tempArray[i].key, tempArray[i].value);
//			}
//			i++;
//		}
//		cout << "capacity doubled\n";
//		delete[] tempArray;
//	}
//	bool deleteKey(int key)
//	{
//		int i = 0;
//while(i < capacity)
//		{
//			int index = getNextCandidateIndex(key, i);
//			if (hashArray[index].status == 0) {
//				cout << key << " : not found\n";
//				return false;
//			}
//			if (hashArray[index].status == 2 && hashArray[index].key == key) {
//				//hashArray[index].key = 0;
//				cout <<key <<" : key deleted\n";
//				hashArray[index].status = 1; 
//				return true;
//			}
//			i++;
//		}
//cout << key << " : not found\n";
//		return false;
//	}
//	v* get(int key)
//	{
//		int i = 0;
//		while (i < capacity)
//		{
//			int index = getNextCandidateIndex(key, i);
//			if (hashArray[index].status == 0)
//			{
//				cout << key << " : not found to return ptr\n";
//				return nullptr;
//			}
//			if (hashArray[index].status == 2 && hashArray[index].key == key)
//			{
//				cout << key << " : pointer returned\n";
//				return &(hashArray[index].value);
//			}
//			i++;
//		}
//		cout << key << " : not found to return ptr\n";
//		return nullptr;
//	}
//	~HashMap()
//	{
//		delete[] hashArray;
//	}
//	void populateHash(const string filename, HashMap<string> *hash) {
//		ifstream file;
//		file.open(filename);
//		if (file.is_open())
//		{
//			string line;
//			while (!file.eof())
//			{
//				 getline(file, line);
//				 cout << line;
//				string key, value;
//				int pos = line.find(',');
//				if (pos != string::npos) {
//					key = line.substr(0, pos);
//					value = line.substr(pos + 1);
//					hash->insert(stoi(key), value);
//				}
//			}
//			file.close();
//		}
//	
//	}
//
//
//};
//int main()
//{
//	HashMap<string> obj;
//	HashMap<string>* obj1 = new HashMap<string>(); 
//
//	obj.populateHash("data.txt", obj1);
//
//	delete obj1;
//}
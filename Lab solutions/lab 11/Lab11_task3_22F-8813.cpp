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
//	HashItem<v>* hashArray;
//	int capacity;
//	int currentElements;
//	virtual int getNextCandidateIndex(int key, int i)
//	{
//		int index = 0;
//		index = (key + i) % capacity;
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
//	void insert(int const key, v const value)
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
//		while (i < capacity)
//		{
//			int index = getNextCandidateIndex(key, i);
//			if (hashArray[index].status == 0) {
//				cout << key << " : not found\n";
//				return false;
//			}
//			if (hashArray[index].status == 2 && hashArray[index].key == key) {
//				//hashArray[index].key = 0;
//				cout << key << " : key deleted\n";
//				hashArray[index].status = 1;
//				return true;
//			}
//			i++;
//		}
//		cout << key << " : not found\n";
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
//	
//};
//template <class v>
//class Dhashmap :public HashMap<v>
//{
//public:
//	int getNextCandidateIndex(int key, int i)
//	{
//		int secondvalue,firstvalue,index;
//		secondvalue = (7 - (key % 7));
//		firstvalue = key % this->capacity;
//		index = (firstvalue + i * secondvalue) % this->capacity;
//		return index;
//	}
//	void populateHash(const string filename,HashMap<string>* hash) {
//		ifstream file;
//		file.open(filename);
//		if (file.is_open())
//		{
//			string line;
//			while (!file.eof())
//			{
//				getline(file, line);
//				cout << line;
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
//};
//int main()
//{
//	HashMap<string> *map;
//	Dhashmap<int> obj;
//	map = new Dhashmap<string>;
//	obj.populateHash("data.txt ", map);
//	cout << *map->get(11);
//	map->deleteKey(1);
//	assert(map->get(1) == nullptr);
//	delete map;
//	/*obj.insert(5, 1);
//	obj.insert(3, 2);
//	obj.insert(10, 3);
//	obj.insert(7, 4);
//	obj.deleteKey(10);
//	obj.deleteKey(8);
//	obj.get(10);
//	obj.get(7);*/
//}
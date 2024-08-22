#include <stdio.h>
#include <iostream>
#include <vector>


class Node{

    public:
        std::string key;
        int value;
        Node* next;

    Node(std::string key, int value)
    {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class HashTable
{
    private:
        static const int SIZE = 7 ; //prime number size hashtable has fewer collisions!
        Node* dataMap[SIZE];

    public:
        void printTable()
        {
            for (int i = 0; i < SIZE; i++)
            {
                std::cout << i << ":" <<std::endl;
                if(dataMap[i])
                {
                    Node* temp = dataMap[i];
                    while(temp)
                    {
                        std::cout << "  {" << temp->key <<", " << temp->value <<"}"<<std::endl;
                        temp = temp->next;
                    }
                }
            }
        }

        // O(1)
        int hash(std::string key)
        {
            int hash = 0;
            for (int i=0 ; i < key.length() ; i++)
            {
               int asciiValue = int(key[i]);
               hash = (hash + asciiValue * 23) % SIZE;
            }
            return hash;
        }

    
        void set(std::string key, int value)
        {
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if(dataMap[index] == nullptr)
            {
                dataMap[index] = newNode;
            }
            else
            {
                Node* temp = dataMap[index];
                while(temp->next != nullptr)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }


        int get(std::string key)
        {
            int index = hash(key);
            Node* temp = dataMap[index];
            while(temp != nullptr)
            {
                if(temp->key == key) return temp->value;
                temp = temp->next;
            } 
            return 0;
        }
        
        std::vector<std::string> keys()
        {
            std::vector<std::string> allKeys;
            for(int i = 0 ; i< SIZE;i++)
            {
                Node* temp = dataMap[i];
                while(temp != nullptr )
                {
                    allKeys.push_back(temp->key);
                    temp= temp->next;
                }
            }
            return allKeys;
        }

};


int main()
{

    HashTable* myTable = new HashTable();
    
    myTable->set("nails",100);
    myTable->set("tile",50);
    myTable->set("lumber",80);
    myTable->set("bolts",200);
    myTable->set("screws",140);

    myTable->printTable();

    std::cout << "Lumber: " << myTable->get("lumber") <<std::endl;
    std::cout << "Tile: " << myTable->get("tile") <<std::endl;
    std::cout << "Mokoko: " << myTable->get("mokoko") <<std::endl;

    std::vector<std::string> myKeys = myTable->keys();

    for(auto key : myKeys)
    {
        std::cout << key << " ";
    }

}

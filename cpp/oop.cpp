#include <iostream>
#include <list>

using namespace std;

class inventory
{
public:
    string name;
    string location;
    int id;
    string maintaner;
    list<string> item;
};

/* class Item */

int main(void)
{
    inventory groceries;
    groceries.name = "grocerries";
    groceries.location = "store";
    groceries.maintaner = "aryan singh";
    groceries.id = 00;
    groceries.item = {"tomato", "potato", "eggs", "letuce", "apple", "orages"};

    inventory games;
    games.name = "games";
    games.location = "house";
    games.maintaner = "anupam singh";
    games.id = 01;
    games.item = {"gta5", "codm", "mordern warfare", "forza horizon"};

    cout << "Name: " << groceries.name << " maintainer:" << groceries.maintaner << " location: " << groceries.location << endl;
}

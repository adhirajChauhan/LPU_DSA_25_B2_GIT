#include<iostream>
using namespace std;

class FoodItem{
    private:
    int id;
    string name;
    float price;
    public:
    FoodItem(int id, string name, float price){
        this->id = id;
        this->name = name;
        this->price = price;
    }

    //getters -> id, price and name
    string getName(){
        return name;
    }

    //display -> id, name and price
};

class Order{
    private:
    vector<FoodItem> items;

    public:
    void addItem(FoodItem &item){
        items.push_back(item);
        cout << item.getName() << "Added to order\n";
    }

    void showOrder(){

    }

    void checkout(){

    }

};

class Menu{
    //available foor items

    void displayMenu(){
        
    }
};
 
int main()
{
 
}
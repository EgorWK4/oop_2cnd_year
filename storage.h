//
// Created by egor on 12.05.20.
//

#ifndef ADAPTERS_STORAGE_H
#define ADAPTERS_STORAGE_H
#include <queue>
#include <stack>
#include <utility>

class Storage
{

    std::stack<Computer> s;
    string location;
    string telephone_number;
public:

    Storage()
    {
        s = std::stack<Computer> ();
        location = string ();
        telephone_number = string();
    }
    explicit Storage( string location = "", string telephone_number = "")
    :  location(std::move(location)), telephone_number(std::move(telephone_number)){}
    [[nodiscard]] string get_location() const
    {
        return location;
    }
    [[nodiscard]] string get_t_number() const
    {
        return telephone_number;
    }
    [[nodiscard]] auto get_entities() const
    {
        return s;
    }
    void show()
    {
        using std::cout;
        using std::endl;
        cout << "Storage location " << location << endl;
        cout << "Telephone number " << telephone_number << endl;
        cout << "Last arrived at the warehouse computer :"<< endl;
        s.top().show();
    }
    void push_elem(const Computer& obj)
    {
        s.push(obj);
    }
    auto get_stack() const
    {
        return s;
    }
};
#endif //ADAPTERS_STORAGE_H

//
// Created by egor on 12.05.20.
//

#ifndef ADAPTERS_COMPUTER_ELEMS_H
#define ADAPTERS_COMPUTER_ELEMS_H
#include <queue>
#include <string>
#include <utility>
#include <vector>
#include <iostream>

using std::string;
enum components{computer_case,power_unit,mother_board,ram,hdd,ssd,gpu,cpu};
struct ComputerElement
{
    static string components_map(components comp)
    {
        std::vector<string> map_of_components
        {"computer case","power unit","mother board","RAM", "HDD","SSD","GPU","CPU"};
        return map_of_components[(int) comp];
    }
    string manuf_name;
    components component_;
    double price;
public:

    explicit ComputerElement(components component,string manuf_name = "", double price = 0)
    : component_(component), manuf_name(std::move(manuf_name)), price(price) {}

    [[nodiscard]] string get_manuf_name() const
    {
        return manuf_name;
    }
    [[nodiscard]] double get_price() const
    {
        return price;
    }
    [[nodiscard]] components get_components() const
    {
        return component_;
    }
    void show() const
    {
        using std::cout;
        using std::endl;
        cout<< "[";
        cout << "Manufacturer organization name : "  << manuf_name << endl;
        cout << "Price : " << price << endl;
        cout << "Component :" << components_map(component_) << "]" << endl;
    }

};

class Computer
{
    std::deque<ComputerElement> v;

public:
    Computer()
    {
        v = std::deque<ComputerElement> ();
    }
    void show() const
    {
        for(const auto& elem : v)
        {
            //std::cout << "Your computer consists of: " << std::endl;
            elem.show();
        }
    }
    void add_elems(const ComputerElement& obj)
    {
        v.push_back(obj);
    }
    void delete_f_elem()
    {
        v.pop_front();
    }
    void delete_l_elem()
    {
        v.pop_front();
    }
    [[nodiscard]] double get_computer_price() const
    {
        double sum = 0;
        for(const auto& elem : v)
        {
            sum+=elem.price;
        }
        return sum;
    }

};
struct Price_Predicate
        {
                bool operator()(Computer& lhs, Computer& rhs) const
        {
            return lhs.get_computer_price() < rhs.get_computer_price();
        }
        };
#endif //ADAPTERS_COMPUTER_ELEMS_H

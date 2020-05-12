#include <utility>

//
// Created by egor on 12.05.20.
//

#ifndef ADAPTERS_USER_H
#define ADAPTERS_USER_H
#include <queue>
class User
{
    std::priority_queue<Computer, std::vector<Computer>, Price_Predicate> comp;
string first_name;
string last_name;
string tel_numb;
double money_ammount;
public:
    User()
    {
        comp = std::priority_queue<Computer,std::vector<Computer>,Price_Predicate> ();
        first_name = string();
        tel_numb = string();
        money_ammount = double();
    }
    User(string first_name,string last_name,double money_ammount)
    : first_name(std::move(first_name)), last_name(std::move(last_name)),money_ammount(money_ammount){}

    void make_order(Storage &obj,const int& index)
    {

        auto temp = obj.get_entities();
        int i = 0;
        while(!temp.empty())
        {
            if(i == index)
            {
                comp.push(temp.top());

            }
            ++i;
            temp.pop();
        }
    }
   void show_user_computer()
    {
        auto temp = comp;
       while(!temp.empty())
       {
           temp.top().show();
           std::cout << std::endl;
           temp.pop();
       }
    }

};
#endif //ADAPTERS_USER_H

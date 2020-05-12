#include <iostream>
#include "computer_elems.h"
#include "storage.h"
#include "user.h"
using std::cout;
using std::endl;

int main()
{

    ComputerElement obj(computer_case,"HyperX",200);
    ComputerElement obj1(power_unit,"Asus",300);
    ComputerElement obj2(mother_board,"Asus",400);
    ComputerElement obj3(ram,"HyperX 2x16",175);
    ComputerElement obj4(hdd,"HyperX 3x1TB",300);
    ComputerElement obj5(ssd,"Samsung 1024GB SSD ",700);
    ComputerElement obj6(gpu,"Radeon ATi RTX 2080",1200);
    ComputerElement obj7(cpu,"Intel i7 - 7700k",600);

    ComputerElement ob(computer_case,"HyperX",100);
    ComputerElement ob1(power_unit,"Asus",100);
    ComputerElement ob2(mother_board,"Asus",100);
    ComputerElement ob3(ram,"HyperX 2x16",100);
    ComputerElement ob4(hdd,"HyperX 3x1TB",300);
    ComputerElement ob5(ssd,"Samsung 1024GB SSD ",700);
    ComputerElement ob6(gpu,"Radeon ATi RTX 2080",1200);
    ComputerElement ob7(cpu,"Intel i7 - 7700k",600);

    Computer computer1;
    computer1.add_elems(ob);
    computer1.add_elems(ob1);
    computer1.add_elems(ob2);
    computer1.add_elems(ob3);
    computer1.add_elems(ob4);
    computer1.add_elems(ob5);
    computer1.add_elems(ob6);
    computer1.add_elems(ob7);

    //computer_case,power_unit,mother_board,ram,hdd,ssd,gpu,cpu
    Computer computer;
    computer.add_elems(obj);
    computer.add_elems(obj1);
    computer.add_elems(obj2);
    computer.add_elems(obj3);
    computer.add_elems(obj4);
    computer.add_elems(obj5);
    computer.add_elems(obj6);
    computer.add_elems(obj7);
    //computer.show();
    Storage storage("Pushkina street","+457654234237");
    storage.push_elem(computer);
    storage.push_elem(computer1);
    User user("Egor","Sviridenko",2500);
    user.make_order(storage,1);
    user.show_user_computer();


}
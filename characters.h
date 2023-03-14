#pragma once
#include <iostream>
#include "../lab6/point.h"
using namespace std;
class Person{
private:
    //friend ostream & operator<<(ostream &,const Arena &);
    //friend Predator;
    //friend class Arena;
    //string name;    Point2D location;
public:
    string name;    Point2D location;    bool npc;
    Person(const string & name,const Point2D & location,bool npc=0): name(name),location(location),npc(npc) {   }
    void MoveTo(int x,int y) { location.setPoint(x,y); }
    bool isnpc(){ return npc; }    void benpc(){ npc=1; }//    void changenpc(bool x){ npc=x; }
    friend ostream & operator<<(ostream & out,const Person & p) {
    out << "Имя - " << p.name << ", координаты - " << p.location << endl;
    return out;
}
    //void AutoMove(const Arena &,int z);
    //friend ostream & operator<<(ostream & out,const Person &);
    //friend bool check(const Prey & Prey,const Predator & predator);
    //friend bool check1(const Prey & Prey,const Predator & predator);
//искать координату: person.location.getx();
};
class Prey: public Person{

};
class Predator: public Person{

};
//void Prey::AutoMove(const Arena & a,int z) {
//    int q;
//    if (z == 1) {
//        q = rand() % 8;
//    }
//    else {
//        cout << "Куда идти?\n0-вверх-влево 1-вверх 2-вверх-вправо 3-влево 4-вправо 5-вниз-влево 6-вниз 7-вниз-вправо" << endl;
//        cin >> q;
//    }
//    switch (q) {
//    case 0:
//        if (location.x != 1 && location.y != 1) {
//            location.x -= 1;
//            location.y -= 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 1:
//        if (location.y != 1) {
//            location.y -= 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 2:
//        if (location.x != a.w && location.y != 1) {
//            location.x += 1;
//            location.y -= 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 3:
//        if (location.x != 1) {
//            location.x -= 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 4:
//        if (location.x != a.w) {
//            location.x += 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 5:
//        if (location.x != 1 && location.y != a.l) {
//            location.x -= 1;
//            location.y += 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 6:
//        if (location.y != a.l) {
//            location.y += 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 7:
//        if (location.x != a.w && location.y != a.l) {
//            location.x += 1;
//            location.y += 1;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    default:
//        break;
//    }
//}
//
//void Predator::AutoMove(const Arena & ar,int z) {
//    int q;
//    int a;
//    if (z == 0) {
//        q = rand() % 4;
//        a = rand() % 5 + 1;
//    }
//    else {
//        int s = 0;
//        cout << "Куда идти?\n0-вверх 1-вправо 2-вниз 3-влево" << endl;
//        cin >> q;
//
//        do {
//            cout << "На сколько? (1-5)" << endl;
//            cin >> a;
//            if (1 <= a && a <= 5) s = 1;
//        } while (s != 1);
//    }
//
//    switch (q) {
//    case 0:
//        if (location.y >= (a)) {
//            location.y -= a;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 1:
//        if (location.x <= (ar.w - a)) {
//            location.x += a;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 2:
//        if (location.y <= (ar.l - a)) {
//            location.y += a;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    case 3:
//        if (location.x >= (a)) {
//            location.x -= a;
//        }
//        else cout << "Выход за пределы" << endl;
//        break;
//    }
//}
//
//bool check(const Prey & prey,const Predator & predator) {
//    if (prey.location.x == predator.location.x && abs(prey.location.y - predator.location.y) <= 5) {
//        return 1;
//    }
//    else if (prey.location.y == predator.location.y && abs(prey.location.x - predator.location.x) <= 5) {
//        return 1;
//    }
//    else return 0;
//}
//bool check1(const Prey & prey,const Predator & predator) {
//    if ((prey.location.x == predator.location.x) && (prey.location.y == predator.location.y)) return 1;
//    else return 0;
//}
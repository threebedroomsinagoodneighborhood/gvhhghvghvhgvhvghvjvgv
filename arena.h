#pragma once
#pragma once
#include <iostream>
#include "../lab6/characters.h"
using namespace std;
class Arena {
    int l,w;
    Prey * prey;
    Predator * predator;
public:
    Arena(int w,int l,Prey * prey,Predator * predator) {
        this->l = l;
        this->w = w;
        this->prey = prey;
        this->predator = predator;
    }
    friend ostream & operator<<(ostream &,const Arena &);
    friend void Prey::AutoMove(const Arena & a,int z);
    friend void Predator::AutoMove(const Arena & ar,int z);


friend ostream & operator<<(ostream & out,const Arena & a) {
    cout << "\033[2J\033[1;1H";
    cout << "   ";
    for (int i = 0; i < a.w; i++) cout << i + 1 << " ";
    cout << "\n  ";
    for (int i = 0; i < a.w + 1; i++) cout << "--";
    cout << "\n";
    for (int i = 0; i < a.l; i++) {
        if ((i + 1) / 10 == 0) cout << i + 1 << " |";
        else cout << i + 1 << "|";
        if (a.prey->location.y == i + 1 && a.predator->location.y == i + 1) {
            if (a.prey->location.x > a.predator->location.x) {
                for (int j = 1; j < a.predator->location.x; j++) {
                    cout << "  ";
                }
                cout << "Õ ";
                for (int j = a.predator->location.x + 1; j < a.prey->location.x; j++) {
                    cout << "  ";
                }
                cout << "Æ ";
                for (int j = a.prey->location.x + 1; j <= a.w; j++) {
                    cout << "  ";
                }
            }
            else if (a.predator->location.x > a.prey->location.x) {
                for (int j = 1; j < a.prey->location.x; j++) {
                    cout << "  ";
                }
                cout << "Æ ";
                for (int j = a.prey->location.x + 1; j < a.predator->location.x; j++) {
                    cout << "  ";
                }
                cout << "Õ ";
                for (int j = a.predator->location.x + 1; j <= a.w; j++) {
                    cout << "  ";
                }
            }
            else if (a.predator->location.x == a.prey->location.x) {
                for (int j = 1; j < a.predator->location.x; j++) cout << "  ";
                cout << "Õ ";
                for (int j = a.predator->location.x; j < a.w; j++) cout << "  ";
            }
        }
        else if (a.prey->location.y == i + 1) {
            for (int j = 1; j < a.prey->location.x; j++) cout << "  ";
            cout << "Æ ";
            for (int j = a.prey->location.x; j < a.w; j++) cout << "  ";
        }
        else if (a.predator->location.y == i + 1) {
            for (int j = 1; j < a.predator->location.x; j++) cout << "  ";
            cout << "Õ ";
            for (int j = a.predator->location.x; j < a.w; j++) cout << "  ";
        }
        else if (a.prey->location.y != i + 1 && a.predator->location.y != i + 1) {
            for (int j = 0; j < a.w; j++) cout << "  ";
        }
        cout << "|\n";
    }
    cout << "  ";
    for (int i = 0; i < a.w + 1; i++) cout << "--";
    cout << "\n";
    return out;
}
};
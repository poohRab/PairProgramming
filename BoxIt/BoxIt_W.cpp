#include <iostream>
using namespace std;

class Box {

public:
    Box(int _l = 0, int _b = 0, int _h = 0): l(_l), b(_b), h(_h) {}
    Box(const Box &box): l(box.l), b(box.b), h(box.h) {}
    bool operator<(const Box &box) {
        if  ((this->l < box.l) ||
            ((this->b < box.b) && (this->l == box.l)) ||
            ((this->h < box.h) && (this->l == box.l) && (this->b == box.l))) {
                return true;
            }
        return false;
    }
    friend ostream& operator<<(ostream& os, const Box &box);
    Box operator+(const Box &box) {
        int ret_l = this->l + box.l;
        int ret_b = this->b + box.b; 
        int ret_h = this->h + box.h;
        Box ret_box(ret_l, ret_b, ret_h);
        return ret_box;
    }
    int getLength() {return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    int setLength(int _l) {l = _l;}
    long long CalculateVolume() {return l*b*h;}
private:
    int l, b, h;
};
ostream& operator<<(ostream& os, const Box &box) {
    os << box.l << " " << box.b << " " << box.h;
    return os;
}
int main() {
    Box one_box(3,4,5), two_box(1,2,3);
    Box three_box = one_box + two_box; 
    Box another_box;
    Box copy_box = one_box;
    cout << one_box.getLength() << endl;
    cout << copy_box.getHeight() << endl;
    cout << another_box.getLength() << endl;
    cout << copy_box << endl;
    cout << three_box << endl;
    cout << (one_box < two_box) << endl;
    if (one_box < two_box) {
        cout << "Wrong!" << endl;
    }
    else{
        cout << "right!" << endl;
    }
}
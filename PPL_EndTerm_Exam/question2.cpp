#include<bits/stdc++.h>
using namespace std;

class Box {
    double l, h, w; 
public:
    
    Box(int length=1,int height=1,int width=1)
    {
        l=length;
        h=height;
        w=width;
    }
    
    Box operator-(const Box& obj)  {
        return Box(l - obj.l, h - obj.h, w - obj.w);
    }

   
    Box operator/(const Box& obj) const {
        return Box(l / obj.l, h / obj.h, w / obj.w);
    }

    
    Box operator+(const Box& obj) const {
        return Box(l + obj.l, h + obj.h, w + obj.w);
    }

    
    Box operator*(const Box& obj) const {
        return Box(l * obj.l, h * obj.h, w * obj.w);
    }

    
    void Display_info() const {
        cout << "Box dimensions: Length = " << l << ", Height = " << h << ", Width = " << w << endl;
    }

    
    double volume()  {
        return l * h * w;
    }
};

int main() {
    
    Box obj1(3, 3, 5), obj2(1, 1, 3), obj3(1, 1, 1), obj4(2, 2, 2), obj5(2, 3, 2);

    
    Box obj6 = obj1 - obj2 / obj3 + obj4 * obj5;

    
    cout << "Displaying Box objects:" << endl;
    obj1.Display_info();
    obj2.Display_info();
    obj3.Display_info();
    obj4.Display_info();
    obj5.Display_info();

    cout << "\nResult of expression for obj6:" << endl;
    obj6.Display_info();
    cout << "Volume of obj6: " << obj6.volume() << endl;

    return 0;
}


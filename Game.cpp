#include <iostream>
#include <vector>

class A{

    public:
    int num;
    A (int a){
        num= a;
        std::cout << "A:" << a << std::endl;}

};
class D{
    public:
    A a1= A(0);
    A a2= A(0);

    D (int a, int b) {//a1(a), a2(2)
        
        a1= A(a);
        a2= A(b);
    }

};
// class B: public A{
//     public:
//
//     B (int a): A(a){}
//     void f(){
//         std::cout << "B" << std::endl;
//     }
// };
// class C: public B{
//     public:
//
//     C (int a): B(a){}
//     void f(){
//         std::cout << "C" << std::endl;
//     }
// };

int main(){

    D d= D(3, 6);
    std::cout << d.a1.num << std::endl;
    std::cout << d.a2.num << std::endl;
    // C c(5);
    // A* p= &c ;
    // p->f();
    // // b.f(5);
    // int x;./try
    // x(5);
    // std::vector<int> vec= {1,2,3};
    // vec= {1,2,3};
    // int vec[3] = {1,2,3};

    // std::cout << vec[0] << std::endl;
    // std::cout << vec[1] << std::endl;
    // std::cout << vec[2] << std::endl;

    return 0;
}
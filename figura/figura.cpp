
#include <iostream>
#include <string> 
class figura {
private:
    int storon = 0;
    std::string Nfigura = "фигура";
public:
    figura(int _storon, std::string _Nfigura) : storon(_storon), Nfigura(_Nfigura) {};
    int get_storon() {
        return storon;
    }
    void print() {
        std::cout << Nfigura << ": " << storon << std::endl;
    }
};

class triangle : public figura {
public:  
    triangle(const int _storon = 3, std::string _Nfigura = "треугольник") : figura(_storon, _Nfigura) {};
  
};


class qadrangle : public figura {
public:
    qadrangle(const int _storon = 4, std::string _Nfigura = "квадрат") : figura(_storon, _Nfigura) {};
   
};

int main()
{
    setlocale(LC_ALL, "rus");
    figura none (0, "фигура");
    triangle tri;
    qadrangle qad;
    none.print();
    tri.print();
    qad.print();
}


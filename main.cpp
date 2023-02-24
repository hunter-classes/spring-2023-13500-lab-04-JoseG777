#include <iostream>
#include <string>
#include "funcs.h"

int main(){
    std::cout<<box(7, 7)<<"\n";

    std::cout<< checkers(7, 7)<<"\n";

    std::cout<< cross(7)<<"\n";

    std::cout<< ltriangle(7) <<"\n";

    std::cout<<"\n";

    std::cout<< utriangle(7) <<"\n";

    std::cout<< trapezoid(10, 5) << "\n";
    std::cout<< trapezoid(5, 10) << "\n";

    std::cout<< checkers1(7, 7) <<"\n";
    std::cout<< checkers1(27, 27) <<"\n";

}
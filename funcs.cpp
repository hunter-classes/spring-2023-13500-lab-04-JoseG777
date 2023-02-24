#include <iostream>
#include <string>
//TASK A
std::string box(int width, int length){
    std::string box1 = " ";
    for(int i = 0; i < length; i++){
        box1 = box1 + "\n";
        for(int j = 0; j < width; j++){
            box1 = box1 + "*";
        }
    }
    return box1;
}
//TASK B
std::string checkers(int width, int length){
    std::string checkers1 = " ";
    for(int i = 0; i < length; i++){
        checkers1 = checkers1 + "\n";
        for(int j = 0; j < width;j++){
            if(i%2==0){
                if(j%2==0){
                    checkers1 = checkers1 + "*";
                }
                else{
                    checkers1 = checkers1 + " ";
                }
            }
            else{
                if(j%2==0){
                    checkers1 = checkers1 + " ";
                }
                else{
                    checkers1 = checkers1 + "*";
                }
            }
            }
        }
        return checkers1;
}

//TASK C
std::string cross(int size){
    std::string cross1 = " ";
    for(int i = 0; i < size; i++){
        cross1 = cross1 + "\n";
        for(int j = 0; j < size; j++){
            if(j == i or i == size - 1 - j){
                cross1 = cross1 + "*";
            }
            else{
                cross1 = cross1 + " ";
            }
        }
    }
    return cross1;
}
//TASK D
std::string ltriangle(int size){
    std::string ltriangle1 = " ";
    for(int i = 0; i < size; i++){
        ltriangle1 = ltriangle1 + "\n";
        for(int j = 0; j < i; j++){
            ltriangle1 = ltriangle1 + "*";
        }
    }
    return ltriangle1;
}
//TASK E
std::string utriangle(int size){
    std::string utriangle1 = " ";
     for(int i = 0; i <= size; ++i){
        for(int b = 0; b <= i; ++b){
        utriangle1 = utriangle1 + " ";
        }
        for(int a = 0; a < size - i; ++a){
        utriangle1 = utriangle1 + "*";
        }
    utriangle1 = utriangle1 + "\n";
  }
  return utriangle1;
}
//TASK F
std::string trapezoid(int width, int length){
    std::string trapezoid1 =" ";
    if(length * 2 > width){
        return "Impossible shape! \n";
    }
    else{
        for(int i = 0; i < length; i++){
            trapezoid1 = trapezoid1 + "\n";
            for(int j = 0; j < width; j++){
                if(j <= i or j > width - i - 1){
                    trapezoid1 = trapezoid1 + " ";
                }
                else{
                    trapezoid1 = trapezoid1 + "*";
                }
            }
        }
    }
    return trapezoid1;
}

//TASK G
std::string checkers1(int width, int length){
    std::string checkers2 = " ";
    for(int i = 0; i < length; i++){
        checkers2 = checkers2 + "\n";
        for(int j = 0; j < width;j++){
            if(i%6<3){
                if(j%6<3){
                    checkers2 = checkers2 + "*";
                }
                else{
                    checkers2 = checkers2 + " ";
                }
            }
            else{
                if(j%6<3){
                    checkers2 = checkers2 + " ";
                }
                else{
                    checkers2 = checkers2 + "*";
                }
            }
            }
        }
        return checkers2;
}
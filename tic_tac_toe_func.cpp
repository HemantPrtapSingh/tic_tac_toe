#include <iostream>
#include "tic_tac_toe.hpp"
extern char square[];
int checkwin(){
    if(square[1]==square[2] && square[2]==square[3]){
        return 1;
    }
    else if(square[4]==square[5] && square[5]==square[6]){
        return 1;
    }
    else if(square[7]==square[8] && square[8]==square[9]){
        return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7]){
        return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8]){
        return 1;
    }
    else if(square[3]==square[6] && square[6]==square[9]){
        return 1;
    }
    else if(square[1]==square[5] && square[5]==square[9]){
        return 1;
    }
    else if(square[3]==square[5] && square[5]==square[7]){
        return 1;
    }
    else if(square[1]!='1' && square[2]!='2'&& square[3]!='3'
    && square[4]!='4' && square[5]!='5' && square[6]!='6' 
    && square[7]!='7' && square[8]!='8' && square[9]!='9'){
        return 0;
    }
    else{
        return -1;
    }
}

void board(){

    system("cls");

    std::cout<<" Player 1(X)- Player 2(0)"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"   |   |   "<<std::endl;
    std::cout<<" "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<" "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<" "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<std::endl;
    std::cout<<"   |   |   "<<std::endl;


}

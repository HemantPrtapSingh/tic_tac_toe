#include <iostream>
#include "tic_tac_toe.hpp"
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    int player=1 ,i,choice;

    char mark;

    do{
        board();
        player=(player%2)?1:2;

        std::cout<<" Player "<<player<<", enter the number ";
        std::cin>>choice;

        mark=(player==1)?'x':'0';

        if(choice==1 && square[1]=='1'){
            square[1]=mark;

        }
        else if(choice==2 && square[2]=='2'){
            square[2]=mark;
        }
        else if(choice==3 && square[3]=='3'){
            square[3]=mark;
        }
        else if(choice==4 && square[4]=='4'){
            square[4]=mark;
        }
        else if(choice==5 && square[5]=='5'){
            square[5]=mark;
        }
        else if(choice==6 && square[6]=='6'){
            square[6]=mark;
        }
        else if(choice==7 && square[7]=='7'){
            square[7]=mark;
        }
        else if(choice==8 && square[8]=='8'){
            square[8]=mark;
        }
        else if(choice==9 && square[9]=='9'){
            square[9]=mark;
        }
        else{
            std::cout<<"INVALID MOVE!";

            player--;
            std::cin.ignore();
            std::cin.get();
        }

        i=checkwin();
        player++;
    }
    while(i==-1);

    if(i==1){
        std::cout<<"\aCONGRATULATIONS! PLAYER "<<--player<<" WINS!";
    }
    else{
        std::cout<<"\aGAME DRAW";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;

}
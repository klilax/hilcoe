#include<iostream>
using namespace std;
#define TAX 0.0825;

const float UP_TV=400, UP_VCR=220, UP_REMOTE_CONTROLLER=30, UP_CD_PLAYER=300, UP_TAPE_RECODER = 150;// Unit price

int main (){
    int inPut, amount;
    int totalTV= 0,totalVCR=0 ,totalRC=0, totalCD_PLAYER=0, totalTAPE_RECODER =0 ;
    float priceTV, priceVCR, priceRC, priceCD_PLAYER, priceTAPE_RECORDER;
    cout<<"Press"<<'\t'<<"1.TV\n \t2.VCR\n\t3.Remote Controller\n\t4.CD Player\n\t5.Tape Recoder\n\t0.End\n ";

    do
    {
        cin>> inPut;

        if (inPut>5 || inPut<0)
        {
            cout<<"invalid input, please input a correct value: ";
        }
        else if (inPut>0) 
        {
        cout<<"Please enter amount: \n";
        cin>> amount;
        }
        if (amount<=0)
        {
            cout<<"invalid input, please input a correct value: ";
        }

        else
        {
            switch (inPut)
        {
        case 1: // for tv
            totalTV = totalTV + amount;

            break;
        case 2: // for VCR
            totalVCR = totalVCR + amount;

            break; 
        case 3: // for Remote controller
            totalRC = totalRC + amount;

            break;
        case 4: // for Cd player
            totalCD_PLAYER =totalCD_PLAYER + amount;
           
            break;
        case 5: // Tape Recorder
            totalTAPE_RECODER = totalTAPE_RECODER + amount;
           
            break; 

        default:
            break;
        }

        }        
        cout<<"Do you have additional request: ";

    } while (inPut<0 || inPut>0);
    
    system("cls");
    
    priceTV = UP_TV * totalTV;
    priceVCR = UP_VCR * totalVCR;
    priceRC= UP_REMOTE_CONTROLLER * totalRC;
    priceCD_PLAYER = UP_CD_PLAYER * totalCD_PLAYER;
    priceTAPE_RECORDER = UP_TAPE_RECODER * totalTAPE_RECODER;



    
    /*
    cout<<"TV: "<<totalTV<<endl;
    cout<<"VCR: "<<totalVCR<<endl;
    cout<<"Remote Controller: "<<totalRC<<endl;
    cout<<"CD Player: "<<totalCD_PLAYER<<endl;
    cout<<"Tape Recoder: "<<totalTAPE_RECODER<<endl;
    */

    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;


const float TAX_RATE =0.0825;// Tax rate
const float UP_TV=400, UP_VCR=220, UP_REMOTE_CONTROLLER=35.20, UP_CD_PLAYER=300, UP_TAPE_RECODER = 150;// Unit price

int main (){
    int inPut, amount;
    int totalTV= 0,totalVCR=0 ,totalRC=0, totalCD_PLAYER=0, totalTAPE_RECODER =0 ;

    float priceTV=0, priceVCR=0, priceRC=0, priceCD_PLAYER=0, priceTAPE_RECORDER=0;
    float tax, subtotal,total;

    char menu []= "\t1.TV\n \t2.VCR\n\t3.Remote Controller\n\t4.CD Player\n\t5.Tape Recoder\n\t0.End\n ";

    cout<<menu<<"Press a number corsponding to your request: ";

    do
    {
        cin>> inPut;

        if (inPut>5 || inPut<0)
        {
            system("cls");
            cout<<"invalid input, please input a correct value: \n";
        }
        else if (inPut>0) 
        {
        cout<<"Please enter amount: ";
        cin>> amount;
        system("cls");
        }
        if (amount<=0)
        {
            cout<<"invalid input, please input a correct value: \n";
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
        cout<<menu;      
        cout<<"Do you have additional request: ";
        

    } while (inPut<0 || inPut>0);
    
    system("cls");

    // calculates the individual price
    priceTV = UP_TV * totalTV;
    priceVCR = UP_VCR * totalVCR;
    priceRC= UP_REMOTE_CONTROLLER * totalRC;
    priceCD_PLAYER = UP_CD_PLAYER * totalCD_PLAYER;
    priceTAPE_RECORDER = UP_TAPE_RECODER * totalTAPE_RECODER;

    //calculates the total price
    subtotal =priceTV + priceVCR + priceRC + priceCD_PLAYER + priceTAPE_RECORDER;
    tax =subtotal*TAX_RATE;
    total=subtotal+tax;

    if (total>0)
        {
        cout<<left<<setfill(' ')<<setw(15);
        cout<<"QTY"<<setw(15)<<"DESQRIPTION"<<setw(10)<<"UNIT"<<setw(10)
        <<"TOTAL"<<endl<<setw(30)<<" "<<setw(10)<<"PRICE"<<setw(20)<<"PRICE"<<setw(1)<<endl;

        cout<<left<<setfill(' ')<<setw(15);
        cout<<"___"<<setw(15)<<"___________"<<setw(10)<<"______"<<setw(11)<<"_________"<<endl;

        cout<<left<<setfill(' ')<<setw(15)<<fixed<<setprecision(2);
        
        if (totalTV>0) cout<<totalTV<<setw(15)<<"TV"<<setw(10)<<UP_TV<<setw(13)<<priceTV<<endl<<setfill(' ')<<setw(15);
        if (totalVCR>0) cout<<totalVCR<<setw(15)<<"VCR"<<setw(10)<<UP_VCR<<setw(13)<<priceVCR<<endl<<setfill(' ')<<setw(15);
        if (totalRC>0) cout<<totalRC<<setw(16)<<"Remote"<<setw(10)<<UP_REMOTE_CONTROLLER<<setw(13)<<priceRC<<endl<<setfill(' ')<<setw(15);    
        if (totalCD_PLAYER>0) cout<<totalCD_PLAYER<<setw(15)<<"CD Player"<<setw(10)<<UP_CD_PLAYER<<setw(13)<<priceCD_PLAYER<<endl<<setfill(' ')<<setw(15);
        if (totalTAPE_RECODER>0) cout<<totalTAPE_RECODER<<setw(15)<<"Tape Recorder"<<setw(10)<<UP_TAPE_RECODER<<setw(13)<<priceTAPE_RECORDER<<endl;        

        cout<<right<<setfill(' ')<<setw(15);
        cout<<setw(49)<<"_________"<<endl
        <<setw(30)<<"SUBTOTAL"<<setw(17)<<subtotal<<endl
        <<setw(30)<<"TAX"<<setw(17)<<tax<<endl
        <<setw(30)<<"TOTAL"<<setw(17)<<total<<endl;

        }
    else cout<<"you don't have any order";
    system("pause");

    return 0;
}
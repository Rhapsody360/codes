#include <iostream>
using namespace std;

int main(){

    int groundtank = 10,rooftoptank=90;//levels are in %of tank capacity
    int withdrawn;
    bool greedy_switch=false;
    cin>>greedy_switch;
    while (!greedy_switch){
        cout<<"water withdrawn:";
        cin>> withdrawn;
        if (withdrawn == 0){
            break;
        }
        rooftoptank -= withdrawn;
        cout<< "roof top water level:"<<rooftoptank<<endl;
        cout<< "ground water level:"<<groundtank<<endl;
        if(rooftoptank<=10){
            if (groundtank>=20){
                cout<<"\n\n===============  motor ON  ===============\n";
                while(rooftoptank<=90){
                    cout<< "roof top water level:"<<rooftoptank<<endl;
                    cout<< "ground water level:"<<groundtank<<endl;
                    rooftoptank++;
                    groundtank--;
                    if(groundtank<=20){
                        break;
                    }
                }
                cout <<"================  motor OFF  =================\n\n\n";
                cout<< "roof top water level:"<<rooftoptank<<endl;
                cout<< "ground water level:"<<groundtank<<endl;
            }
        }
        cout<<"input to ground water? :";
        int water_came;
        cin>>water_came;
        groundtank+=water_came;
    }
    while (greedy_switch){
        cout<<"=========greedy "
    }
    

    return 0;
}

/*3 switches
on if >=20 in ground water
off if == 90 in top tank
on if <= 10 in top tank

*/
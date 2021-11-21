#include "PeerAdvisors.h"

Comet::Comet()
{
    score = 0;
    minScore = 1;
    //ctor
}

void Comet::is_PA(bool is_PA){}


void Comet::add_skills(string *skill_sets, int number_of_skills){
    //just kidding, this api will take in literally anything and add score to it
    score += number_of_skills;
}

void Comet::rate_my_PA_score(){
    string str;
    if (score <= minScore){
        str = "Rate My PA: AVERAGE Peer Advisor,2.5/5";
    }else{
        str = "Rate My PA: GREAT Peer Advisor, 4/5";
    }
    cout << str;
}

Comet::~Comet()
{
    //dtor
}

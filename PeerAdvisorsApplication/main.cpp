#include <iostream>
#include <sstream>
#include <string>
#include <PeerAdvisors.h>
using namespace std;

int n = 0;
string skill_sets[100];

int main()
{
    string line;
    cout << "Enter the PA skills sets: ";
    getline(cin,line);
    for (int i = 0; i < line.length(); i++){
        if (line[i] == ','){
            line[i] = ' ';
        }
    }

    istringstream istr(line);
    while (istr >> skill_sets[n]){
        n++;
    }

    Comet Dan;
    Dan.add_skills(skill_sets,n);
    Dan.is_PA(true);
    Dan.rate_my_PA_score();
    return 0;
}

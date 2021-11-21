#ifndef PEERADVISOR_H
#define PEERADVISOR_H
#include <iostream>
#include <iterator>

using namespace std;

class Comet
{
    public:
        Comet();
        void is_PA(bool is_PA);
        void add_skills(string *skill_sets, int number_of_skills);
        void rate_my_PA_score();
        virtual ~Comet();

    protected:

    private:
        int score;
        int minScore;
};

#endif // PEERADVISORS_H

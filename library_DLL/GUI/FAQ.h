//
// Created by pabor on 2021-11-26.
//

#ifndef OLIVEACLASSES_FAQ_H
#define OLIVEACLASSES_FAQ_H
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

class FAQ{
public:
    FAQ();
    FAQ(vector<string> questions, vector<string> answers);
    void setQuestions(vector<string> questions);
    void setAnswers(vector<string> answers);
    vector<string> getQuestions();
    vector<string> getAnswers();
private:
    vector<string> questions;
    vector<string> answers;
};


#endif //OLIVEACLASSES_FAQ_H
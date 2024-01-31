//
// Created by pabor on 2021-11-26.
//

#include "FAQ.h"

/*
 * FAQ CLASS
 */
FAQ::FAQ() {
}
FAQ::FAQ(vector<string> questions, vector<string> answers) {
    this->questions=questions;
    this->answers=answers;
}

vector<string> FAQ::getAnswers() {
    return this->answers;
}

vector<string> FAQ::getQuestions() {
    return this->questions;
}

void FAQ::setAnswers(vector<string> answers) {
    this->answers=answers;
}

void FAQ::setQuestions(vector<string> questions) {
    this->questions=questions;
}
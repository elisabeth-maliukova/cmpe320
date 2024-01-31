//
// Created by Pablo Ortiz on 2021-11-14.
//
#include <string>
#include <stdlib.h>
#include <vector>
#include "Exceptions.h"

using namespace std;
/*
 * Exceptions
 */

BadSearchException::BadSearchException(const string &error) : message(error) {}
string& BadSearchException::what() {return message;}

LoadingApplicationException::LoadingApplicationException(const string &error) : message(error) {}
string& LoadingApplicationException::what() {return message;}


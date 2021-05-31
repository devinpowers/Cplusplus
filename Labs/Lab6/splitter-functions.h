#ifndef SPLITTER_H
#define SPLITTER_H
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<iostream>
using std::ostream;

vector<string> split (const string &s, char separator = ' ');
void print_vector (ostream &out, const vector<string> &v);

#endif /* SPLITTER_H */
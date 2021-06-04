
#ifndef NBA_H
#define NBA_H

#include<string>
using std::string;
#include<vector>
using std::vector;

class NBA{

    private:
        string first_name_;  
        string last_name_;
        int number_ = 0;
        void adjust_nba(string, string, int);

    
    public:
    // constructors

        NBA() = default;
        NBA(string, string, int);
        explicit NBA(string s);

        // Getters
        string first_name() const { return first_name_;}
        string last_name() const {return last_name_;}
        int number() const { return number_;}

        // Setters
        void first_name(string);
        void last_name(string);
        void number(int);

        // Members
        void add_minutes(int);
        friend string nba_to_string(const NBA &);
        
};

string nba_to_string(const NBA &);
void split(const string &, vector<string> &, char);

#endif


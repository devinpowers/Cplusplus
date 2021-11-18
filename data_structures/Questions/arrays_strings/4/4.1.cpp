#include <iostream>

/*
 * Helper routine to return an frequency Table index
 *
 */

int getCharIndex( char c )
{
    int idx = -1;
    if ( c >= 'a' && c <= 'z' )
    {
        idx = c - 'a';
    }
    else if ( c >= 'A' && c <= 'Z' )
    {
        idx = c - 'A';
    }
    return idx;
}

/*
 * Function : countFrequency
 * Args     : input string, an array of int 
 * Return   : Void, array of int will populate each letter's frequency in string.
 */

void countFrequency( const std::string & str, int *frequency )
{
    int idx;
    for (const char & c : str)
    {
        idx = getCharIndex(c);
        if ( idx != -1 )
        {
            ++frequency[idx];
        }
    }
}


/*
 * Function : isPermutePallindrome 
 * Args     : input string
 * Return   : returns true if is possible that one of the permutations of input string can be a pallindrome.
 *            else return false
 */

bool isPermutationOfPallindrome1( const std::string & str )
{
    int frequency[ 26 ] = { 0 };
    countFrequency( str, frequency );

    /*
     * We will check here that letter frequencies are all even or all even except one odd.
     */
    bool oddAppeared = false;
    std::cout << std::endl;
    for ( int i = 0 ; i < 26; ++i ) {
        if ( frequency[i] % 2  && oddAppeared ) {
            return false;
        } else if ( frequency[i] % 2 && !oddAppeared ) {
            oddAppeared = true;
        }
    }
    return true;
}

int main()
{
    std::string str("Tact Coa");
    std::cout << "Does \"" << str << "\"  has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 1:" << isPermutationOfPallindrome1( str ) << std::endl;
   


    std::string str1("A big Cat");
    std::cout << "Does \"" << str1 << "\" has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 1:" << isPermutationOfPallindrome1( str1 ) << std::endl;



    std::string str2("Aba cbc");
    std::cout << "Does \"" << str2 << "\" has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 1:" << isPermutationOfPallindrome1( str2 ) << std::endl;
  

}



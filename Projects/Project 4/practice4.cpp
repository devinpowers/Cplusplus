#include<iostream>
using std::cout; using std::cin; using std::endl;
//#include<iomanip>
//using std::setprecision;
#include<string>
using std::string;


const string code = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

string encode_sequence(string sequence, char encoder) {
	string results = "";
	if (sequence.length() <= 3) {
		//don't encode
		return sequence;
	}
	else {
		results.push_back(encoder);                       // adds encoder to results string (:)
		results.push_back(code.at(sequence.length() - 4 ));  // Adds decimal reference from code string above ()
		results.push_back(sequence.at(0));
	}
	return results;
}

string encode ( string sequence, char encoder ){

    string final_encode = "";  // final answer

    string shorten_sequence = "";   // dynamic, will change

    for (int i = 0 ; i < sequence.length(); i++)
    {
        shorten_sequence += sequence[i];

        if (sequence[i] != sequence[i+1]){

            final_encode += encode_sequence( shorten_sequence, encoder);

            shorten_sequence = ""; // reset our shorten sequence variable to "" 
        }

    }
    return final_encode;

}
string decode_sequence ( string sequence, char encoder)
    {
        string results = "" ;
        int  number = (code.find(sequence.at(1)) + 4);
        char character = sequence.at(2);
        results.assign(number, character);

        return results;

    }

string decode (string sequence, char encoder)
    {
        string final_decode = "";

        for (int i = 0; i < sequence.length(); i++ )
        {
            if (sequence[i] == encoder)
            {
                string seq = "";
                
                seq = sequence.substr(i, i+3); // slices seqeunce after encoder

                final_decode += decode_sequence (seq, encoder); // sends sliced seqeunce to decode
              
                i += 2; // skip 2 iterations
                
                
                
            }
            else
            {
                final_decode += sequence[i];
                // add char to the final_decode string
            }
            
        }
    
        return final_decode;

    }

double reduction ( string original, string encoded )
    {
        double reduction_ratio;

        double og_length =  original.length();
        double encode_length = encoded.length();
     
        reduction_ratio = (1-(og_length - encode_length)/(og_length));

        return reduction_ratio;

    }



int main()
{
    string sequence_check = "";
    char sep;
    int test;
    string encoded_sequence = "";

    cout << "Please enter (1,2,3,4, or 5) to perform " << endl << "1. Encode a Sequence using one variable: " << endl << "2. Encode a Long sequence using multiple varibles: " << endl << "3. Decode "<< endl << "4. Decode full Sequence" << endl << "5. Reduction Ratio" << endl;

    cin >> test;

    switch (test)
    {
    case 1: {

        cout << "Please enter a Sequence to Check:  ";
        cin >> sequence_check;

        cout << "Please enter a character to sperate  the code Sequence: ";
        cin >> sep;

        cout << encode_sequence(sequence_check, sep) << endl;
    }
        break;
    
    case 2:
    {
      
        cout << "Please enter a Sequence to Check:  ";
        cin >> sequence_check;
        cout << "Please enter a character to sperate  the code Sequence: ";
        cin >> sep;

        cout << encode(sequence_check, sep) << endl;
    }
        break;
    

    case 3: //Decode
    {

    

        cout << "Please enter a 3 letter Sequence to Decode: ";
        cin >> sequence_check;
        cout << "Please enter the Charater that is seperating the code Sequence: ";

        cin >> sep;

        cout << decode_sequence(sequence_check, sep) << endl;
        break;
    }
    case 4:
    {
        cout << "Please enter a Sequence to Decode:  ";
        cin >> sequence_check;
        cout << "Please enter a character to sperate  the code Sequence: ";
        cin >> sep;

        cout << decode (sequence_check, sep) << endl;
        break;

    }
    case 5:
    {
        cout << "Please enter the orginal Sequence: ";
        cin >> sequence_check;
        cout << "Please enter the new encoded Sequence: ";
        cin >> encoded_sequence;
        
        cout << reduction (sequence_check, encoded_sequence) << endl;
        break;
    }    
    }


}
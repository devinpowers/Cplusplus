

string decode (string msg, string key1, string key2)
{
    string result;

    // take 2 keywords and create_encoding so I can pass them to our decode_digraph functionm

    string block1 = create_encoding(key1);
    string block2 = create_encoding(key2);

    result = decode_digraph(msg,block1,block2);

    return result;

}


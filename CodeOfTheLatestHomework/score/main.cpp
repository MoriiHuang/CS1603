#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile( "test" );
    int para = 0, word = 0, chars = 0;
    bool is_empty_para = true;
    bool is_space = true;
    char ch;
    while (infile.get(ch))
        switch (ch)
        {
        case '\n':
            if (!is_empty_para)
                ++para;
            is_empty_para = true;
        case ' ':
            if (!is_space)
                ++word;
            is_space = true;
            break;
        default:
            is_empty_para = false;
            is_space = false;
            if (ch != ',' && ch != '.')
                ++chars;
            break;
        }
    if (ch != '\n' && ch != 0)
    {
        if (ch != ' ')
            ++word;
        ++para;
    }
    infile.close();
    cout<<para<<word<<chars;
    return 0;
}

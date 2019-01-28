#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <array>



using namespace std;

int main()
{
    fstream in,out4a,out4b;in.open("anagram.txt");out4a.open("odp_4a.txt",ios::out|ios::trunc);out4b.open("odp_4b.txt",ios::out|ios::trunc);
    string main_word, rest_words[4];
    for(int i = 0; i < 200;i++)
    {
    in >> main_word>>rest_words[0]>>rest_words[1]>>rest_words[2]>>rest_words[3];
    if (main_word.length()==rest_words[0].length()&&
        main_word.length()==rest_words[1].length()&&
        main_word.length()==rest_words[2].length()&&
        main_word.length()==rest_words[3].length())
        {
        //cout<<main_word<<" "<<rest_words[0]<<" "<<rest_words[1]<<" "<<rest_words[2]<<" "<<rest_words[3]<<endl;
        out4a<<main_word<<" "<<rest_words[0]<<" "<<rest_words[1]<<" "<<rest_words[2]<<" "<<rest_words[3]<<endl;
        string main_word_reverse (main_word), rest_words_reverse[4] = {rest_words[0],rest_words[1],rest_words[2],rest_words[3]};

        sort(main_word_reverse.begin(),main_word_reverse.end());
        sort(rest_words_reverse[0].begin(),rest_words_reverse[0].end());
        sort(rest_words_reverse[1].begin(),rest_words_reverse[1].end());
        sort(rest_words_reverse[2].begin(),rest_words_reverse[2].end());
        sort(rest_words_reverse[3].begin(),rest_words_reverse[3].end());
        cout <<main_word_reverse<< " "<<rest_words_reverse[0]<< " "<<rest_words_reverse[1]<< " "<<rest_words_reverse[2]<< " "<<rest_words_reverse[3]<<endl;
        if(main_word_reverse==rest_words_reverse[0]&&
           main_word_reverse==rest_words_reverse[1]&&
           main_word_reverse==rest_words_reverse[2]&&
           main_word_reverse==rest_words_reverse[3])
           {
            out4b<<main_word<<" "<<rest_words[0]<<" "<<rest_words[1]<<" "<<rest_words[2]<<" "<<rest_words[3]<<endl;
           }

        }
    }
    in.close();out4a.close();out4b.close();
    return 0;
}

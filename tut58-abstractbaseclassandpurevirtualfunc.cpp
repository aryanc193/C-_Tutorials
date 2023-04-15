#include <iostream>
#include <cstring>
using namespace std;

class CWA
{
protected:
    string title;
    float rating;

public:
    CWA(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function --> pure virtual function
};

class CWAVideo : public CWA
{
    int videoLength;

public:
    CWAVideo(string s, float r, int vl) : CWA(s, r)
    {
        vl = videoLength;
    }
    void display()
    {
        cout << "This is and amazing video tutorial with title " << title << endl;
        cout << "Ratings of this video tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Length of the video is: " << videoLength << " words" << endl;
    }
};

class CWAText : public CWA
{
    int words;

public:
    CWAText(string s, float r, int wc) : CWA(s, r)
    {
        words = wc;
    }
//     void display()
//     {
//         cout << "This is and amazing text tutorial with title " << title << endl;
//         cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
//         cout << "No of words in this text tutorial is: " << words << " words" << endl;
//     }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with arry video
    title = "C++ tutorial";
    vlen = 17.56;
    rating = 4.8;
    CWAVideo cppVideo(title, rating, vlen);

    // for code with arry text
    title = "C++ tutorial text";
    words = 433;
    rating = 4.20;
    CWAText cpptext(title, rating, words);

    CWA *tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cpptext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

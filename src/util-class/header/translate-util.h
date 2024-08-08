#include<iostream>
#include "../../lib-translate-ext/LibreTranslate.h"
using namespace std;
#ifndef TRANSLATE_UTIL_H
#define TRANSLATE_UTIL_H

class TranslateUtil{

    public: std::string translate(std::string input, std::string src_lang, std::string dest_lang);
    
};
#endif
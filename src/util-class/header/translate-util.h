#include<iostream>
#include "../../lib-translate-ext/LibreTranslate.h"
using namespace std;
#ifndef TRANSLATE_UTIL_H
#define TRANSLATE_UTIL_H

class TranslateUtil{

    public: std::string translate(std::string input, std::string src_lang, std::string dest_lang);
    public: std::string translate(std::string base_url, std::string input, std::string src_lang, std::string dest_lang);
    public: std::string translate(std::string base_url, std::string api_key, std::string input, std::string src_lang, std::string dest_lang);
    
};
#endif
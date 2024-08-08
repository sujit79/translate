#include <iostream>
#include <memory>
#include "./header/translate-util.h"

std::string translate(std::string input, std::string src_lang, std::string dest_lang){
    LibreTranslateAPI libreTranslateAPI;
    return libreTranslateAPI.translate(input, src_lang, dest_lang);
}

std::string translate(std::string base_url, std::string input, std::string src_lang, std::string dest_lang){
    LibreTranslateAPI *libreTranslateAPI = new LibreTranslateAPI(base_url);
    std::string result ;
    result = libreTranslateAPI->translate(input, src_lang, dest_lang);
    delete libreTranslateAPI;
    return result;
}
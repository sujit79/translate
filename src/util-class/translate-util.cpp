#include <iostream>
#include "./header/translate-util.h"

std::string translate(std::string input, std::string src_lang, std::string dest_lang){
    LibreTranslateAPI libreTranslateAPI;
    return libreTranslateAPI.translate(input, src_lang, dest_lang);
}
    
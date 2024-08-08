#include "util-class/header/translate-util.h"

class TranslateEngine{
    TranslateUtil translateUtil;

    std::string translate(std::string input, std::string src_lang, std::string dest_lang){
        return translateUtil.translate(input, src_lang, dest_lang);
    }
    
};
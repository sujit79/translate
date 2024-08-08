#include "util-class/header/translate-util.h"

class TranslateEngine{
    TranslateUtil translateUtil;

    std::string translate(std::string input, std::string src_lang, std::string dest_lang){
        return translateUtil.translate(input, src_lang, dest_lang);
    }
    
    std::string translate(std::string base_url, std::string input, std::string src_lang, std::string dest_lang){
        return translateUtil.translate(base_url, input, src_lang, dest_lang);
    }
};
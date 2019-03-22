void func(std::list<std::string> strlist) {
    for (std::list<std::string>::iterator str = strlist.begin(); str != strlist.end(); str++) {
        if (func2(*str)) {
    	       strlist.erase(str);
            if (strlist.empty())
                 return;
        }
    }
}
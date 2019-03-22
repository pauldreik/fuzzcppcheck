bool isInUnoIncludeFile(StringRef name) {   return  name.startswith(SRCDIR "/com/") || name.startswith(SRCDIR "/uno/");
};
typedef string string_array[10];
string_array &func(string_array &arg);
auto func(string (&a)[10]) -> string(&)[10];
string a[10];
decltype(a) &func(decltype(a) &arg);

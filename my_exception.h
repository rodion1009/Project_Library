#ifndef my_exception_h
#define my_exception_h

class MyException {
    string details;
public:
    MyException(string d) {
        details = d;
    }
    string getDescription(void) {
        return details;
    }
};

#endif /* my_exception_h */

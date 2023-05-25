#ifndef CLASSES_SMARTPOINTER_H
#define CLASSES_SMARTPOINTER_H


class SmartPointer {

private:
    int* ptr;

public:

    virtual ~SmartPointer();

    explicit SmartPointer(int *ptr);

};


#endif //CLASSES_SMARTPOINTER_H

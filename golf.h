#ifndef GOLF_H
#define GOLF_H

class Golf {
private:
    static const int LEN = 40;
    char m_fullname[LEN];
    int m_handicap;
public:
    Golf();
    Golf(char* fullname, int handicap = 0);
    int setgolf();
    void showgolf () const;
};

// Интерактивная версия:
// функция предлагает пользователю ввести имя и гандикап,
// присваивает элементам структуры g введенные значения;
// возвращает 1, если введено имя, и 0, если введена пустая строка

#endif // GOLF_H

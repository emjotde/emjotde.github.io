#include <iostream>


int MONTH_LENGTHS[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

struct Date {
    int day;
    int month;
    int year;
};

void print_date(Date date) {
    if (date.day < 10)
        std::cout << 0;
    std::cout << date.day << "."; 
    if (date.month < 10)
        std::cout << 0;
    std::cout << date.month << "." << date.year << " r." << std::endl;
}

void init_date(Date& date, int d, int m, int y) {
    date.day = d;
    date.month = m;
    date.year = y;
}

void next_day(Date &date) {
    date.day += 1;
    if (date.day > MONTH_LENGTHS[date.month - 1]) {
        date.day = 1;
        date.month += 1;
    }
    if (date.month > 12) {
        date.month = 1;
        date.year += 1;
    }
}

struct Notepad {
    Date* dates;
    std::string* notes;
    int max;
    int count;
};

void init_notepad(Notepad* notepad, int max_size) {
    notepad->max = max_size;
    notepad->dates = new Date[max_size];
    notepad->notes = new std::string[max_size];
    notepad->count = 0;
}
void del_notepad(Notepad* notepad) {
    delete[] notepad->dates;
    delete[] notepad->notes;
}

void add_note(Notepad* notepad, Date date, std::string note) {
    notepad->dates[notepad->count] = date;
    notepad->notes[notepad->count] = note;
    notepad->count += 1;
}

int main() {
    Date date;
    date.day = 25;
    date.month = 2;
    date.year = 2014;
    
    print_date(date);

    int n = 3;
    Date* dates = new Date[n];
    init_date(dates[0], 28, 2, 2014);
    next_day(dates[0]);
    print_date(dates[0]); 

    init_date(dates[1], 14, 3, 2014);
    init_date(dates[2], 4, 12, 2014);
   
    Notepad note;
    init_notepad(&note, 3);
    add_note(&note, dates[0], "pierwsza notatka");
    add_note(&note, dates[1], "druga notatka");
    del_notepad(&note);

    delete[] dates;

    return 0;
}

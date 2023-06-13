#include "ExamSys.h"

int main() {
    ExaminationSys * system = new ExaminationSys(20, 300, 30);
    system->start();
    
    return 0;
}
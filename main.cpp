#include <iostream>
#include <memory>
#include <string>

#include "Creats/ReportCreator.h"
#include "Creats/ResumeCreator.h"
#include "Creats/LetterCreator.h"
#include "Creats/InvoiceCreator.h"

int main() {
    std::cout << "Выберите тип документа:\n";
    std::cout << "1 - Отчёт\n";
    std::cout << "2 - Резюме\n";
    std::cout << "3 - Письмо\n";
    std::cout << "4 - Счёт-фактура\n";
    std::cout << "Введите номер: ";

    int choice;
    std::cin >> choice;

    std::unique_ptr<DocumentCreator> creator;

    switch (choice) {
        case 1: creator = std::make_unique<ReportCreator>(); break;
        case 2: creator = std::make_unique<ResumeCreator>(); break;
        case 3: creator = std::make_unique<LetterCreator>(); break;
        case 4: creator = std::make_unique<InvoiceCreator>(); break;
        default:
            std::cout << "Неверный выбор!\n";
            return 0;
    }

    std::unique_ptr<Document> doc(creator->CreateDocument());
    doc->Open();

    return 0;
}
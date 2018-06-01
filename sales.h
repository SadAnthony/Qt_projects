#ifndef SALES_H
#define SALES_H
namespace SALES {
    class Sales {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double*, int n = QUARTERS);
        void setSales();
        void showSales() const;

    };
    // Копирует меньшее значение из 4 или п элементов из массива
    // аг в член sales структуры s, вычисляет и сохраняет
    // среднее арифметическое, максимальное и минимальное
    // значения введенных чисел;
    // оставшиеся элементы sales, если таковые есть, устанавливаются в 0

    // Интерактивно подсчитывает продажи за 4 квартала,
    // сохраняет их в члене sales структуры s, вычисляет и
    // сохраняет среднее арифметическое, а также максимальное
    // и минимальное значения введенных чисел

    // Отображает всю информацию из структуры s
}

#endif // SALES_H

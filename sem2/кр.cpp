#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    //вхоной файл
    const string inputFileName = "C:\\Users\\User\\Desktop\\text.txt";
    
    //открытие файла и проверка на успех открытия
    ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Failed to open input file." << endl;
        return 1;
    }

    //Создаю хеш - таблицу `wordCounts`, в которой будем хранить количество вхождений каждого слова.
    unordered_map<string, int> wordCounts;

    string line;
    while (getline(inputFile, line)) {
        transform(line.begin(), line.end(), line.begin(), ::tolower); // привожу к нижнему регистру
        string word;
        //Перебираю символы строки
        for (char c : line) {
            if (isalpha(c)) { // если символ является буквой
                word += c; //добавляю его к текущему слову
            }
            else if (!word.empty()) { // если слово не пустое
                ++wordCounts[word]; //увеличиваю счетчик для этого слова
                word.clear(); //очищаю текущее слово
            }
        }
        //Если после перебора символов строки текущее слово не пустое, увеличиваю счетчик для этого слова.
        if (!word.empty()) { // если последнее слово в строке не было учтено
            ++wordCounts[word];
            word.clear();
        }
    }

    //Закрываю входной файл
    inputFile.close();

    //Создаю вектор пар(слово, количество вхождений) на основе хеш - таблицы `wordCounts`
    vector<pair<string, int>> sortedWordCounts(wordCounts.begin(), wordCounts.end());
    //Сортирую вектор пар по убыванию количества вхождений.
    sort(sortedWordCounts.begin(), sortedWordCounts.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
        });

    //Вывожу на экран отсортированный список слов и количество их вхождений
    for (const auto& pair : sortedWordCounts) {
        cout << pair.first << " - " << pair.second << endl;
    }

    //Возвращаем 0
    return 0;
}

//Описание программы :

//1. Определяем имя входного файла.
//2. Открываем входной файл и проверяем, что он успешно открыт.
//3. Создаем хеш - таблицу `wordCounts`, в которой будем хранить количество вхождений каждого слова.
//4. Считываем текст построчно из входного файла.
//5. Приводим строку к нижнему регистру.
//6. Перебираем символы строки.Если символ является буквой, добавляем его к текущему слову.Если символ не является 
//буквой и текущее слово не пустое, увеличиваем счетчик для этого слова и очищаем текущее слово.Если символ не 
//является буквой и текущее слово пустое, ничего не делаем.
//7. Если после перебора символов строки текущее слово не пустое, увеличиваем счетчик для этого слова.
//8. Закрываем входной файл.
//9. Создаем вектор пар(слово, количество вхождений) на основе хеш - таблицы `wordCounts`.
//10. Сортируем вектор пар по убыванию количества вхождений.
//11. Выводим на экран отсортированный список слов и количества их вхождений.
//12. Возвращаем 0.

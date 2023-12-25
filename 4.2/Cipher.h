/** @file
	*@author Елинова А.С
	*@version 1.0
	*@date 25.12.23
	*@copyright ИБСТ ПГУ
	*@warning LAB_4
	*@brief Заголовочный файл для модуля шифра табличной перестановки
*/
#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
/// @brief Класс  расшифрования и шифрования шифра маршрутной табличной перестановки.
class Cipher
{
/// @brief Модуль, который хранит ключ для расшифрования или шифрования.
private:
    int k;
    wstring getValidOpenText(const std::wstring & s);
    wstring getValidCipherText(const std::wstring & s);
    int getValidKey(const int k, const std::wstring & s);
public:
/// @brief Конструктор без параметров.
    Cipher()=delete;
     /// @brief Конструктор для ключа
     /**  @param значение ключа
     */
    Cipher(int w);
     /**
     * @brief шифрование табличной маршрутной перестановки
     * @param образец класса "Cipher", в котором устанавливается ключ
     * @param "wstring" это строка зашифрования
     */
    wstring zakodirovat(Cipher w, wstring& s);
     /**
     * @brief расшифрование табличной маршрутной перестановки
     * @param образец класса "Cipher", в котором устанавливается ключ
     */
    wstring raskodirovar(Cipher w, wstring& s);
};
/// @class cipher_error - класс рассчитанный для возбуждения исключений

class cipher_error: public std::invalid_argument
{
public:
    explicit cipher_error (const std::string& what_arg):
        std::invalid_argument(what_arg) {}
    explicit cipher_error (const char* what_arg):
        std::invalid_argument(what_arg) {}
};

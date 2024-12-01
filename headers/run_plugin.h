#ifndef _RUN_PLUGIN
#define _RUN_PLUGIN 1

#include "interface.h"

/**
 *  run_plugin - обрабатывает запрос пользователя и возвращает ответ
 *
 *  request:    HTTP-запрос клиента.
 *
 *  Эта функция принимает запрос клиента, ищет плагин, который может его обработать, и
 *  передаёт ему управление. Если плагин не найден, а запрос имеет тип GET, будет
 *  совершена процедура простой отправки файла. К примеру, плагины не пишутся для
 *  картинок, файлов стилей или совсем простых статичных страниц. 
 * 
 *  Плагин является динамически-подключаемой библиотекой, и
 *  имеет строгий интерфейс и правила именования. Подробнее в plugins/README.
 *
 *  Возвращает указатель на структуру ответа. Структура ответа выделяется в куче, и
 *  нуждается в очистке после использования.
*/
http_response *run_plugin(http_request *request);

#endif

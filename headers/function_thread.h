#ifndef FUNCTION_THREAD_H
#define FUNCTION_THREAD_H


#define ADDRSTRLEN (NI_MAXSERV + NI_MAXHOST + 10)
#define BUFFER_SIZE 1024
#define SIZ_BUFFER_REQUEST 1024

#include "interface.h"

/* Проверка на коректность запроса +*/
int checking_input_accuracy(char* request_str);

/* функция получает запрос в виде строки и парсит его в структуру +
 * и возвращает указатель на эту структуру  */
http_request* parse_http_request(char* request_str);

/* функция получает распарсенный ответ и клиенский дескриптор
 * и отправляет ответ клиенту +*/
void send_response_from_server(int client_socket, http_response* response);

/* функция освобождает структуру http_request +*/
void free_http_request(http_request** request);

/* функция освобождает структуру http_response +*/
void free_http_response(http_response** response);

#endif


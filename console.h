#pragma once
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>


#define PORT 700 
#define MESSAGE_LENGTH 1024



int connect();
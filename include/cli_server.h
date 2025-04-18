#pragma once

#include "LRUCache.h"
#include "Worker.h"
#include <thread>
#include <memory>
#include <mutex>
#include <stdio.h>
#include <string>

#include <sys/socket.h>
#include <sys/types.h>

#include <fcntl.h>
#include <sys/epoll.h>

#include <sys/unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <chrono>
#include <errno.h>

namespace ServerConstants
{
    constexpr std::string_view port { "8080" };

    inline const int k_workerCount { std::thread::hardware_concurrency() };
    constexpr int k_defaultWorkerCount { 4 };
}

void startServerCLI(LRUCache& cache);

void printError(std::string_view err);
#pragma once

#include <spdlog/spdlog.h>

#define RAZEL_LOGGER_NAME "RAZEL LOGGER"

#define RAZEL_TRACE(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->trace(__VA_ARGS__);}
#define RAZEL_DEBUG(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->debug(__VA_ARGS__);}
#define RAZEL_INFO(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->info(__VA_ARGS__);}
#define RAZEL_WARN(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->warn(__VA_ARGS__);}
#define RAZEL_ERROR(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->error(__VA_ARGS__);}
#define RAZEL_FATAL(...)     if(spdlog::get(RAZEL_LOGGER_NAME) != nullptr) { spdlog::get(RAZEL_LOGGER_NAME)->critical(__VA_ARGS__);}
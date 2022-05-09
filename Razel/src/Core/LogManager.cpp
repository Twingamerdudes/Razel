#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <iostream>
#include <memory>
#include "Headers/LogManager.h"
#include "Headers/Log.h"

using namespace std;

void init_spdlog() {
	auto consoleSink = make_shared<spdlog::sinks::stderr_color_sink_mt>();
	consoleSink->set_pattern("%^%l: %v%$");

	vector<spdlog::sink_ptr> sinks{ consoleSink };
	auto Logger = make_shared<spdlog::logger>("RAZEL LOGGER", sinks.begin(), sinks.end());
	Logger->set_level(spdlog::level::trace);
	Logger->flush_on(spdlog::level::trace);

	spdlog::register_logger(Logger);
}
void shutdown() {
	spdlog::shutdown();
}
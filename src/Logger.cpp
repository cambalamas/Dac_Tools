#include "../incl/Logger.hpp"

namespace dac {

// ====================================================================== //
// ====================================================================== //
// Define loggers
// ====================================================================== //

_LogType Logger::m_info  = spdlog::stdout_color_mt("INFO");
_LogType Logger::m_error = spdlog::stderr_color_mt("ERROR");
_LogType Logger::m_print = spdlog::stdout_color_mt("PRINT");

// ====================================================================== //
// ====================================================================== //
// Getter of info logger
// ====================================================================== //

_LogType& Logger::info() {
  static bool __logger_info_init = [&]() {
    m_info->set_pattern(PATTERN_ALERT);
    return true;
  }();
  return m_info;
}

// ====================================================================== //
// ====================================================================== //
// Getter of error logger
// ====================================================================== //

_LogType& Logger::error() {
  static bool __logger_error_init = [&]() {
    m_error->set_pattern(PATTERN_ALERT);
    return true;
  }();
  return m_error;
}

// ====================================================================== //
// ====================================================================== //
// Getter of print logger
// ====================================================================== //

_LogType& Logger::print() {
  static bool __logger_print_init = [&]() {
    m_print->set_pattern(PATTERN_PRINT);
    return true;
  }();
  return m_print;
}

} // namespace dac

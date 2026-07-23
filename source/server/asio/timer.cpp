/*!
    \file timer.cpp
    \brief Timer implementation
    \author Ivan Shynkarenka
    \date 16.08.2018
    \copyright MIT License
*/

#include "server/asio/timer.h"

namespace CppServer {
namespace Asio {

Timer::Timer(const std::shared_ptr<Service>& service)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context)
{ __builtin_trap() /* STUB: not implemented */; }

Timer::Timer(const std::shared_ptr<Service>& service, const CppCommon::UtcTime& time)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context, time.chrono())
{ __builtin_trap() /* STUB: not implemented */; }

Timer::Timer(const std::shared_ptr<Service>& service, const CppCommon::Timespan& timespan)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context, timespan.chrono())
{ __builtin_trap() /* STUB: not implemented */; }

Timer::Timer(const std::shared_ptr<Service>& service, const std::function<void(bool)>& action)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context),
    _action(action)
{ __builtin_trap() /* STUB: not implemented */; }

Timer::Timer(const std::shared_ptr<Service>& service, const std::function<void(bool)>& action, const CppCommon::UtcTime& time)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context, time.chrono()),
    _action(action)
{ __builtin_trap() /* STUB: not implemented */; }

Timer::Timer(const std::shared_ptr<Service>& service, const std::function<void(bool)>& action, const CppCommon::Timespan& timespan)
    : _service(service),
    _io_context(_service->GetAsioContext()),
    _strand(*_io_context),
    _strand_required(_service->IsStrandRequired()),
    _timer(*_io_context, timespan.chrono()),
    _action(action)
{ __builtin_trap() /* STUB: not implemented */; }

CppCommon::UtcTime Timer::expire_time() const
{ __builtin_trap() /* STUB: not implemented */; }

CppCommon::Timespan Timer::expire_timespan() const
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Setup(const CppCommon::UtcTime& time)
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Setup(const CppCommon::Timespan& timespan)
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Setup(const std::function<void(bool)>& action)
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Setup(const std::function<void(bool)>& action, const CppCommon::UtcTime& time)
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Setup(const std::function<void(bool)>& action, const CppCommon::Timespan& timespan)
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::WaitAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::WaitSync()
{ __builtin_trap() /* STUB: not implemented */; }

bool Timer::Cancel()
{ __builtin_trap() /* STUB: not implemented */; }

void Timer::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

void Timer::SendTimer(bool canceled)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

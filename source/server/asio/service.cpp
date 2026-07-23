/*!
    \file service.cpp
    \brief Asio service implementation
    \author Ivan Shynkarenka
    \date 16.12.2016
    \copyright MIT License
*/

#include "server/asio/service.h"

#include "errors/fatal.h"

namespace CppServer {
namespace Asio {

Service::Service(int threads, bool pool)
    : _strand_required(false),
      _polling(false),
      _started(false),
      _round_robin_index(0)
{ __builtin_trap() /* STUB: not implemented */; }

Service::Service(const std::shared_ptr<asio::io_context>& io_context, bool strands)
    : _strand_required(strands),
      _polling(false),
      _started(false),
      _round_robin_index(0)
{ __builtin_trap() /* STUB: not implemented */; }

bool Service::Start(bool polling)
{ __builtin_trap() /* STUB: not implemented */; }

bool Service::Stop()
{ __builtin_trap() /* STUB: not implemented */; }

bool Service::Restart()
{ __builtin_trap() /* STUB: not implemented */; }

void Service::ServiceThread(const std::shared_ptr<Service>& service, const std::shared_ptr<asio::io_context>& io_context)
{ __builtin_trap() /* STUB: not implemented */; }

void Service::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

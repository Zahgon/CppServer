/*!
    \file tcp_resolver.cpp
    \brief TCP resolver implementation
    \author Ivan Shynkarenka
    \date 08.02.2019
    \copyright MIT License
*/

#include "server/asio/tcp_resolver.h"

namespace CppServer {
namespace Asio {

TCPResolver::TCPResolver(const std::shared_ptr<Service>& service)
    : _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _resolver(*_io_context)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

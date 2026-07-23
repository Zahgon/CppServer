/*!
    \file https_session.cpp
    \brief HTTPS session implementation
    \author Ivan Shynkarenka
    \date 30.04.2019
    \copyright MIT License
*/

#include "server/http/https_session.h"
#include "server/http/https_server.h"

namespace CppServer {
namespace HTTP {

HTTPSSession::HTTPSSession(const std::shared_ptr<HTTPSServer>& server)
    : Asio::SSLSession(server),
      _cache(server->cache())
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSSession::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSSession::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSSession::onReceivedRequestInternal(const HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer

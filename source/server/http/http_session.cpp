/*!
    \file http_session.cpp
    \brief HTTP session implementation
    \author Ivan Shynkarenka
    \date 30.04.2019
    \copyright MIT License
*/

#include "server/http/http_session.h"
#include "server/http/http_server.h"

namespace CppServer {
namespace HTTP {

HTTPSession::HTTPSession(const std::shared_ptr<HTTPServer>& server)
    : Asio::TCPSession(server),
      _cache(server->cache())
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSession::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSession::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSession::onReceivedRequestInternal(const HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer

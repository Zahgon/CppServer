/*!
    \file http_client.cpp
    \brief HTTP client implementation
    \author Ivan Shynkarenka
    \date 08.02.2019
    \copyright MIT License
*/

#include "server/http/http_client.h"

namespace CppServer {
namespace HTTP {

void HTTPClient::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClient::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

std::future<HTTPResponse> HTTPClientEx::SendRequest(const HTTPRequest& request, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::onConnected()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::onReceivedResponse(const HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::onReceivedResponseError(const HTTPResponse& response, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::SetPromiseValue(const HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPClientEx::SetPromiseError(const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer

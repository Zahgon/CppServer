/*!
    \file https_client.cpp
    \brief HTTPS client implementation
    \author Ivan Shynkarenka
    \date 12.02.2019
    \copyright MIT License
*/

#include "server/http/https_client.h"

namespace CppServer {
namespace HTTP {

void HTTPSClient::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClient::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

std::future<HTTPResponse> HTTPSClientEx::SendRequest(const HTTPRequest& request, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::onHandshaked()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::onReceivedResponse(const HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::onReceivedResponseError(const HTTPResponse& response, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::SetPromiseValue(const HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void HTTPSClientEx::SetPromiseError(const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace HTTP
} // namespace CppServer

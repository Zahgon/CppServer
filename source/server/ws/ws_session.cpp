/*!
    \file ws_session.cpp
    \brief WebSocket session implementation
    \author Ivan Shynkarenka
    \date 27.05.2019
    \copyright MIT License
*/

#include "server/ws/ws_session.h"
#include "server/ws/ws_server.h"

namespace CppServer {
namespace WS {

WSSession::WSSession(const std::shared_ptr<WSServer>& server)
    : HTTP::HTTPSession(server)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onDisconnecting()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onReceivedRequestHeader(const HTTP::HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onReceivedRequest(const HTTP::HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSession::onReceivedRequestError(const HTTP::HTTPRequest& request, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSession::ReceiveText()
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSession::ReceiveText(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSession::ReceiveBinary()
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSession::ReceiveBinary(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer

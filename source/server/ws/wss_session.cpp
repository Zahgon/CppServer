/*!
    \file wss_session.cpp
    \brief WebSocket secure session implementation
    \author Ivan Shynkarenka
    \date 28.05.2019
    \copyright MIT License
*/

#include "server/ws/wss_session.h"
#include "server/ws/wss_server.h"

namespace CppServer {
namespace WS {

WSSSession::WSSSession(const std::shared_ptr<WSSServer>& server)
    : HTTP::HTTPSSession(server)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onDisconnecting()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onReceivedRequestHeader(const HTTP::HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onReceivedRequest(const HTTP::HTTPRequest& request)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSSession::onReceivedRequestError(const HTTP::HTTPRequest& request, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSSession::ReceiveText()
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSSession::ReceiveText(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSSession::ReceiveBinary()
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSSession::ReceiveBinary(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer

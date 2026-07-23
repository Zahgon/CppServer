/*!
    \file wss_client.cpp
    \brief WebSocket secure client implementation
    \author Ivan Shynkarenka
    \date 23.05.2019
    \copyright MIT License
*/

#include "server/ws/wss_client.h"

namespace CppServer {
namespace WS {

bool WSSClient::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool WSSClient::Connect(const std::shared_ptr<Asio::TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSSClient::ConnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool WSSClient::ConnectAsync(const std::shared_ptr<Asio::TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onHandshaked()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onDisconnecting()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onReceivedResponseHeader(const HTTP::HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onReceivedResponse(const HTTP::HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void WSSClient::onReceivedResponseError(const HTTP::HTTPResponse& response, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSClient::ReceiveText()
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSSClient::ReceiveText(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSClient::ReceiveBinary()
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSSClient::ReceiveBinary(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer

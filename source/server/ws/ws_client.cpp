/*!
    \file ws_client.cpp
    \brief WebSocket client implementation
    \author Ivan Shynkarenka
    \date 22.05.2019
    \copyright MIT License
*/

#include "server/ws/ws_client.h"

namespace CppServer {
namespace WS {

bool WSClient::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool WSClient::Connect(const std::shared_ptr<Asio::TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSClient::ConnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool WSClient::ConnectAsync(const std::shared_ptr<Asio::TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onConnected()
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onDisconnecting()
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onDisconnected()
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onReceived(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onReceivedResponseHeader(const HTTP::HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onReceivedResponse(const HTTP::HTTPResponse& response)
{ __builtin_trap() /* STUB: not implemented */; }

void WSClient::onReceivedResponseError(const HTTP::HTTPResponse& response, const std::string& error)
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSClient::ReceiveText()
{ __builtin_trap() /* STUB: not implemented */; }

std::string WSClient::ReceiveText(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSClient::ReceiveBinary()
{ __builtin_trap() /* STUB: not implemented */; }

std::vector<uint8_t> WSClient::ReceiveBinary(const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer

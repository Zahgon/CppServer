/*!
    \file tcp_client.cpp
    \brief TCP client implementation
    \author Ivan Shynkarenka
    \date 15.12.2016
    \copyright MIT License
*/

#include "server/asio/tcp_client.h"

namespace CppServer {
namespace Asio {

TCPClient::TCPClient(const std::shared_ptr<Service>& service, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _socket(*_io_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _bytes_pending(0),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _receiving(false),
      _sending(false),
      _send_buffer_flush_offset(0),
      _option_keep_alive(false),
      _option_no_delay(false)
{ __builtin_trap() /* STUB: not implemented */; }

TCPClient::TCPClient(const std::shared_ptr<Service>& service, const std::string& address, const std::string& scheme)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _scheme(scheme),
      _port(0),
      _socket(*_io_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _bytes_pending(0),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _receiving(false),
      _sending(false),
      _send_buffer_flush_offset(0),
      _option_keep_alive(false),
      _option_no_delay(false)
{ __builtin_trap() /* STUB: not implemented */; }

TCPClient::TCPClient(const std::shared_ptr<Service>& service, const asio::ip::tcp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _endpoint(endpoint),
      _socket(*_io_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _bytes_pending(0),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _receiving(false),
      _sending(false),
      _send_buffer_flush_offset(0),
      _option_keep_alive(false),
      _option_no_delay(false)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::Connect(const std::shared_ptr<TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::DisconnectInternal()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::Reconnect()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::ConnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::ConnectAsync(const std::shared_ptr<TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::DisconnectInternalAsync(bool dispatch)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::ReconnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::Send(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::Send(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPClient::SendAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::Receive(void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string TCPClient::Receive(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPClient::Receive(void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string TCPClient::Receive(size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::TrySend()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPClient::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

/*!
    \file ssl_client.cpp
    \brief SSL client implementation
    \author Ivan Shynkarenka
    \date 01.01.2017
    \copyright MIT License
*/

#include "server/asio/ssl_client.h"

namespace CppServer {
namespace Asio {

SSLClient::SSLClient(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _context(context),
      _stream(*_io_context, *_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _handshaking(false),
      _handshaked(false),
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

SSLClient::SSLClient(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, const std::string& address, const std::string& scheme)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _scheme(scheme),
      _port(0),
      _context(context),
      _stream(*_io_context, *_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _handshaking(false),
      _handshaked(false),
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

SSLClient::SSLClient(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, const asio::ip::tcp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _context(context),
      _endpoint(endpoint),
      _stream(*_io_context, *_context),
      _resolving(false),
      _connecting(false),
      _connected(false),
      _handshaking(false),
      _handshaked(false),
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

SSLClient::~SSLClient()
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::Connect(const std::shared_ptr<TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::DisconnectInternal()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::Reconnect()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::ConnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::ConnectAsync(const std::shared_ptr<TCPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::DisconnectInternalAsync(bool dispatch)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::ReconnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::Send(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::Send(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLClient::SendAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::Receive(void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string SSLClient::Receive(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLClient::Receive(void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string SSLClient::Receive(size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::TrySend()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLClient::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

/*!
    \file ssl_session.cpp
    \brief SSL session implementation
    \author Ivan Shynkarenka
    \date 30.12.2016
    \copyright MIT License
*/

#include "server/asio/ssl_session.h"
#include "server/asio/ssl_server.h"

namespace CppServer {
namespace Asio {

SSLSession::SSLSession(const std::shared_ptr<SSLServer>& server)
    : _id(CppCommon::UUID::Sequential()),
      _server(server),
      _io_context(server->service()->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_server->_strand_required),
      _stream(*_io_context, *server->context()),
      _connected(false),
      _handshaked(false),
      _bytes_pending(0),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _receiving(false),
      _sending(false),
      _send_buffer_flush_offset(0)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::Disconnect(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLSession::DisconnectAsync(bool dispatch)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::Send(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::Send(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLSession::SendAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::Receive(void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string SSLSession::Receive(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t SSLSession::Receive(void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string SSLSession::Receive(size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::TrySend()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::ResetServer()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLSession::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

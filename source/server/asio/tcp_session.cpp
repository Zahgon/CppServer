/*!
    \file tcp_session.cpp
    \brief TCP session implementation
    \author Ivan Shynkarenka
    \date 14.12.2016
    \copyright MIT License
*/

#include "server/asio/tcp_session.h"
#include "server/asio/tcp_server.h"

namespace CppServer {
namespace Asio {

TCPSession::TCPSession(const std::shared_ptr<TCPServer>& server)
    : _id(CppCommon::UUID::Sequential()),
      _server(server),
      _io_context(server->service()->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_server->_strand_required),
      _socket(*_io_context),
      _connected(false),
      _bytes_pending(0),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _receiving(false),
      _sending(false),
      _send_buffer_flush_offset(0)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPSession::Disconnect(bool dispatch)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::Send(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::Send(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool TCPSession::SendAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::Receive(void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string TCPSession::Receive(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t TCPSession::Receive(void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string TCPSession::Receive(size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::TrySend()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::ResetServer()
{ __builtin_trap() /* STUB: not implemented */; }

void TCPSession::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer

#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include "message_parser.hpp"
#include "token.hpp"
#include <string>
#include <vector>

namespace MLSF
{

///class to conver message to tokens
class Tokenizer
{

public:
    Tokenizer(const MessageParser& messageParser);

private:
    const MessageParser messageParser_;
};

} //namespace MLSF
#endif

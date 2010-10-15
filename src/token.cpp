#include "token.hpp"

namespace MLSF
{

Token::Token (const std::string& word):
    hash_(word)
{
}

const std::string& Token::hash()
{
    return hash_;
}

}//namespace MLSF

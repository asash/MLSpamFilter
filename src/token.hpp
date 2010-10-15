#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
namespace MLSF
{

class Token
{

public:
    Token (const std::string& word);
    const std::string& hash();

private:
    std::string hash_;

};

}// namespace MLSF

#endif

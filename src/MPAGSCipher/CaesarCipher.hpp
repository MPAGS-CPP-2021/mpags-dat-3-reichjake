#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include <vector>
#include <CipherMode.hpp>

class CaesarCipher
{
  public:
  explicit CaesarCipher(const std::size_t key);
  explicit CaesarCipher(const std::string key);
  std::string applyCipher(const std::string& inputText, const CipherMode encrypt) const;

  private:
    const std::vector<char> alphabet = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const std::size_t alphabetSize{alphabet.size()};

    std::size_t key_{0};
};


#endif    // MPAGSCIPHER_CAESARCIPHER_HPP

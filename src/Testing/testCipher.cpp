//! Test that Catch works
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"


TEST_CASE("Encryption k=5 works","[alphanumeric]"){
  const std::string encryption("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  const std::string decryption("FGHIJKLMNOPQRSTUVWXYZABCDE");
  CaesarCipher cipher {5};
//  REQUIRE(CaesarCipher::applyCipher(encryption, CipherMode::encrypt) == decryption);
 std::string outputText{cipher.applyCipher(encryption, CipherMode::encrypt)};
  REQUIRE(outputText== decryption);
}

TEST_CASE("Decryption k=5 works","[alphanumeric]"){
  const std::string encryption("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  const std::string decryption("FGHIJKLMNOPQRSTUVWXYZABCDE");
  CaesarCipher cipher {5};
//  REQUIRE(CaesarCipher::applyCipher(decryption, CipherMode::decrypt) == encryption);
std::string outputText{cipher.applyCipher(decryption, CipherMode::decrypt)};
  REQUIRE(outputText == encryption);
}

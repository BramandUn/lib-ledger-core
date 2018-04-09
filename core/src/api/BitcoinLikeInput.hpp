// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEINPUT_HPP
#define DJINNI_GENERATED_BITCOINLIKEINPUT_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class Amount;

/**Class representing Bitcoin inputs */
class BitcoinLikeInput {
public:
    virtual ~BitcoinLikeInput() {}

    /**
     *Get address that spends the input
     *@return Optional String, address emmiting input
     */
    virtual std::experimental::optional<std::string> getAddress() = 0;

    /**
     *Get amount of input
     *@return Optional Amount object, amount of input
     */
    virtual std::shared_ptr<Amount> getValue() = 0;

    /**
     *Check whether input
     *@return Boolean, true if input belongs to coinbase transaction (reward for mining a block)
     */
    virtual bool isCoinbase() = 0;

    /**
     *Stored data cointained in coinbase
     *@return Optional String
     */
    virtual std::experimental::optional<std::string> getCoinbase() = 0;

    /**
     *Get hash of previous transaction that generates that input
     *@return Optional String, hash of previous transaction (null if coinbase)
     */
    virtual std::experimental::optional<std::string> getPreviousTxHash() = 0;

    /**
     *Get output index, it identifies which UTXO from tht transaction to spend
     *@return Optional 32 bits integer, index of previous transaction
     */
    virtual std::experimental::optional<int32_t> getPreviousOutputIndex() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEINPUT_HPP

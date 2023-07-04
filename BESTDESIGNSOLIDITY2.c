" Design 1" 

contract Counter {

	uint public count;

    // Function to get the current count
    function get() public view returns (uint) {
        return count;
    }

    // Function to increment count by 1
    function inc() public {
        count += 1;
    }

    // Function to decrement count by 1
    function dec() public {
        count -= 1;
    }
}

" Design 2" 

contract Immutable {

     // coding convention to uppercase constant variables
    address public immutable MY_ADDRESS;
    uint public immutable MY_UINT;

    constructor(uint _myUint) {
        MY_ADDRESS = msg.sender;
        MY_UINT = _myUint;
    }
}

"Design 3"

View function declares that no state will be changed.
Pure function declares that no state variable will be changed or read.

// SPDX-License-Identifier: MIT
pragma solidity ^0.8.10;

contract ViewAndPure {
    uint public x = 1;

    // Promise not to modify the state.
    function addToX(uint y) public view returns (uint) {
        return x + y;
    }

    // Promise not to modify or read from the state.
    function add(uint i, uint j) public pure returns (uint) {
        return i + j;
    }
}

" Design 4" 

External - Can be accessed externally only. 
Internal - Contracts within the system and contracts deriving from them can access. 
Private - Can be accessed only by authorized contracts
Public - Can be accessed by all contracts. 

public - all can access
external - Cannot be accessed internally, only externally
internal - only this contract and contracts deriving from it can access
private - can be accessed only from this contract
payable -modifier means that the function can process transactions 
with non-zero Ether value.
If a transaction that transfers Ether comes to the contract 
and calls some function X, then if this function X does not 
have the payable modifier, then the transaction will be rejected


contract UniDirectionalPaymentChannel  {

function _getHash(uint _amount) private view returns (bytes32) {

}

 function getHash(uint _amount) external view returns (bytes32) {
        return _getHash(_amount);
    }

}

}

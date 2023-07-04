
" Design 1 Object composition in Solidity"

contract EtherGame {

uint public targetAmount = 7 ether;
address public winner;

}

contract Attack {

    EtherGame etherGame;

}

" Design 2 "

contract CSAMM {

    IERC20 public immutable token0;
    IERC20 public immutable token1;

    uint public reserve0;
    uint public reserve1;

    uint public totalSupply;
    mapping(address => uint) public balanceOf;

}

interface IERC20 {

}
" Design 1" 

contract Constants {
    // coding convention to uppercase constant variables
    address public constant MY_ADDRESS = 0x777788889999AaAAbBbbCcccddDdeeeEfFFfCcCc;
    uint public constant MY_UINT = 123;

    address[] memory ret = new address[](addressRegistryCount);

}

" Design 2" 

     function foo() public pure returns (string memory) {
        return "A";
    }

 uint[] public arr;

 function getArr() public view returns (uint[] memory) {
        return arr;
    }

contract Constants {

  function verify(uint _amount, bytes memory _sig) external view returns (bool) {
        return _verify(_amount, _sig);
    }

}

" Design 2.1 "

contract IfElse {
    function foo(uint x) public pure returns (uint) {
        if (x < 10) {
            return 0;
        } else if (x < 20) {
            return 1;
        } else {
            return 2;
        }
    }

}

contract Loop {
    function loop() public {
        // for loop
        for (uint i = 0; i < 10; i++) {
            if (i == 3) {
                // Skip to next iteration with continue
                continue;
            }
            if (i == 5) {
                // Exit loop with break
                break;
            }
        }

        // while loop
        uint j;
        while (j < 10) {
            j++;
        }
    }
}




" Design 3"

        uint[] memory a = new uint[](5);
       uint[]    memory id = new uint[](2);
       string[]  memory name = new string[](2);
       uint[]    memory balance = new uint[](2);

 pragma solidity ^0.5.0;

contract ReturnMapping {
    mapping(address => uint) myMapping;
    
    //ideal solution
    function returnMappingValue(address _key) public view returns (uint) {
        return myMapping[_key];
    }  
}


pragma solidity ^0.4.25;

contract MappingTest {
    mapping(uint=>address) public addresses;
    uint addressRegistryCount;

    function set(address userAddress) public{
        addresses[addressRegistryCount] = userAddress;
        addressRegistryCount++;
    }

    function getAll() public view returns (address[] memory){
        address[] memory ret = new address[](addressRegistryCount);
        for (uint i = 0; i < addressRegistryCount; i++) {
            ret[i] = addresses[i];
        }
        return ret;
    }
}

" Design 4"


contract Project
{
    struct Person {
        string name;
        uint funds;
    }
    
    // this is the mapping for which we want the
    // compiler to automatically generate a getter.
    mapping(address => Person) public people;
    
    // this is what the automatically generated getter
    // looks like (we don't need to implement this ourselves).

    function getPerson(address id)   public   returns (string name, uint funds)
    {
        // copy the data into memory
        Person memory p = people[id];
        
        // break the struct's members out into a tuple
        // in the same order that they appear in the struct
        return (p.name, p.funds);
    }
}


" Example 2"

pragma solidity ^0.4.13;

contract Project
{
    struct Person {
        address addr;
        uint funds;
    }
    
    Person[] people;
    
    function getPeople(uint[] indexes)         public         returns (address[], uint[])
    {
        address[] memory addrs = new address[](indexes.length);
        uint[]    memory funds = new uint[](indexes.length);
        
        for (uint i = 0; i < indexes.length; i++) {
            Person storage person = people[indexes[i]];
            addrs[i] = person.addr;
            funds[i] = person.funds;
        }
        
        return (addrs, funds);
    }
}

" Design 5" 

pragma solidity ^0.5.0;

contract ReturnMapping {

    mapping(address => uint) myMapping;
    
    //this won't work:
    /*
    function returnMapping() public view returns (mapping(address => uint)) {
        return myMapping;
    }
    */
}


" Design 7 " 

Arrays 

1.  Array copy one value to another array
2.  Do array of object copy value 
3.  Initilaisation of array of objects 
4.  
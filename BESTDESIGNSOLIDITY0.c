ABI decode : utube


 ******** Creators ************
1.  Different Library                    25%
2.  Design of the program flow    25%
*******************************
3.  Product process customer       25%
4.  Experience                            25%


" Design 1 "

contract Variables {

    // State variables are stored on the blockchain.
    string public text = "Hello";
    uint public num = 123;

    }

" Design 2 "

contract Array {

    // Several ways to initialize an array
    uint[] public arr;
    uint[] public arr2 = [1, 2, 3];
    // Fixed sized array, all elements initialize to 0
    uint[10] public myFixedSizeArr;

}

" Design 3"

contract Todos {

    struct Todo {
        string text;
        bool completed;
    }

    // object of 'Todo' structs
    Todo public charan;

}

" Design 4 "

contract Enum {
    // Enum representing shipping status
    enum Status {
        Pending,
        Shipped,
        Accepted,
        Rejected,
        Canceled
    }

    // Default value is the first element listed in
    // definition of the type, in this case "Pending"
    Status public charan;

}

" Design 5"

contract Variables {

 // State variables are stored on the blockchain.
    string public text = "Hello";
     uint public num = 123;

       function doSomething( int  i ) public {
        // Local variables are not saved to the blockchain.
        uint i = 456;

        // Here are some global variables
        uint timestamp = block.timestamp; // Current block timestamp
        address sender = msg.sender; // address of the caller
    }
}

" Design 6"


contract Mapping {
    // Mapping from address to uint
    mapping(address => uint) public myMap;

}




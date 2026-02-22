// Forward Iterator supports:

// *it      → value access
// ++it     → next element
// == , !=  → comparison

// ❌ --it not allowed
// ❌ it+N not allowed
// ❌ it[N] not allowed

// Supported Containers:
// forward_list
// unordered_set
// unordered_map






// Random Access Iterator supports:

// *it        → value access
// ++it       → next element
// --it       → previous element
// it + N     → N steps forward
// it - N     → N steps backward
// it[N]      → index access

// Supported Containers:
// vector
// deque
// array









// Forward Iterator      → only ++ allowed
// Bidirectional Iterator→ ++ and -- allowed

// Supported Containers:
// list
// set
// map

// Important Operators:
// *it      → value access
// ++it     → next element
// --it     → previous element
// it->first  → key (in map)
// it->second → value (in map)
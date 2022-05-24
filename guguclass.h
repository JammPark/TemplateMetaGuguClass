template <std::size_t C, std::size_t R, std::size_t... L>
constexpr auto &GuguClass = GuguClass<C, R, C, R>;
template <std::size_t C, std::size_t R, std::size_t I, std::size_t J, std::size_t... L>
constexpr auto &GuguClass<C, R, I, J, L...> = GuguClass<C, R, I, J - 1, I * J, L...>;
template <std::size_t C, std::size_t R, std::size_t I, std::size_t... L>
constexpr auto &GuguClass<C, R, I, 1, L...> = GuguClass<C, R, I - 1, R, I, L...>;
template <std::size_t C, std::size_t R, std::size_t... L>
constexpr int GuguClass<C, R, 1, 1, L...>[C][R] = {1, L...};

#include "share_card.hpp"
#include "item.hpp"

class Faction
{
    public:
    enum class BasicFactionType
    {
        Marquis_de_Cat,
        Eyrie_Dynasties,
        Woodland_Alliance,
        Vagabond
    };
    enum class Warrior
    {
        Cat,
        Bird,
        Mouse,
    };
    enum class Building
    {
        Keep,
        Roost,
        Burrow,
        Sawmill,
        Workshop,
        Recruiter,
        Trading_Post
    };
    enum class Token
    {
        Wood,
        Stone,
        Food,
        Card,
        VictoryPoint
    };
    private:
        BasicFactionType type;
        int warrior;

}
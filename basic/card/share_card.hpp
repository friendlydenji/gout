#include <string>
#include <variant>
#include <optional>
#include "effect.hpp"
/* card suits */
enum class Suit
{
    Fox,
    Mouse,
    Rabbit,
    Bird,
    Any
};

class ShareCard {
    public:
    enum class CardEffectType
    {
        Ambush,
        Dominance,
        ImmediateCrafting,
        PersistentCrafting
    };
    enum class BirdCraftCard 
    {
        WoodlandRunners,
        Crossbow,
        BirdyBindle,
        ArmsTrader,
        Armorers,
        RoyalClaim,
        BrutalTactics,
        Sappers
    };
    enum class FoxCraftCard 
    {
        FavoroftheFoxes,
        TravelGear,
        ProtectionRacket,
        Anvil,
        GentlyUsedKnapsack,
        FoxfolkSteel,
        RootTea,
        StandandDeliver,
        TaxCollector
    };
    enum class MouseCraftCard
    {
        FavoroftheMice,
        TravelGear,
        Investments,
        Crossbow,
        Mouse_in_a_Sack,
        Sword,
        RootTea,
        Codebreakers,
        ScoutingParty
    };
    enum class RabbitCraftCard
    {
        Ambush,
        Dominance,
        FavoroftheRabbit,
        AVisittoFriends,
        BakeSale,
        SmugglersTrail,
        RootTea,
        CommandWarren,
        Cobbler,
        BetterBurrowBank,
    };
        CardDescription(Suit s, CardEffectType e, 
            std::optional<std::variant<BirdCraftCard, FoxCraftCard, MouseCraftCard, RabbitCraftCard>> c,
            std::optional<std::set <Suit>> i) : 
            cardSuit(s), effectType(e), craftingEffect(c), craftingIngredients(i) 
        {
            cardNameAutoMapping();
        }
        Suit getCardSuit() const;
        std::string getCardName() const;
        std::optional<std::variant<BirdCraftCard, FoxCraftCard, MouseCraftCard, RabbitCraftCard>> getCraftingEffect() const;
    private:    
        Suit cardSuit;
        std::optional<std::set <Suit>> craftingIngredients;
        std::string name;
        CardEffectType effectType;
        std::variant<BirdCraftCard, FoxCraftCard, MouseCraftCard, RabbitCraftCard> craftingEffect;
        void cardNameAutoMapping();
};
#include <share_card.hpp>
#include <unordered_set>

std::unordered_multiset <ShareCard> shareDeck;

void shareBirdCardCreate()
{
    /* bird ambush */
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::Ambush, std::nullopt, std::nullopt});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::Ambush, std::nullopt, std::nullopt});
    /* bird dominance */
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::Dominance, std::nullopt, std::nullopt});
    /* bird immediate crafting */
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::BirdCraftCard::WoodlandRunners,      {{Suit::Rabbit}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::BirdCraftCard::Crossbow,             {{Suit::Fox}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::BirdCraftCard::BirdyBindle,          {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::BirdCraftCard::ArmsTrader,           {{Suit::Fox, Suit::Fox}}});
    /* bird persistent crafting */
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::Armorers,             {{Suit::Fox}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::Armorers,             {{Suit::Fox}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::RoyalClaim,           {{Suit::Any, Suit::Any, Suit::Any, Suit::Any}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::BrutalTactics,        {{Suit::Fox, Suit::Fox}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::BrutalTactics,        {{Suit::Fox, Suit::Fox}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::Sappers,              {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Bird, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::BirdCraftCard::Sappers,              {{Suit::Mouse}}});
}

void shareFoxCardCreate()
{
    /* fox ambush */
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::Ambush, std::nullopt, std::nullopt});
    /* fox dominance */
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::Dominance, std::nullopt, std::nullopt});
    /* fox immediate crafting */
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::FavoroftheFoxes,       {{Suit::Fox, Suit::Fox, Suit::Fox}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::TravelGear,            {{Suit::Rabbit}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::ProtectionRacket,      {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::Anvil,                 {{Suit::Fox}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::GentlyUsedKnapsack,    {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::FoxfolkSteel,          {{Suit::Fox, Suit::Fox}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::FoxCraftCard::RootTea,               {{Suit::Mouse}}});
    /* fox persistent crafting */
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::FoxCraftCard::StandandDeliver,       {{Suit::Mouse, Suit::Mouse, Suit::Mouse}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::FoxCraftCard::StandandDeliver,       {{Suit::Mouse, Suit::Mouse, Suit::Mouse}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::FoxCraftCard::TaxCollector,          {{Suit::Rabbit, Suit::Fox, Suit::Mouse}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::FoxCraftCard::TaxCollector,          {{Suit::Rabbit, Suit::Fox, Suit::Mouse}}});
    shareDeck.emplace({Suit::Fox, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::FoxCraftCard::TaxCollector,          {{Suit::Rabbit, Suit::Fox, Suit::Mouse}}});
}

void shareMouseCardCreate()
{
    /* mouse ambush */
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::Ambush, std::nullopt, std::nullopt});
    /* mouse dominance */
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::Dominance, std::nullopt, std::nullopt});
    /* mouse immediate crafting */
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::FavoroftheMice,      {{Suit::Mouse, Suit::Mouse, Suit::Mouse}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::TravelGear,          {{Suit::Rabbit}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::Investments,         {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::Crossbow,            {{Suit::Fox}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::Mouse_in_a_Sack,     {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::Sword,               {{Suit::Fox, Suit::Fox}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::MouseCraftCard::RootTea,             {{Suit::Mouse}}});
    /* mouse persistent crafting */
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::MouseCraftCard::Codebreakers,        {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::MouseCraftCard::Codebreakers,        {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::MouseCraftCard::ScoutingParty,       {{Suit::Mouse, Suit::Mouse}}});
    shareDeck.emplace({Suit::Mouse, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::MouseCraftCard::ScoutingParty,       {{Suit::Mouse, Suit::Mouse}}});

}

void shareRabbitCardCreate()
{ 
    /* rabbit ambush */
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::Ambush, std::nullopt, std::nullopt});
    /* rabbit dominance */
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::Dominance, std::nullopt, std::nullopt});
    /* rabbit immediate crafting */
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::RabbitCraftCard::FavoroftheRabbit,   {{Suit::Rabbit, Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::RabbitCraftCard::AVisittoFriends,    {{Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::RabbitCraftCard::BakeSale,           {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::RabbitCraftCard::SmugglersTrail,     {{Suit::Mouse}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::ImmediateCrafting, 
        ShareCard::RabbitCraftCard::RootTea,            {{Suit::Mouse}}});
    /* rabbit persistent crafting */
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::CommandWarren,      {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::CommandWarren,      {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::Cobbler,            {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::Cobbler,            {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::BetterBurrowBank,   {{Suit::Rabbit, Suit::Rabbit}}});
    shareDeck.emplace({Suit::Rabbit, ShareCard::CardEffectType::PersistentCrafting, 
        ShareCard::RabbitCraftCard::BetterBurrowBank,   {{Suit::Rabbit, Suit::Rabbit}}});
}

void shareDeckCreate()
{
    shareDeck.clear();
    shareBirdCardCreate();
    shareFoxCardCreate();
    shareMouseCardCreate();
    shareRabbitCardCreate();

    std::cout << "Share Deck Created. Total Cards: " << shareDeck.size() << std::endl;
    if (shareDeck.size() != 54)
    {
        throw std::runtime_error("Error: Share Deck size is not 54. Actual size: " + std::to_string(shareDeck.size()));
    }

    for (auto &card : shareDeck)
    {
        std::cout << "Card Name: " << card.getCardName() << ", Suit: " << static_cast<int>(card.getCardSuit()) << std::endl;
    }
}
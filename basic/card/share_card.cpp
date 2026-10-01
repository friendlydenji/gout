#include "share_card.hpp"

Suit ShareCard::getCardSuit() const {
    return cardSuit;
}

std::string ShareCard::getCardName() const {
    return name;
}

std::variant<BirdCraftCard, FoxCraftCard, MouseCraftCard, RabbitCraftCard> ShareCard::getCraftingEffect() const {
    return craftingEffect;
}

void ShareCard::cardNameAutoMapping() 
{
    std::string suitName = (cardSuit == Suit::Bird) ? "Bird" :
                           (cardSuit == Suit::Fox) ? "Fox" :
                           (cardSuit == Suit::Mouse) ? "Mouse" :
                           (cardSuit == Suit::Rabbit) ? "Rabbit" : "Unknown";
    switch (effectType)
    {
        case CardEffectType::Ambush:
            name = suitName + " Ambush!";
            break;
        case CardEffectType::Dominance:
            name = suitName + " Dominance";
            break;
        default:
            break;
    }
    if (name.empty()) 
    {
        if (auto* bird = std::get_if<BirdCraftCard>(&card)) 
        {
            switch (*bird) {
                case BirdCraftCard::WoodlandRunners:
                    name = "Woodland Runners";
                    break;
                case BirdCraftCard::Crossbow:
                    name = "Crossbow";
                    break;
                case BirdCraftCard::BirdyBindle:
                    name = "Birdy Bindle";
                    break;
                default:
                    break;
            }
        }
        else if (auto* fox = std::get_if<FoxCraftCard>(&card)) 
        {
            switch (*fox) {
                case FoxCraftCard::FavoroftheFoxes:
                    name = "Favor of the Foxes";
                    break;
                default:
                    break;
            }
        }
        else if (auto* mouse = std::get_if<MouseCraftCard>(&card)) 
        {
            switch (*mouse) {
                case MouseCraftCard::Crossbow:
                    name = "Crossbow";
                    break;
                default:
                    break;
            }
        }
        else if (auto* rabbit = std::get_if<RabbitCraftCard>(&card)) 
        {
            switch (*rabbit) {
                case RabbitCraftCard::Ambush:
                    name = "Ambush";
                    break;
                default:
                    break;
            }
        }
    }
}    
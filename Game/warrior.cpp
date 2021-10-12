//==================================
// Casual Mock Skirmish
//----------------------------------
// Class: CIS-164 Advanced C++
//----------------------------------
// Reckless Alliance (Contributors):
//     - Noah Allan Ertz
//     - Tanner Babcock
//     - Owen Miner
//     - Lukas Lawler
//     - Gage Decker
//     - Jeffrey Garretto
//----------------------------------
// License: AGPL-3.0
// ---------------------------------
// 2021
//==================================

#include "warrior.h"

// Constructor(s) =============================================================================================================
// Main
Warrior::Warrior(std::string warrior_type, std::string warrior_name, unsigned int health_capacity, std::vector<Attack> attacks)
    : type(warrior_type)
    , name(warrior_name)
    , health(health_capacity)
    , attacks(attacks) { }
// ============================================================================================================================

// Destructor ===========
// Main
Warrior::~Warrior(void) {
    type = "";
    name = "";
    health = 0;
}
// ======================

// Mutator(s) ============================================
// Health (Receive Damage)
void Warrior::receive_damage(unsigned int damage_amount) {
    if (damage_amount > health) {
        this->health = 0;
    } else {
        this->health -= damage_amount;
    }
}
// =======================================================

// Accessor(s) ===============================
// Warrior Type
std::string Warrior::get_type(void) const {
    return type;
}

// Warrior Individual Name
std::string Warrior::get_name(void) const {
    return name;
}

// Health Amount
unsigned int Warrior::get_health(void) const {
    return health;
}
// ===========================================

// Function(s) =================================================
// Attack 1 Opponent
bool Warrior::attack(Warrior *opponent, Attack &chosen_attack) {
    chosen_attack = attacks[rand() % attacks.size()];

    return chosen_attack.execute(opponent);
}

// Alive Verification
bool Warrior::is_alive(void) const {
    return health > 0;
}
// =============================================================

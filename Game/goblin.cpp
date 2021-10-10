#include "goblin.h"

// Constructor(s) ============================
// Goblin Name To Base Main
Goblin::Goblin(std::string goblin_name): Warrior("Goblin", goblin_name, 150) {
    choose_attacks();
}
// ===========================================

// Populate Goblin Attacks
void Goblin::choose_attacks(void) {
    attacks.push_back((Attack){
        .name = "Flare Burn",
        .value = 35,
        .maxtargets = 1
    });
    attacks.push_back((Attack){
        .name = "Pitchfork Stab",
        .value = 40,
        .maxtargets = 1
    });
}

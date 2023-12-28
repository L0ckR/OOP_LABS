#include "npc.hpp"
#include "visitor.hpp"
#include "elf.hpp"
#include "druid.hpp"
#include "dragon.hpp"

NPCVisitor::NPCVisitor(std::shared_ptr<NPC> attacker) : attacker_(attacker) {}

bool NPCVisitor::visit(Elf& elf) {
    return attacker_->fight(std::make_shared<Elf>(elf));
}

bool NPCVisitor::visit(Druid& druid) {
    return attacker_->fight(std::make_shared<Druid>(druid));
}

bool NPCVisitor::visit(Dragon& dragon) {
    return attacker_->fight(std::make_shared<Dragon>(dragon));
}
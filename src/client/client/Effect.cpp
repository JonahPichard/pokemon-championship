#include "Effect.hpp"

namespace client {

Effect::Effect() : operation{0}, value{0.f}, targetSelf{false} {
}

void Effect::setOperator (int operation){
    this->operation = operation;
}

void Effect::setValue (float value){
    this->value = value;
}

void Effect::setTarget (bool self){
    this->targetSelf = self;
}

std::string Effect::getStringOperator (){
    std::string operation;
    switch (this->operation){
        case 0:
            operation = "add";
            break;
        case 1:
            operation = "mult";
            break;
        default:
            operation = "undefined";
            break;
    }
    return operation;
}

/// returns all fields of the instance in a nicely formatted string for printing to console
std::string Effect::getFormattedStats (){
    std::string formatted = "\toperation :\t" + this->getStringOperator() + "\n";
    formatted += "\tvalue :\t\t" + std::to_string(this->value) + "\n";
    formatted += "\ttarget :\t" + std::to_string(this->targetSelf) + "\n";
    return formatted;
}
/// export the effect as a JSON string
std::string Effect::jsonExport (){
    std::string json = "{\"operation\":" + std::to_string(this->operation) + ",\"value\":" + std::to_string(this->value) + ",\"targetSelf\":" + std::to_string(this->targetSelf) + "}";
    return json;
}
// Setters and Getters
};

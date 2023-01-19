#include "string"

enum Suite {Heart, Diamond, Spade, Club};

std::string enumToString(Suite s){
    switch(s){
        case Heart: {
            return "Heart";
            break;
        }
            case Diamond: {
            return "Diamond";
            break;
        }
            case Spade: {
            return "Spade";
            break;
        }
            case Club: {
            return "Club";
            break;
        }
            default: {
            return "something went wrong";
            break;
            }
    }
}

std::ostream& operator<<(std::ostream& os, const Suite& suite){
    os << enumToString(suite);
    return os;
}
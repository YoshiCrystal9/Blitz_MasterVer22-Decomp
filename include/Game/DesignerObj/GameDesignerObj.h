#ifndef BLITZ_GAMEDESIGNEROBJ_H
#define BLITZ_GAMEDESIGNEROBJ_H

namespace Game {

    class DesignerObj {
    public:
        bool isHalfDrawFPS_() const;
    };

    class DesignerObjNoCulling{
    public:
        bool isAbleToBeCulled() const;
    };
} // Game

#endif //BLITZ_GAMEDESIGNEROBJ_H

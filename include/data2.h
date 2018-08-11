#ifndef GUARD_DATA2_H
#define GUARD_DATA2_H

#include "constants/species.h"

struct MonCoords
{
    // This would use a bitfield, but some function
    // uses it as a u8 and casting won't match.
    u8 coords; // u8 x:4, y:4;
    u8 y_offset;
};

extern struct MonCoords gTrainerBackPicCoords[];
extern struct MonCoords gTrainerFrontPicCoords[];

extern const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1];
extern const u8 gMoveNames[][13];
extern struct CompressedSpriteSheet gUnknown_0831C620;
extern struct CompressedSpritePalette gUnknown_0831C628;
extern const struct SpriteTemplate gUnknown_0831C688;
extern const struct CompressedSpriteSheet gMonBackPicTable[NUM_SPECIES];

#endif // GUARD_DATA2_H

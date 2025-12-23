//JB: 1
#include "lines.ih"

    // by 

LinesData &dataContainer()
{
    static LinesData container;
    return container;
}

/* JB:
 * I'm not opposed to this.
 * It's not what we did, but it's not worse IMO.
 * It shields the entire static part from the user. You could construe that as
 * hiding stuff the user might want to be aware of. Then again, perhaps that
 * is the point.
 *
 * 
 */

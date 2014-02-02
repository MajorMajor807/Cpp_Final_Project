#ifndef _NBODY_BODY_H
#define _NBODY_BODY_H

#include <nbody/VECTOR3.h>

namespace nbody {
        class Body {

                Vector3d _r, _v, _a;
                double _m;

                public:

//		Body() : _r{} _v{} _a{} {}
		Body(Vector3d r_, Vector3d v_, Vector3d a_, double m_) : _r(r_), _v(v_), _a(a_), _m(m_) {}

                // Getters
                Vector3d get_r() const {return _r;}
                Vector3d get_v() const {return _v;}
                Vector3d get_a() const {return _a;}
                double get_m() const {return _m;};

                // Setters
                void set_r(Vector3d new_r) { _r = new_r;};
                void set_v(Vector3d new_v) { _v = new_v;};
                void set_a(Vector3d new_a) { _a = new_a;};
                void set_m(double new_m) { _m = new_m;};

        };
} //namespace nbody

#endif // _NBODY_BODY_H

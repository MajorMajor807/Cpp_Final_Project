#ifndef _NBODY_BODY_H
#define _NBODY_BODY_H

#include <nbody/VECTOR3.h>

namespace nbody {
        class Body {

                Vector3f _r, _v, _a;
                float _m;

                public:

//		Body() : _r{} _v{} _a{} {}
		Body(Vector3f r_, Vector3f v_, Vector3f a_, float m_) : _r(r_), _v(v_), _a(a_), _m(m_) {}

                // Getters
                Vector3f get_r() const {return _r;}
                Vector3f get_v() const {return _v;}
                Vector3f get_a() const {return _a;}
                float get_m() const {return _m;};

                // Setters
                void set_r(Vector3f new_r) { _r = new_r;};
                void set_v(Vector3f new_v) { _v = new_v;};
                void set_a(Vector3f new_a) { _a = new_a;};
                void set_m(float new_m) { _m = new_m;};

        };
} //namespace nbody

#endif // _NBODY_BODY_H

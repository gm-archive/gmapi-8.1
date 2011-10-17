/* Copyright (c) 2011 William Newbery
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 * 
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 * 
 * 1. The origin of this software must not be misrepresented; you must not
 * claim that you wrote the original software. If you use this software
 * in a product, an acknowledgment in the product documentation would be
 * appreciated but is not required.
 * 
 * 2. Altered source versions must be plainly marked as such, and must not be
 * misrepresented as being the original software.
 * 
 * 3. This notice may not be removed or altered from any source
 * distribution.
 */
//Auto-Generated File
#ifndef GMAPI_FUNCTIONS_PARTICLES_HPP
#define GMAPI_FUNCTIONS_PARTICLES_HPP
#include "../Function.hpp"
#include "../Types.hpp"
namespace gm
{
    /**@addtogroup gm_functions*/
    ///@{
    inline void effect_create_below(Real kind, Real x, Real y, Real size, Real color)
    {
        call(functions[570], kind, x, y, size, color);
    }
    
    inline void effect_create_above(Real kind, Real x, Real y, Real size, Real color)
    {
        call(functions[571], kind, x, y, size, color);
    }
    
    inline void effect_clear()
    {
        call(functions[572]);
    }
    
    inline Real part_type_create()
    {
        return call(functions[573]);
    }
    
    inline void part_type_destroy(Real ind)
    {
        call(functions[574], ind);
    }
    
    inline Real part_type_exists(Real ind)
    {
        return call(functions[575], ind);
    }
    
    inline void part_type_clear(Real ind)
    {
        call(functions[576], ind);
    }
    
    inline void part_type_shape(Real ind, Real shape)
    {
        call(functions[577], ind, shape);
    }
    
    inline void part_type_sprite(Real ind, Real sprite, Real animat, Real stretch, Real random)
    {
        call(functions[578], ind, sprite, animat, stretch, random);
    }
    
    inline void part_type_size(Real ind, Real size_min, Real size_max, Real size_incr, Real size_wiggle)
    {
        call(functions[579], ind, size_min, size_max, size_incr, size_wiggle);
    }
    
    inline void part_type_scale(Real ind, Real xscale, Real yscale)
    {
        call(functions[580], ind, xscale, yscale);
    }
    
    inline void part_type_orientation(Real ind, Real ang_min, Real ang_max, Real ang_incr, Real ang_wiggle, Real ang_relative)
    {
        call(functions[581], ind, ang_min, ang_max, ang_incr, ang_wiggle, ang_relative);
    }
    
    inline void part_type_color1(Real ind, Real color1)
    {
        call(functions[582], ind, color1);
    }
    
    inline void part_type_color2(Real ind, Real color1, Real color2)
    {
        call(functions[583], ind, color1, color2);
    }
    
    inline void part_type_color3(Real ind, Real color1, Real color2, Real color3)
    {
        call(functions[584], ind, color1, color2, color3);
    }
    
    inline void part_type_color_mix(Real ind, Real color1, Real color2)
    {
        call(functions[585], ind, color1, color2);
    }
    
    inline void part_type_color_rgb(Real ind, Real rmin, Real rmax, Real gmin, Real gmax, Real bmin, Real bmax)
    {
        call(functions[586], ind, rmin, rmax, gmin, gmax, bmin, bmax);
    }
    
    inline void part_type_color_hsv(Real ind, Real hmin, Real hmax, Real smin, Real smax, Real vmin, Real vmax)
    {
        call(functions[587], ind, hmin, hmax, smin, smax, vmin, vmax);
    }
    
    inline void part_type_alpha1(Real ind, Real alpha1)
    {
        call(functions[588], ind, alpha1);
    }
    
    inline void part_type_alpha2(Real ind, Real alpha1, Real alpha2)
    {
        call(functions[589], ind, alpha1, alpha2);
    }
    
    inline void part_type_alpha3(Real ind, Real alpha1, Real alpha2, Real alpha3)
    {
        call(functions[590], ind, alpha1, alpha2, alpha3);
    }
    
    inline void part_type_blend(Real ind, Real additive)
    {
        call(functions[591], ind, additive);
    }
    
    inline void part_type_life(Real ind, Real life_min, Real life_max)
    {
        call(functions[592], ind, life_min, life_max);
    }
    
    inline void part_type_step(Real ind, Real step_number, Real step_type)
    {
        call(functions[593], ind, step_number, step_type);
    }
    
    inline void part_type_death(Real ind, Real death_number, Real death_type)
    {
        call(functions[594], ind, death_number, death_type);
    }
    
    inline void part_type_speed(Real ind, Real speed_min, Real speed_max, Real speed_incr, Real speed_wiggle)
    {
        call(functions[595], ind, speed_min, speed_max, speed_incr, speed_wiggle);
    }
    
    inline void part_type_direction(Real ind, Real dir_min, Real dir_max, Real dir_incr, Real dir_wiggle)
    {
        call(functions[596], ind, dir_min, dir_max, dir_incr, dir_wiggle);
    }
    
    inline void part_type_gravity(Real ind, Real grav_amount, Real grav_dir)
    {
        call(functions[597], ind, grav_amount, grav_dir);
    }
    
    inline Real part_system_create()
    {
        return call(functions[598]);
    }
    
    inline void part_system_destroy(Real ind)
    {
        call(functions[599], ind);
    }
    
    inline Real part_system_exists(Real ind)
    {
        return call(functions[600], ind);
    }
    
    inline void part_system_clear(Real ind)
    {
        call(functions[601], ind);
    }
    
    inline void part_system_draw_order(Real ind, Real oldtonew)
    {
        call(functions[602], ind, oldtonew);
    }
    
    inline void part_system_depth(Real ind, Real depth)
    {
        call(functions[603], ind, depth);
    }
    
    inline void part_system_position(Real ind, Real x, Real y)
    {
        call(functions[604], ind, x, y);
    }
    
    inline void part_system_automatic_update(Real ind, Real automatic)
    {
        call(functions[605], ind, automatic);
    }
    
    inline void part_system_automatic_draw(Real ind, Real automatic)
    {
        call(functions[606], ind, automatic);
    }
    
    inline void part_system_update(Real ind)
    {
        call(functions[607], ind);
    }
    
    inline void part_system_drawit(Real ind)
    {
        call(functions[608], ind);
    }
    
    inline void part_particles_create(Real ind, Real x, Real y, Real parttype, Real number)
    {
        call(functions[609], ind, x, y, parttype, number);
    }
    
    inline void part_particles_create_color(Real ind, Real x, Real y, Real parttype, Real color, Real number)
    {
        call(functions[610], ind, x, y, parttype, color, number);
    }
    
    inline void part_particles_clear(Real ind)
    {
        call(functions[611], ind);
    }
    
    inline Real part_particles_count(Real ind)
    {
        return call(functions[612], ind);
    }
    
    inline Real part_emitter_create(Real ps)
    {
        return call(functions[613], ps);
    }
    
    inline void part_emitter_destroy(Real ps, Real ind)
    {
        call(functions[614], ps, ind);
    }
    
    inline void part_emitter_destroy_all(Real ps)
    {
        call(functions[615], ps);
    }
    
    inline Real part_emitter_exists(Real ps, Real ind)
    {
        return call(functions[616], ps, ind);
    }
    
    inline void part_emitter_clear(Real ps, Real ind)
    {
        call(functions[617], ps, ind);
    }
    
    inline void part_emitter_region(Real ps, Real ind, Real xmin, Real xmax, Real ymin, Real ymax, Real shape, Real distribution)
    {
        call(functions[618], ps, ind, xmin, xmax, ymin, ymax, shape, distribution);
    }
    
    inline void part_emitter_burst(Real ps, Real ind, Real parttype, Real number)
    {
        call(functions[619], ps, ind, parttype, number);
    }
    
    inline void part_emitter_stream(Real ps, Real ind, Real parttype, Real number)
    {
        call(functions[620], ps, ind, parttype, number);
    }
    
    inline Real part_attractor_create(Real ps)
    {
        return call(functions[621], ps);
    }
    
    inline void part_attractor_destroy(Real ps, Real ind)
    {
        call(functions[622], ps, ind);
    }
    
    inline void part_attractor_destroy_all(Real ps)
    {
        call(functions[623], ps);
    }
    
    inline Real part_attractor_exists(Real ps, Real ind)
    {
        return call(functions[624], ps, ind);
    }
    
    inline void part_attractor_clear(Real ps, Real ind)
    {
        call(functions[625], ps, ind);
    }
    
    inline void part_attractor_position(Real ps, Real ind, Real x, Real y)
    {
        call(functions[626], ps, ind, x, y);
    }
    
    inline void part_attractor_force(Real ps, Real ind, Real force, Real dist, Real kind, Real aditive)
    {
        call(functions[627], ps, ind, force, dist, kind, aditive);
    }
    
    inline Real part_destroyer_create(Real ps)
    {
        return call(functions[628], ps);
    }
    
    inline void part_destroyer_destroy(Real ps, Real ind)
    {
        call(functions[629], ps, ind);
    }
    
    inline void part_destroyer_destroy_all(Real ps)
    {
        call(functions[630], ps);
    }
    
    inline Real part_destroyer_exists(Real ps, Real ind)
    {
        return call(functions[631], ps, ind);
    }
    
    inline void part_destroyer_clear(Real ps, Real ind)
    {
        call(functions[632], ps, ind);
    }
    
    inline void part_destroyer_region(Real ps, Real ind, Real xmin, Real xmax, Real ymin, Real ymax, Real shape)
    {
        call(functions[633], ps, ind, xmin, xmax, ymin, ymax, shape);
    }
    
    inline Real part_deflector_create(Real ps)
    {
        return call(functions[634], ps);
    }
    
    inline void part_deflector_destroy(Real ps, Real ind)
    {
        call(functions[635], ps, ind);
    }
    
    inline void part_deflector_destroy_all(Real ps)
    {
        call(functions[636], ps);
    }
    
    inline Real part_deflector_exists(Real ps, Real ind)
    {
        return call(functions[637], ps, ind);
    }
    
    inline void part_deflector_clear(Real ps, Real ind)
    {
        call(functions[638], ps, ind);
    }
    
    inline void part_deflector_region(Real ps, Real ind, Real xmin, Real xmax, Real ymin, Real ymax)
    {
        call(functions[639], ps, ind, xmin, xmax, ymin, ymax);
    }
    
    inline void part_deflector_kind(Real ps, Real ind, Real kind)
    {
        call(functions[640], ps, ind, kind);
    }
    
    inline void part_deflector_friction(Real ps, Real ind, Real friction)
    {
        call(functions[641], ps, ind, friction);
    }
    
    inline Real part_changer_create(Real ps)
    {
        return call(functions[642], ps);
    }
    
    inline void part_changer_destroy(Real ps, Real ind)
    {
        call(functions[643], ps, ind);
    }
    
    inline void part_changer_destroy_all(Real ps)
    {
        call(functions[644], ps);
    }
    
    inline Real part_changer_exists(Real ps, Real ind)
    {
        return call(functions[645], ps, ind);
    }
    
    inline void part_changer_clear(Real ps, Real ind)
    {
        call(functions[646], ps, ind);
    }
    
    inline void part_changer_region(Real ps, Real ind, Real xmin, Real xmax, Real ymin, Real ymax, Real shape)
    {
        call(functions[647], ps, ind, xmin, xmax, ymin, ymax, shape);
    }
    
    inline void part_changer_types(Real ps, Real ind, Real parttype1, Real parttype2)
    {
        call(functions[648], ps, ind, parttype1, parttype2);
    }
    
    inline void part_changer_kind(Real ps, Real ind, Real kind)
    {
        call(functions[649], ps, ind, kind);
    }
    
    ///@}
}
#endif

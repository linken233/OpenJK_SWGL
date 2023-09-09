/*
===========================================================================
Copyright (C) 2000 - 2013, Raven Software, Inc.
Copyright (C) 2001 - 2013, Activision, Inc.
Copyright (C) 2013 - 2015, OpenJK contributors

This file is part of the OpenJK source code.

OpenJK is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.
===========================================================================
*/

// Force Destruction Effects

#include "cg_headers.h"

#include "cg_media.h"
#include "FxScheduler.h"

/*
---------------------------
FX_DestructionProjectileThink
---------------------------
*/

void FX_DestructionProjectileThink(centity_t *cent, const struct weaponInfo_s *weapon)
{
	vec3_t forward;

	if (VectorNormalize2(cent->currentState.pos.trDelta, forward) == 0.0f)
	{
		forward[2] = 1.0f;
	}

	theFxScheduler.PlayEffect(cgs.effects.destructionProjectile, cent->lerpOrigin, forward);
}

/*
---------------------------
FX_DestructionHitWall
---------------------------
*/

void FX_DestructionHitWall(vec3_t origin, vec3_t normal)
{
	theFxScheduler.PlayEffect(cgs.effects.destructionHit, origin, normal);
}

/*
---------------------------
FX_DestructionHitPlayer
---------------------------
*/

void FX_DestructionHitPlayer(vec3_t origin, vec3_t normal, qboolean humanoid)
{
	theFxScheduler.PlayEffect(cgs.effects.destructionHit, origin, normal);
}

/*
---------------------------
FX_BlastProjectileThink
---------------------------
*/
void FX_BlastProjectileThink(centity_t *cent, const struct weaponInfo_s *weapon)
{
	vec3_t forward;

	if (VectorNormalize2(cent->currentState.pos.trDelta, forward) == 0.0f)
	{
		forward[2] = 1.0f;
	}

	theFxScheduler.PlayEffect(cgs.effects.blastProjectile, cent->lerpOrigin, forward);
}

/*
---------------------------
FX_BlastHitWall
---------------------------
*/

void FX_BlastHitWall(vec3_t origin, vec3_t normal)
{
	theFxScheduler.PlayEffect(cgs.effects.blastHit, origin, normal);
}

/*
---------------------------
FX_BlastHitPlayer
---------------------------
*/

void FX_BlastHitPlayer(vec3_t origin, vec3_t normal, qboolean humanoid)
{
	theFxScheduler.PlayEffect(cgs.effects.blastHit, origin, normal);
}


/*
---------------------------
FX_BlastProjectileThink
---------------------------
*/
void FX_StrikeProjectileThink(centity_t *cent, const struct weaponInfo_s *weapon)
{
	vec3_t forward;

	if (VectorNormalize2(cent->currentState.pos.trDelta, forward) == 0.0f)
	{
		forward[2] = 1.0f;
	}

	theFxScheduler.PlayEffect(cgs.effects.blastProjectile, cent->lerpOrigin, forward);
}

/*
---------------------------
FX_BlastHitWall
---------------------------
*/

void FX_StrikeHitWall(vec3_t origin, vec3_t normal)
{
	theFxScheduler.PlayEffect(cgs.effects.blastHit, origin, normal);
}

/*
---------------------------
FX_BlastHitPlayer
---------------------------
*/

void FX_StrikeHitPlayer(vec3_t origin, vec3_t normal, qboolean humanoid)
{
	theFxScheduler.PlayEffect(cgs.effects.blastHit, origin, normal);
}

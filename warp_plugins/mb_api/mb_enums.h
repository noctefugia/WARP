/*
	File: mb_enums.h | (C)Noctefugia
	Description: enumerations extracted from game engine's codebase.
	Timestamp: Fri Apr 19 04:39:52 2024
	WARNING: THIS FILE IS AUTO-GENERATED, DO NOT EDIT.
*/

enum mbDefendType // #16649
{
	dt_forward                                                       = 0x0,
	dt_right                                                         = 0x1,
	dt_left                                                          = 0x2,
	dt_up                                                            = 0x3,
	dt_global                                                        = 0x5 
};

enum mbDefendPhase // #16655
{
	dp_defend                                                        = 0x0,
	dp_keep                                                          = 0x1,
	dp_parry                                                         = 0x2 
};

enum mbAttackType // #16659
{
	at_ranged                                                        = 0x0,
	at_thrust                                                        = 0x0,
	at_swing_right                                                   = 0x1,
	at_swing_left                                                    = 0x2,
	at_overswing                                                     = 0x3 
};

enum mbAttackPhase // #16665
{
	ap_ready                                                         = 0x0,
	ap_release                                                       = 0x1,
	ap_reload                                                        = 0x2 
};

enum mbActionType // #16669
{
	anim_stand                                                       = 0x0,
	anim_stand_man                                                   = 0x1,
	anim_stand_player_first_person                                   = 0x2,
	anim_jump                                                        = 0x3,
	anim_jump_loop                                                   = 0x4,
	anim_jump_end                                                    = 0x5,
	anim_jump_end_hard                                               = 0x6,
	anim_stand_unarmed                                               = 0x7,
	anim_stand_single                                                = 0x8,
	anim_stand_greatsword                                            = 0x9,
	anim_stand_staff                                                 = 0xA,
	anim_stand_crossbow                                              = 0xB,
	anim_turn_right                                                  = 0xC,
	anim_turn_left                                                   = 0xD,
	anim_turn_right_single                                           = 0xE,
	anim_turn_left_single                                            = 0xF,
	anim_turn_right_staff                                            = 0x10,
	anim_turn_left_staff                                             = 0x11,
	anim_turn_right_greatsword                                       = 0x12,
	anim_turn_left_greatsword                                        = 0x13,
	anim_prepare_kick_0                                              = 0x14,
	anim_prepare_kick_1                                              = 0x15,
	anim_prepare_kick_2                                              = 0x16,
	anim_prepare_kick_3                                              = 0x17,
	anim_kick_right_leg                                              = 0x18,
	anim_kick_left_leg                                               = 0x19,
	anim_run_forward                                                 = 0x1A,
	anim_run_forward_onehanded                                       = 0x1B,
	anim_run_forward_staff                                           = 0x1C,
	anim_run_forward_greatsword                                      = 0x1D,
	anim_run_forward_hips_right                                      = 0x1E,
	anim_run_forward_hips_left                                       = 0x1F,
	anim_run_forward_right                                           = 0x20,
	anim_run_forward_right_onehanded                                 = 0x21,
	anim_run_forward_right_staff                                     = 0x22,
	anim_run_forward_right_greatsword                                = 0x23,
	anim_run_forward_right_hips_right                                = 0x24,
	anim_run_forward_right_hips_left                                 = 0x25,
	anim_run_forward_left                                            = 0x26,
	anim_run_forward_left_onehanded                                  = 0x27,
	anim_run_forward_left_staff                                      = 0x28,
	anim_run_forward_left_greatsword                                 = 0x29,
	anim_run_forward_left_hips_right                                 = 0x2A,
	anim_run_forward_left_hips_left                                  = 0x2B,
	anim_run_backward                                                = 0x2C,
	anim_run_backward_onehanded                                      = 0x2D,
	anim_run_backward_staff                                          = 0x2E,
	anim_run_backward_greatsword                                     = 0x2F,
	anim_run_backward_hips_right                                     = 0x30,
	anim_run_backward_hips_left                                      = 0x31,
	anim_run_backward_right                                          = 0x32,
	anim_run_backward_right_onehanded                                = 0x33,
	anim_run_backward_right_staff                                    = 0x34,
	anim_run_backward_right_greatsword                               = 0x35,
	anim_run_backward_right_hips_right                               = 0x36,
	anim_run_backward_right_hips_left                                = 0x37,
	anim_run_backward_left                                           = 0x38,
	anim_run_backward_left_onehanded                                 = 0x39,
	anim_run_backward_left_staff                                     = 0x3A,
	anim_run_backward_left_greatsword                                = 0x3B,
	anim_run_backward_left_hips_right                                = 0x3C,
	anim_run_backward_left_hips_left                                 = 0x3D,
	anim_run_right                                                   = 0x3E,
	anim_run_right_onehanded                                         = 0x3F,
	anim_run_right_twohanded                                         = 0x40,
	anim_run_right_polearm                                           = 0x41,
	anim_run_right_hips_right                                        = 0x42,
	anim_run_right_hips_left                                         = 0x43,
	anim_run_left                                                    = 0x44,
	anim_run_left_onehanded                                          = 0x45,
	anim_run_left_twohanded                                          = 0x46,
	anim_run_left_polearm                                            = 0x47,
	anim_run_left_hips_right                                         = 0x48,
	anim_run_left_hips_left                                          = 0x49,
	anim_walk_forward                                                = 0x4A,
	anim_walk_forward_onehanded                                      = 0x4B,
	anim_walk_forward_staff                                          = 0x4C,
	anim_walk_forward_greatsword                                     = 0x4D,
	anim_walk_forward_hips_right                                     = 0x4E,
	anim_walk_forward_hips_left                                      = 0x4F,
	anim_walk_backward                                               = 0x50,
	anim_walk_backward_onehanded                                     = 0x51,
	anim_walk_backward_staff                                         = 0x52,
	anim_walk_backward_greatsword                                    = 0x53,
	anim_walk_backward_hips_right                                    = 0x54,
	anim_walk_backward_hips_left                                     = 0x55,
	anim_walk_right                                                  = 0x56,
	anim_walk_right_onehanded                                        = 0x57,
	anim_walk_right_twohanded                                        = 0x58,
	anim_walk_right_polearm                                          = 0x59,
	anim_walk_right_hips_right                                       = 0x5A,
	anim_walk_right_hips_left                                        = 0x5B,
	anim_walk_left                                                   = 0x5C,
	anim_walk_left_onehanded                                         = 0x5D,
	anim_walk_left_twohanded                                         = 0x5E,
	anim_walk_left_polearm                                           = 0x5F,
	anim_walk_left_hips_right                                        = 0x60,
	anim_walk_left_hips_left                                         = 0x61,
	anim_walk_forward_right                                          = 0x62,
	anim_walk_forward_right_onehanded                                = 0x63,
	anim_walk_forward_right_twohanded                                = 0x64,
	anim_walk_forward_right_polearm                                  = 0x65,
	anim_walk_forward_right_hips_right                               = 0x66,
	anim_walk_forward_right_hips_left                                = 0x67,
	anim_walk_forward_left                                           = 0x68,
	anim_walk_forward_left_onehanded                                 = 0x69,
	anim_walk_forward_left_twohanded                                 = 0x6A,
	anim_walk_forward_left_polearm                                   = 0x6B,
	anim_walk_forward_left_hips_right                                = 0x6C,
	anim_walk_forward_left_hips_left                                 = 0x6D,
	anim_walk_backward_left                                          = 0x6E,
	anim_walk_backward_left_onehanded                                = 0x6F,
	anim_walk_backward_left_twohanded                                = 0x70,
	anim_walk_backward_left_polearm                                  = 0x71,
	anim_walk_backward_left_hips_right                               = 0x72,
	anim_walk_backward_left_hips_left                                = 0x73,
	anim_walk_backward_right                                         = 0x74,
	anim_walk_backward_right_onehanded                               = 0x75,
	anim_walk_backward_right_twohanded                               = 0x76,
	anim_walk_backward_right_polearm                                 = 0x77,
	anim_walk_backward_right_hips_right                              = 0x78,
	anim_walk_backward_right_hips_left                               = 0x79,
	anim_walk_forward_crouch                                         = 0x7A,
	anim_stand_to_crouch                                             = 0x7B,
	anim_crouch_to_stand                                             = 0x7C,
	anim_ride_0                                                      = 0x7D,
	anim_ride_1                                                      = 0x7E,
	anim_lancer_ride_1                                               = 0x7F,
	anim_lancer_charge_parried                                       = 0x80,
	anim_ride_2                                                      = 0x81,
	anim_ride_3                                                      = 0x82,
	anim_ride_4                                                      = 0x83,
	anim_lancer_ride_4                                               = 0x84,
	anim_lancer_ride_4_no_shield                                     = 0x85,
	anim_ride_rear                                                   = 0x86,
	anim_ride_spur                                                   = 0x87,
	anim_ride_jump                                                   = 0x88,
	anim_ride_jump_end                                               = 0x89,
	anim_ride_turn_right                                             = 0x8A,
	anim_ride_turn_left                                              = 0x8B,
	anim_mount_horse                                                 = 0x8C,
	anim_dismount_horse                                              = 0x8D,
	anim_lancer_ride_0                                               = 0x8E,
	anim_equip_default                                               = 0x8F,
	anim_unequip_default                                             = 0x90,
	anim_equip_sword                                                 = 0x91,
	anim_unequip_sword                                               = 0x92,
	anim_equip_greatsword                                            = 0x93,
	anim_unequip_greatsword                                          = 0x94,
	anim_equip_axe_left_hip                                          = 0x95,
	anim_unequip_axe_left_hip                                        = 0x96,
	anim_equip_crossbow                                              = 0x97,
	anim_unequip_crossbow                                            = 0x98,
	anim_equip_spear                                                 = 0x99,
	anim_unequip_spear                                               = 0x9A,
	anim_equip_dagger_front_left                                     = 0x9B,
	anim_unequip_dagger_front_left                                   = 0x9C,
	anim_equip_dagger_front_right                                    = 0x9D,
	anim_unequip_dagger_front_right                                  = 0x9E,
	anim_equip_axe_back                                              = 0x9F,
	anim_unequip_axe_back                                            = 0xA0,
	anim_equip_revolver_right                                        = 0xA1,
	anim_unequip_revolver_right                                      = 0xA2,
	anim_equip_pistol_front_left                                     = 0xA3,
	anim_unequip_pistol_front_left                                   = 0xA4,
	anim_equip_katana                                                = 0xA5,
	anim_unequip_katana                                              = 0xA6,
	anim_equip_wakizashi                                             = 0xA7,
	anim_unequip_wakizashi                                           = 0xA8,
	anim_equip_shield                                                = 0xA9,
	anim_unequip_shield                                              = 0xAA,
	anim_equip_bow_back                                              = 0xAB,
	anim_unequip_bow_back                                            = 0xAC,
	anim_equip_bow_left_hip                                          = 0xAD,
	anim_unequip_bow_left_hip                                        = 0xAE,
	anim_cancel_attack_onehanded                                     = 0xAF,
	anim_cancel_attack_twohanded                                     = 0xB0,
	anim_cancel_attack_polearm                                       = 0xB1,
	anim_ready_bow                                                   = 0xB2,
	anim_release_bow                                                 = 0xB3,
	anim_ready_bow_mounted                                           = 0xB4,
	anim_release_bow_mounted                                         = 0xB5,
	anim_ready_crossbow                                              = 0xB6,
	anim_release_crossbow                                            = 0xB7,
	anim_reload_crossbow                                             = 0xB8,
	anim_reload_crossbow_horseback                                   = 0xB9,
	anim_ready_javelin                                               = 0xBA,
	anim_release_javelin                                             = 0xBB,
	anim_ready_throwing_knife                                        = 0xBC,
	anim_release_throwing_knife                                      = 0xBD,
	anim_ready_throwing_axe                                          = 0xBE,
	anim_release_throwing_axe                                        = 0xBF,
	anim_ready_stone                                                 = 0xC0,
	anim_release_stone                                               = 0xC1,
	anim_ready_pistol                                                = 0xC2,
	anim_release_pistol                                              = 0xC3,
	anim_reload_pistol                                               = 0xC4,
	anim_ready_musket                                                = 0xC5,
	anim_release_musket                                              = 0xC6,
	anim_reload_musket                                               = 0xC7,
	anim_ready_swingright_fist                                       = 0xC8,
	anim_release_swingright_fist                                     = 0xC9,
	anim_release_swingright_fist_continue                            = 0xCA,
	anim_blocked_swingright_fist                                     = 0xCB,
	anim_parried_swingright_fist                                     = 0xCC,
	anim_ready_swingleft_fist                                        = 0xCD,
	anim_release_swingleft_fist                                      = 0xCE,
	anim_release_swingleft_fist_continue                             = 0xCF,
	anim_blocked_swingleft_fist                                      = 0xD0,
	anim_parried_swingleft_fist                                      = 0xD1,
	anim_ready_direct_fist                                           = 0xD2,
	anim_release_direct_fist                                         = 0xD3,
	anim_release_direct_fist_continue                                = 0xD4,
	anim_blocked_direct_fist                                         = 0xD5,
	anim_parried_direct_fist                                         = 0xD6,
	anim_ready_uppercut_fist                                         = 0xD7,
	anim_release_uppercut_fist                                       = 0xD8,
	anim_release_uppercut_fist_continue                              = 0xD9,
	anim_blocked_uppercut_fist                                       = 0xDA,
	anim_parried_uppercut_fist                                       = 0xDB,
	anim_ready_slashright_twohanded                                  = 0xDC,
	anim_release_slashright_twohanded                                = 0xDD,
	anim_release_slashright_twohanded_continue                       = 0xDE,
	anim_blocked_slashright_twohanded                                = 0xDF,
	anim_parried_slashright_twohanded                                = 0xE0,
	anim_ready_slashleft_twohanded                                   = 0xE1,
	anim_release_slashleft_twohanded                                 = 0xE2,
	anim_release_slashleft_twohanded_continue                        = 0xE3,
	anim_blocked_slashleft_twohanded                                 = 0xE4,
	anim_parried_slashleft_twohanded                                 = 0xE5,
	anim_ready_thrust_twohanded                                      = 0xE6,
	anim_release_thrust_twohanded                                    = 0xE7,
	anim_release_thrust_twohanded_continue                           = 0xE8,
	anim_blocked_thrust_twohanded                                    = 0xE9,
	anim_parried_thrust_twohanded                                    = 0xEA,
	anim_ready_overswing_twohanded                                   = 0xEB,
	anim_release_overswing_twohanded                                 = 0xEC,
	anim_release_overswing_twohanded_continue                        = 0xED,
	anim_blocked_overswing_twohanded                                 = 0xEE,
	anim_parried_overswing_twohanded                                 = 0xEF,
	anim_ready_thrust_onehanded                                      = 0xF0,
	anim_release_thrust_onehanded                                    = 0xF1,
	anim_release_thrust_onehanded_continue                           = 0xF2,
	anim_blocked_thrust_onehanded                                    = 0xF3,
	anim_parried_thrust_onehanded                                    = 0xF4,
	anim_ready_thrust_onehanded_horseback                            = 0xF5,
	anim_release_thrust_onehanded_horseback                          = 0xF6,
	anim_release_thrust_onehanded_horseback_continue                 = 0xF7,
	anim_blocked_thrust_onehanded_horseback                          = 0xF8,
	anim_parried_thrust_onehanded_horseback                          = 0xF9,
	anim_ready_thrust_onehanded_lance                                = 0xFA,
	anim_release_thrust_onehanded_lance                              = 0xFB,
	anim_release_thrust_onehanded_lance_continue                     = 0xFC,
	anim_blocked_thrust_onehanded_lance                              = 0xFD,
	anim_parried_thrust_onehanded_lance                              = 0xFE,
	anim_ready_slashright_onehanded                                  = 0xFF,
	anim_release_slashright_onehanded                                = 0x100,
	anim_release_slashright_onehanded_continue                       = 0x101,
	anim_blocked_slashright_onehanded                                = 0x102,
	anim_parried_slashright_onehanded                                = 0x103,
	anim_ready_slashleft_onehanded                                   = 0x104,
	anim_release_slashleft_onehanded                                 = 0x105,
	anim_release_slashleft_onehanded_continue                        = 0x106,
	anim_blocked_slashleft_onehanded                                 = 0x107,
	anim_parried_slashleft_onehanded                                 = 0x108,
	anim_ready_overswing_onehanded                                   = 0x109,
	anim_release_overswing_onehanded                                 = 0x10A,
	anim_release_overswing_onehanded_continue                        = 0x10B,
	anim_blocked_overswing_onehanded                                 = 0x10C,
	anim_parried_overswing_onehanded                                 = 0x10D,
	anim_ready_slash_horseback_right                                 = 0x10E,
	anim_release_slash_horseback_right                               = 0x10F,
	anim_release_slash_horseback_right_continue                      = 0x110,
	anim_blocked_slash_horseback_right                               = 0x111,
	anim_parried_slash_horseback_right                               = 0x112,
	anim_ready_slash_horseback_left                                  = 0x113,
	anim_release_slash_horseback_left                                = 0x114,
	anim_release_slash_horseback_left_continue                       = 0x115,
	anim_blocked_slash_horseback_left                                = 0x116,
	anim_parried_slash_horseback_left                                = 0x117,
	anim_ready_slash_horseback_polearm_right                         = 0x118,
	anim_release_slash_horseback_polearm_right                       = 0x119,
	anim_release_slash_horseback_polearm_right_continue              = 0x11A,
	anim_blocked_slash_horseback_polearm_right                       = 0x11B,
	anim_parried_slash_horseback_polearm_right                       = 0x11C,
	anim_ready_slash_horseback_polearm_left                          = 0x11D,
	anim_release_slash_horseback_polearm_left                        = 0x11E,
	anim_release_slash_horseback_polearm_left_continue               = 0x11F,
	anim_blocked_slash_horseback_polearm_left                        = 0x120,
	anim_parried_slash_horseback_polearm_left                        = 0x121,
	anim_ready_overswing_staff                                       = 0x122,
	anim_release_overswing_staff                                     = 0x123,
	anim_release_overswing_staff_continue                            = 0x124,
	anim_blocked_overswing_staff                                     = 0x125,
	anim_parried_overswing_staff                                     = 0x126,
	anim_ready_thrust_staff                                          = 0x127,
	anim_release_thrust_staff                                        = 0x128,
	anim_release_thrust_staff_continue                               = 0x129,
	anim_blocked_thrust_staff                                        = 0x12A,
	anim_parried_thrust_staff                                        = 0x12B,
	anim_ready_slashleft_staff                                       = 0x12C,
	anim_release_slashleft_staff                                     = 0x12D,
	anim_release_slashleft_staff_continue                            = 0x12E,
	anim_blocked_slashleft_staff                                     = 0x12F,
	anim_parried_slashleft_staff                                     = 0x130,
	anim_ready_slashright_staff                                      = 0x131,
	anim_release_slashright_staff                                    = 0x132,
	anim_release_slashright_staff_continue                           = 0x133,
	anim_blocked_slashright_staff                                    = 0x134,
	anim_parried_slashright_staff                                    = 0x135,
	anim_defend_fist                                                 = 0x136,
	anim_defend_fist_keep                                            = 0x137,
	anim_defend_fist_parry_1                                         = 0x138,
	anim_defend_fist_parry_2                                         = 0x139,
	anim_defend_fist_parry_3                                         = 0x13A,
	anim_defend_shield_forward                                       = 0x13B,
	anim_defend_shield_up                                            = 0x13C,
	anim_defend_shield_right                                         = 0x13D,
	anim_defend_shield_left                                          = 0x13E,
	anim_defend_shield                                               = 0x13F,
	anim_defend_shield_keep                                          = 0x140,
	anim_defend_shield_parry_1                                       = 0x141,
	anim_defend_shield_parry_2                                       = 0x142,
	anim_defend_shield_parry_3                                       = 0x143,
	anim_defend_forward_greatsword                                   = 0x144,
	anim_defend_forward_greatsword_keep                              = 0x145,
	anim_defend_forward_greatsword_parry_1                           = 0x146,
	anim_defend_forward_greatsword_parry_2                           = 0x147,
	anim_defend_forward_greatsword_parry_3                           = 0x148,
	anim_defend_up_twohanded                                         = 0x149,
	anim_defend_up_twohanded_keep                                    = 0x14A,
	anim_defend_up_twohanded_parry_1                                 = 0x14B,
	anim_defend_up_twohanded_parry_2                                 = 0x14C,
	anim_defend_up_twohanded_parry_3                                 = 0x14D,
	anim_defend_right_twohanded                                      = 0x14E,
	anim_defend_right_twohanded_keep                                 = 0x14F,
	anim_defend_right_twohanded_parry_1                              = 0x150,
	anim_defend_right_twohanded_parry_2                              = 0x151,
	anim_defend_right_twohanded_parry_3                              = 0x152,
	anim_defend_left_twohanded                                       = 0x153,
	anim_defend_left_twohanded_keep                                  = 0x154,
	anim_defend_left_twohanded_parry_1                               = 0x155,
	anim_defend_left_twohanded_parry_2                               = 0x156,
	anim_defend_left_twohanded_parry_3                               = 0x157,
	anim_defend_forward_onehanded                                    = 0x158,
	anim_defend_forward_onehanded_keep                               = 0x159,
	anim_defend_forward_onehanded_parry_1                            = 0x15A,
	anim_defend_forward_onehanded_parry_2                            = 0x15B,
	anim_defend_forward_onehanded_parry_3                            = 0x15C,
	anim_defend_up_onehanded                                         = 0x15D,
	anim_defend_up_onehanded_keep                                    = 0x15E,
	anim_defend_up_onehanded_parry_1                                 = 0x15F,
	anim_defend_up_onehanded_parry_2                                 = 0x160,
	anim_defend_up_onehanded_parry_3                                 = 0x161,
	anim_defend_right_onehanded                                      = 0x162,
	anim_defend_right_onehanded_keep                                 = 0x163,
	anim_defend_right_onehanded_parry_1                              = 0x164,
	anim_defend_right_onehanded_parry_2                              = 0x165,
	anim_defend_right_onehanded_parry_3                              = 0x166,
	anim_defend_left_onehanded                                       = 0x167,
	anim_defend_left_onehanded_keep                                  = 0x168,
	anim_defend_left_onehanded_parry_1                               = 0x169,
	anim_defend_left_onehanded_parry_2                               = 0x16A,
	anim_defend_left_onehanded_parry_3                               = 0x16B,
	anim_defend_forward_staff                                        = 0x16C,
	anim_defend_forward_staff_keep                                   = 0x16D,
	anim_defend_forward_staff_parry_1                                = 0x16E,
	anim_defend_forward_staff_parry_2                                = 0x16F,
	anim_defend_forward_staff_parry_3                                = 0x170,
	anim_defend_up_staff                                             = 0x171,
	anim_defend_up_staff_keep                                        = 0x172,
	anim_defend_up_staff_parry_1                                     = 0x173,
	anim_defend_up_staff_parry_2                                     = 0x174,
	anim_defend_up_staff_parry_3                                     = 0x175,
	anim_defend_right_staff                                          = 0x176,
	anim_defend_right_staff_keep                                     = 0x177,
	anim_defend_right_staff_parry_1                                  = 0x178,
	anim_defend_right_staff_parry_2                                  = 0x179,
	anim_defend_right_staff_parry_3                                  = 0x17A,
	anim_defend_left_staff                                           = 0x17B,
	anim_defend_left_staff_keep                                      = 0x17C,
	anim_defend_left_staff_parry_1                                   = 0x17D,
	anim_defend_left_staff_parry_2                                   = 0x17E,
	anim_defend_left_staff_parry_3                                   = 0x17F,
	anim_strike_head_left                                            = 0x180,
	anim_strike_head_right                                           = 0x181,
	anim_strike_head_front                                           = 0x182,
	anim_strike_head_back                                            = 0x183,
	anim_strike_chest_left                                           = 0x184,
	anim_strike_chest_right                                          = 0x185,
	anim_strike_chest_front                                          = 0x186,
	anim_strike_chest_back                                           = 0x187,
	anim_strike_abdomen_left                                         = 0x188,
	anim_strike_abdomen_right                                        = 0x189,
	anim_strike_abdomen_front                                        = 0x18A,
	anim_strike_abdomen_back                                         = 0x18B,
	anim_strike_legs_left                                            = 0x18C,
	anim_strike_legs_right                                           = 0x18D,
	anim_strike_legs_front                                           = 0x18E,
	anim_strike_legs_back                                            = 0x18F,
	anim_strike2_head_left                                           = 0x190,
	anim_strike2_head_right                                          = 0x191,
	anim_strike2_head_front                                          = 0x192,
	anim_strike2_head_back                                           = 0x193,
	anim_strike2_chest_left                                          = 0x194,
	anim_strike2_chest_right                                         = 0x195,
	anim_strike2_chest_front                                         = 0x196,
	anim_strike2_chest_back                                          = 0x197,
	anim_strike2_abdomen_left                                        = 0x198,
	anim_strike2_abdomen_right                                       = 0x199,
	anim_strike2_abdomen_front                                       = 0x19A,
	anim_strike2_abdomen_back                                        = 0x19B,
	anim_strike2_legs_left                                           = 0x19C,
	anim_strike2_legs_right                                          = 0x19D,
	anim_strike2_legs_front                                          = 0x19E,
	anim_strike2_legs_back                                           = 0x19F,
	anim_strike3_head_left                                           = 0x1A0,
	anim_strike3_head_right                                          = 0x1A1,
	anim_strike3_head_front                                          = 0x1A2,
	anim_strike3_head_back                                           = 0x1A3,
	anim_strike3_chest_left                                          = 0x1A4,
	anim_strike3_chest_right                                         = 0x1A5,
	anim_strike3_chest_front                                         = 0x1A6,
	anim_strike3_abdomen_left                                        = 0x1A7,
	anim_strike3_abdomen_right                                       = 0x1A8,
	anim_strike3_abdomen_front                                       = 0x1A9,
	anim_strike3_abdomen_back                                        = 0x1AA,
	anim_strike_head_front_left_reloc                                = 0x1AB,
	anim_fall_face_hold                                              = 0x1AC,
	anim_fall_chest_front                                            = 0x1AD,
	anim_fall_abdomen_hold_front                                     = 0x1AE,
	anim_fall_head_front                                             = 0x1AF,
	anim_fall_right_front                                            = 0x1B0,
	anim_fall_body_back                                              = 0x1B1,
	anim_fall_rider_right_forward                                    = 0x1B2,
	anim_fall_rider_right                                            = 0x1B3,
	anim_fall_rider_left                                             = 0x1B4,
	anim_rider_fall_right                                            = 0x1B5,
	anim_rider_fall_roll                                             = 0x1B6,
	anim_strike_chest_front_stop                                     = 0x1B7,
	anim_strike_fall_back_rise                                       = 0x1B8,
	anim_strike_fall_back_rise_upper                                 = 0x1B9,
	anim_cheer                                                       = 0x1BA,
	anim_cheer_stand                                                 = 0x1BB,
	anim_stand_townguard                                             = 0x1BC,
	anim_stand_lady                                                  = 0x1BD,
	anim_stand_lord                                                  = 0x1BE,
	anim_dance                                                       = 0x1BF,
	anim_pose_1                                                      = 0x1C0,
	anim_pose_2                                                      = 0x1C1,
	anim_pose_3                                                      = 0x1C2,
	anim_pose_4                                                      = 0x1C3,
	anim_pose_5                                                      = 0x1C4,
	anim_wedding_guest                                               = 0x1C5,
	anim_wedding_guest_notr                                          = 0x1C6,
	anim_wedding_guest_woman                                         = 0x1C7,
	anim_wedding_dad_stairs                                          = 0x1C8,
	anim_wedding_dad_walk                                            = 0x1C9,
	anim_wedding_bride_stairs                                        = 0x1CA,
	anim_wedding_bride_walk                                          = 0x1CB,
	anim_wedding_groom_wait                                          = 0x1CC,
	anim_wedding_groom_last                                          = 0x1CD,
	anim_wedding_dad_last                                            = 0x1CE,
	anim_wedding_bride_last                                          = 0x1CF,
	anim_equip_bayonet                                               = 0x1D0,
	anim_unequip_bayonet                                             = 0x1D1,
	anim_crouch_unarmed                                              = 0x1D2,
	anim_crouch_single                                               = 0x1D3,
	anim_crouch_greatsword                                           = 0x1D4,
	anim_crouch_staff                                                = 0x1D5,
	anim_crouch_crossbow                                             = 0x1D6,
	anim_crouch_ready_pistol                                         = 0x1D7,
	anim_crouch_release_pistol                                       = 0x1D8,
	anim_reload_musket_full                                          = 0x1D9,
	anim_reload_musket_two_third                                     = 0x1DA,
	anim_reload_musket_one_third                                     = 0x1DB,
	anim_crouch_pike                                                 = 0x1DC,
	anim_crouch_pike_recover                                         = 0x1DD,
	anim_ready_overswing_spear                                       = 0x1DE,
	anim_release_overswing_spear                                     = 0x1DF,
	anim_release_overswing_spear_continue                            = 0x1E0,
	anim_parried_overswing_spear                                     = 0x1E1,
	anim_blocked_overswing_spear                                     = 0x1E2,
	anim_reload_pistol_half                                          = 0x1E3,
	anim_ready_overswing_musket                                      = 0x1E4,
	anim_release_overswing_musket                                    = 0x1E5,
	anim_release_overswing_musket_continue                           = 0x1E6,
	anim_parried_overswing_musket                                    = 0x1E7,
	anim_blocked_overswing_musket                                    = 0x1E8,
	anim_ready_thrust_musket                                         = 0x1E9,
	anim_release_thrust_musket                                       = 0x1EA,
	anim_release_thrust_musket_continue                              = 0x1EB,
	anim_parried_thrust_musket                                       = 0x1EC,
	anim_blocked_thrust_musket                                       = 0x1ED,
	anim_equip_pistol_melee                                          = 0x1EE,
	anim_unequip_pistol_melee                                        = 0x1EF,
	anim_unused_human_anim_44                                        = 0x1F0,
	anim_unused_human_anim_45                                        = 0x1F1,
	anim_unused_human_anim_46                                        = 0x1F2,
	anim_unused_human_anim_47                                        = 0x1F3,
	anim_unused_human_anim_48                                        = 0x1F4,
	anim_unused_human_anim_49                                        = 0x1F5,
	anim_unused_human_anim_50                                        = 0x1F6,
	anim_unused_human_anim_51                                        = 0x1F7,
	anim_unused_human_anim_52                                        = 0x1F8,
	anim_unused_human_anim_53                                        = 0x1F9,
	anim_unused_human_anim_54                                        = 0x1FA,
	anim_unused_human_anim_55                                        = 0x1FB,
	anim_unused_human_anim_56                                        = 0x1FC,
	anim_unused_human_anim_57                                        = 0x1FD,
	anim_unused_human_anim_58                                        = 0x1FE,
	anim_unused_human_anim_59                                        = 0x1FF,
	anim_unused_human_anim_60                                        = 0x200,
	anim_unused_human_anim_61                                        = 0x201,
	anim_unused_human_anim_62                                        = 0x202,
	anim_unused_human_anim_63                                        = 0x203,
	anim_unused_human_anim_64                                        = 0x204,
	anim_unused_human_anim_65                                        = 0x205,
	anim_unused_human_anim_66                                        = 0x206,
	anim_unused_human_anim_67                                        = 0x207,
	anim_unused_human_anim_68                                        = 0x208,
	anim_unused_human_anim_69                                        = 0x209,
	anim_unused_human_anim_70                                        = 0x20A,
	anim_unused_human_anim_71                                        = 0x20B,
	anim_unused_human_anim_72                                        = 0x20C,
	anim_unused_human_anim_73                                        = 0x20D,
	anim_unused_human_anim_74                                        = 0x20E,
	anim_unused_human_anim_75                                        = 0x20F,
	anim_unused_human_anim_76                                        = 0x210,
	anim_unused_human_anim_77                                        = 0x211,
	anim_unused_human_anim_78                                        = 0x212,
	anim_unused_human_anim_79                                        = 0x213,
	anim_unused_human_anim_80                                        = 0x214,
	anim_unused_human_anim_81                                        = 0x215,
	anim_unused_human_anim_82                                        = 0x216,
	anim_unused_human_anim_83                                        = 0x217,
	anim_unused_human_anim_84                                        = 0x218,
	anim_unused_human_anim_85                                        = 0x219,
	anim_unused_human_anim_86                                        = 0x21A,
	anim_unused_human_anim_87                                        = 0x21B,
	anim_unused_human_anim_88                                        = 0x21C,
	anim_unused_human_anim_89                                        = 0x21D,
	anim_unused_human_anim_90                                        = 0x21E,
	anim_unused_human_anim_91                                        = 0x21F,
	anim_unused_human_anim_92                                        = 0x220,
	anim_unused_human_anim_93                                        = 0x221,
	anim_unused_human_anim_94                                        = 0x222,
	anim_unused_human_anim_95                                        = 0x223,
	anim_unused_human_anim_96                                        = 0x224,
	anim_unused_human_anim_97                                        = 0x225,
	anim_unused_human_anim_98                                        = 0x226,
	anim_unused_human_anim_99                                        = 0x227,
	anim_unused_human_anim_100                                       = 0x228,
	anim_horse_stand                                                 = 0x229,
	anim_horse_pace_1                                                = 0x22A,
	anim_horse_pace_2                                                = 0x22B,
	anim_horse_pace_3                                                = 0x22C,
	anim_horse_pace_4                                                = 0x22D,
	anim_horse_walk_backward                                         = 0x22E,
	anim_horse_rear                                                  = 0x22F,
	anim_horse_jump                                                  = 0x230,
	anim_horse_jump_end                                              = 0x231,
	anim_horse_turn_right                                            = 0x232,
	anim_horse_turn_left                                             = 0x233,
	anim_horse_turn_right_head                                       = 0x234,
	anim_horse_turn_left_head                                        = 0x235,
	anim_horse_slow                                                  = 0x236,
	anim_horse_fall_in_place                                         = 0x237,
	anim_horse_fall_right                                            = 0x238,
	anim_horse_fall_roll                                             = 0x239,
	anim_unused_horse_anim_1                                         = 0x23A,
	anim_unused_horse_anim_2                                         = 0x23B,
	anim_unused_horse_anim_3                                         = 0x23C,
	anim_unused_horse_anim_4                                         = 0x23D,
	anim_unused_horse_anim_5                                         = 0x23E,
	anim_unused_horse_anim_6                                         = 0x23F,
	anim_unused_horse_anim_7                                         = 0x240,
	anim_unused_horse_anim_8                                         = 0x241,
	anim_unused_horse_anim_9                                         = 0x242,
	anim_unused_horse_anim_10                                        = 0x243,
	anim_unused_horse_anim_11                                        = 0x244,
	anim_unused_horse_anim_12                                        = 0x245,
	anim_unused_horse_anim_13                                        = 0x246,
	anim_unused_horse_anim_14                                        = 0x247,
	anim_unused_horse_anim_15                                        = 0x248,
	anim_unused_horse_anim_16                                        = 0x249,
	anim_unused_horse_anim_17                                        = 0x24A,
	anim_unused_horse_anim_18                                        = 0x24B,
	anim_unused_horse_anim_19                                        = 0x24C,
	anim_unused_horse_anim_20                                        = 0x24D,
	anim_unused_horse_anim_21                                        = 0x24E,
	anim_unused_horse_anim_22                                        = 0x24F,
	anim_unused_horse_anim_23                                        = 0x250,
	anim_unused_horse_anim_24                                        = 0x251,
	anim_unused_horse_anim_25                                        = 0x252,
	anim_unused_horse_anim_26                                        = 0x253,
	anim_unused_horse_anim_27                                        = 0x254,
	anim_unused_horse_anim_28                                        = 0x255,
	anim_unused_horse_anim_29                                        = 0x256,
	anim_unused_horse_anim_30                                        = 0x257,
	anim_unused_horse_anim_31                                        = 0x258,
	anim_unused_horse_anim_32                                        = 0x259,
	anim_unused_horse_anim_33                                        = 0x25A,
	anim_unused_horse_anim_34                                        = 0x25B,
	anim_unused_horse_anim_35                                        = 0x25C,
	anim_unused_horse_anim_36                                        = 0x25D,
	anim_unused_horse_anim_37                                        = 0x25E,
	anim_unused_horse_anim_38                                        = 0x25F,
	anim_unused_horse_anim_39                                        = 0x260,
	anim_unused_horse_anim_40                                        = 0x261,
	anim_unused_horse_anim_41                                        = 0x262,
	anim_unused_horse_anim_42                                        = 0x263,
	anim_unused_horse_anim_43                                        = 0x264,
	anim_unused_horse_anim_44                                        = 0x265,
	anim_unused_horse_anim_45                                        = 0x266,
	anim_unused_horse_anim_46                                        = 0x267,
	anim_unused_horse_anim_47                                        = 0x268,
	anim_unused_horse_anim_48                                        = 0x269,
	anim_unused_horse_anim_49                                        = 0x26A,
	anim_unused_horse_anim_50                                        = 0x26B,
	anim_unused_horse_anim_51                                        = 0x26C,
	anim_unused_horse_anim_52                                        = 0x26D,
	anim_unused_horse_anim_53                                        = 0x26E,
	anim_unused_horse_anim_54                                        = 0x26F,
	anim_unused_horse_anim_55                                        = 0x270,
	anim_unused_horse_anim_56                                        = 0x271,
	anim_unused_horse_anim_57                                        = 0x272,
	anim_unused_horse_anim_58                                        = 0x273,
	anim_unused_horse_anim_59                                        = 0x274,
	anim_unused_horse_anim_60                                        = 0x275,
	anim_unused_horse_anim_61                                        = 0x276,
	anim_unused_horse_anim_62                                        = 0x277,
	anim_unused_horse_anim_63                                        = 0x278,
	anim_unused_horse_anim_64                                        = 0x279,
	anim_unused_horse_anim_65                                        = 0x27A,
	anim_unused_horse_anim_66                                        = 0x27B,
	anim_unused_horse_anim_67                                        = 0x27C,
	anim_unused_horse_anim_68                                        = 0x27D,
	anim_unused_horse_anim_69                                        = 0x27E,
	anim_unused_horse_anim_70                                        = 0x27F,
	anim_unused_horse_anim_71                                        = 0x280,
	anim_unused_horse_anim_72                                        = 0x281,
	anim_unused_horse_anim_73                                        = 0x282,
	anim_unused_horse_anim_74                                        = 0x283,
	anim_unused_horse_anim_75                                        = 0x284,
	anim_unused_horse_anim_76                                        = 0x285,
	anim_unused_horse_anim_77                                        = 0x286,
	anim_unused_horse_anim_78                                        = 0x287,
	anim_unused_horse_anim_79                                        = 0x288,
	anim_unused_horse_anim_80                                        = 0x289,
	anim_unused_horse_anim_81                                        = 0x28A,
	anim_unused_horse_anim_82                                        = 0x28B,
	anim_unused_horse_anim_83                                        = 0x28C,
	anim_unused_horse_anim_84                                        = 0x28D,
	anim_unused_horse_anim_85                                        = 0x28E,
	anim_unused_horse_anim_86                                        = 0x28F,
	anim_unused_horse_anim_87                                        = 0x290,
	anim_unused_horse_anim_88                                        = 0x291,
	anim_unused_horse_anim_89                                        = 0x292,
	anim_unused_horse_anim_90                                        = 0x293,
	anim_unused_horse_anim_91                                        = 0x294,
	anim_unused_horse_anim_92                                        = 0x295,
	anim_unused_horse_anim_93                                        = 0x296,
	anim_unused_horse_anim_94                                        = 0x297,
	anim_unused_horse_anim_95                                        = 0x298,
	anim_unused_horse_anim_96                                        = 0x299,
	anim_unused_horse_anim_97                                        = 0x29A,
	anim_unused_horse_anim_98                                        = 0x29B,
	anim_unused_horse_anim_99                                        = 0x29C,
	anim_unused_horse_anim_100                                       = 0x29D 
};

enum rglBodyPartFlags // #17340
{
	bf_no_collision                                                  = 0x2,
	bf_invisible                                                     = 0x4,
	bf_indestructible                                                = 0x8,
	bf_terrain_quad                                                  = 0x10,
	bf_barrier_ai                                                    = 0x100,
	bf_tree                                                          = 0x200,
	bf_dusty                                                         = 0x4000,
	bf_disabled                                                      = 0x8000,
	bf_barrier_2d                                                    = 0x10000,
	bf_dynamic                                                       = 0x20000,
	bf_moveable                                                      = 0x40000,
	bf_ladder                                                        = 0x80000,
	bf_barrier_3d                                                    = 0x100000,
	bf_barrier_player                                                = 0x200000,
	bf_static_movement                                               = 0x800000,
	bf_barrier_ai_3d                                                 = 0x1000000 
};

enum rglCollisionGroupType // #17357
{
	cgt_none                                                         = 0x1,
	cgt_agent                                                        = 0x2,
	cgt_ai_agent                                                     = 0x3,
	cgt_static_body                                                  = 0x4,
	cgt_terrain                                                      = 0x5,
	cgt_barrier                                                      = 0x6,
	cgt_ai_limiter                                                   = 0x7,
	cgt_unknown                                                      = 0x8,
	cgt_ragdoll                                                      = 0x9,
	cgt_non_collidable                                               = 0xA,
	cgt_horse_agent                                                  = 0xB,
	cgt_ai_horse_agent                                               = 0xC,
	cgt_dynamic_body                                                 = 0xD,
	cgt_horse_agent_ragdoll                                          = 0xE,
	cgt_barrier_3d                                                   = 0xF,
	cgt_barrier_player                                               = 0x10,
	cgt_barrier_ai_3d                                                = 0x11 
};

enum mbMappedParticleSystems // #17375
{
	psys_game_rain                                                   = 0x0,
	psys_game_snow                                                   = 0x1,
	psys_game_blood                                                  = 0x2,
	psys_game_blood_2                                                = 0x3,
	psys_game_hoof_dust                                              = 0x4,
	psys_game_hoof_dust_snow                                         = 0x5,
	psys_game_hoof_dust_mud                                          = 0x6,
	psys_game_water_splash_1                                         = 0x7,
	psys_game_water_splash_2                                         = 0x8,
	psys_game_water_splash_3                                         = 0x9 
};

enum mbItemCapability // #17386
{
	itcf_thrust_onehanded                                            = 0x1,
	itcf_overswing_onehanded                                         = 0x2,
	itcf_slashright_onehanded                                        = 0x4,
	itcf_slashleft_onehanded                                         = 0x8,
	itcf_thrust_twohanded                                            = 0x10,
	itcf_overswing_twohanded                                         = 0x20,
	itcf_slashright_twohanded                                        = 0x40,
	itcf_slashleft_twohanded                                         = 0x80,
	itcf_thrust_polearm                                              = 0x100,
	itcf_overswing_polearm                                           = 0x200,
	itcf_slashright_polearm                                          = 0x400,
	itcf_slashleft_polearm                                           = 0x800,
	itcf_shoot_bow                                                   = 0x1000,
	itcf_shoot_crossbow                                              = 0x4000,
	itcf_throw_stone                                                 = 0x10000,
	itcf_throw_knife                                                 = 0x20000,
	itcf_throw_axe                                                   = 0x30000,
	itcf_throw_javelin                                               = 0x40000,
	itcf_shoot_pistol                                                = 0x70000,
	itcf_shoot_musket                                                = 0x80000,
	itcf_shoot_mask                                                  = 0xFF000,
	itcf_horseback_slashright_onehanded                              = 0x800000,
	itcf_horseback_slashleft_onehanded                               = 0x1000000,
	itcf_thrust_onehanded_lance                                      = 0x4000000,
	itcf_thrust_onehanded_lance_horseback                            = 0x8000000,
	itcf_carry_mask                                                  = 0x7F0000000,
	itcf_carry_sword_left_hip                                        = 0x10000000,
	itcf_carry_axe_left_hip                                          = 0x20000000,
	itcf_carry_dagger_front_left                                     = 0x30000000,
	itcf_carry_dagger_front_right                                    = 0x40000000,
	itcf_carry_quiver_front_right                                    = 0x50000000,
	itcf_carry_quiver_back_right                                     = 0x60000000,
	itcf_carry_quiver_right_vertical                                 = 0x70000000,
	itcf_carry_quiver_back                                           = 0x80000000,
	itcf_carry_revolver_right                                        = 0x90000000,
	itcf_carry_pistol_front_left                                     = 0xA0000000,
	itcf_carry_bowcase_left                                          = 0xB0000000,
	itcf_carry_mace_left_hip                                         = 0xC0000000,
	itcf_carry_axe_back                                              = 0x100000000,
	itcf_carry_sword_back                                            = 0x110000000,
	itcf_carry_kite_shield                                           = 0x120000000,
	itcf_carry_round_shield                                          = 0x130000000,
	itcf_carry_buckler_left                                          = 0x140000000,
	itcf_carry_crossbow_back                                         = 0x150000000,
	itcf_carry_bow_back                                              = 0x160000000,
	itcf_carry_spear                                                 = 0x170000000,
	itcf_carry_board_shield                                          = 0x180000000,
	itcf_carry_katana                                                = 0x210000000,
	itcf_carry_wakizashi                                             = 0x220000000,
	itcf_show_holster_when_drawn                                     = 0x800000000,
	itcf_reload_pistol                                               = 0x7000000000,
	itcf_reload_musket                                               = 0x8000000000,
	itcf_reload_mask                                                 = 0xF000000000,
	itcf_parry_forward_onehanded                                     = 0x10000000000,
	itcf_parry_up_onehanded                                          = 0x20000000000,
	itcf_parry_right_onehanded                                       = 0x40000000000,
	itcf_parry_left_onehanded                                        = 0x80000000000,
	itcf_parry_forward_twohanded                                     = 0x100000000000,
	itcf_parry_up_twohanded                                          = 0x200000000000,
	itcf_parry_right_twohanded                                       = 0x400000000000,
	itcf_parry_left_twohanded                                        = 0x800000000000,
	itcf_parry_forward_polearm                                       = 0x1000000000000,
	itcf_parry_up_polearm                                            = 0x2000000000000,
	itcf_parry_right_polearm                                         = 0x4000000000000,
	itcf_parry_left_polearm                                          = 0x8000000000000,
	itcf_horseback_slash_polearm                                     = 0x10000000000000,
	itcf_overswing_spear                                             = 0x20000000000000,
	itcf_overswing_musket                                            = 0x40000000000000,
	itcf_thrust_musket                                               = 0x80000000000000 
};

enum mbScriptingContext // #17456
{
	ti_simulate_battle                                               = 0xFB,
	ti_on_party_encounter                                            = 0xFA,
	ti_question_answered                                             = 0xF8,
	ti_server_player_joined                                          = 0xF1,
	ti_on_multiplayer_mission_end                                    = 0xF0,
	ti_before_mission_start                                          = 0xED,
	ti_after_mission_start                                           = 0xEC,
	ti_tab_pressed                                                   = 0xEB,
	ti_inventory_key_pressed                                         = 0xEA,
	ti_escape_pressed                                                = 0xE9,
	ti_battle_window_opened                                          = 0xE8,
	ti_on_agent_spawn                                                = 0xE7,
	ti_on_agent_killed_or_wounded                                    = 0xE6,
	ti_on_agent_knocked_down                                         = 0xE5,
	ti_on_agent_hit                                                  = 0xE4,
	ti_on_player_exit                                                = 0xE3,
	ti_on_leave_area                                                 = 0xE2,
	ti_on_init_scene_prop                                            = 0xD8,
	ti_on_scene_prop_hit                                             = 0xD6,
	ti_on_scene_prop_destroy                                         = 0xD5,
	ti_on_scene_prop_use                                             = 0xD4,
	ti_on_scene_prop_is_animating                                    = 0xD3,
	ti_on_scene_prop_animation_finished                              = 0xD2,
	ti_on_scene_prop_start_use                                       = 0xD1,
	ti_on_scene_prop_cancel_use                                      = 0xD0,
	ti_on_init_item                                                  = 0xCE,
	ti_on_weapon_attack                                              = 0xCD,
	ti_on_missile_hit                                                = 0xCC,
	ti_on_item_picked_up                                             = 0xCB,
	ti_on_item_dropped                                               = 0xCA,
	ti_on_agent_mount                                                = 0xC9,
	ti_on_agent_dismount                                             = 0xC8,
	ti_on_item_wielded                                               = 0xC7,
	ti_on_item_unwielded                                             = 0xC6,
	ti_on_presentation_load                                          = 0xC4,
	ti_on_presentation_run                                           = 0xC3,
	ti_on_presentation_event_state_change                            = 0xC2,
	ti_on_presentation_mouse_enter_leave                             = 0xC1,
	ti_on_presentation_mouse_press                                   = 0xC0,
	ti_on_init_map_icon                                              = 0xBA,
	ti_on_order_issued                                               = 0xB9,
	ti_on_agent_scripted_destination_reached                         = 0xB8,
	ti_on_agent_animation_switch                                     = 0xB7,
	ti_on_switch_to_map                                              = 0xB5,
	ti_scene_prop_deformation_finished                               = 0xB4,
	ti_on_shield_hit                                                 = 0xB0,
	ti_on_scene_prop_intersect_with_agent                            = 0x9C,
	ti_on_init_missile                                               = 0x9B,
	ti_on_agent_turn                                                 = 0x9A,
	ti_on_agent_blocked                                              = 0x99,
	ti_on_missile_dive                                               = 0x98,
	ti_on_agent_start_reloading                                      = 0x97,
	ti_on_agent_end_reloading                                        = 0x96,
	ti_on_shield_penetrated                                          = 0x95,
	ti_on_scene_prop_is_deforming                                    = 0x94,
	sc_game                                                          = 0x1,
	sc_conversation_conditions                                       = 0x2,
	sc_conversation_consequences                                     = 0x4,
	sc_menu                                                          = 0x8,
	sc_mission                                                       = 0x10,
	sc_resting                                                       = 0x10000,
	sc_game_script                                                   = 0x200000,
	sc_tableau                                                       = 0x400000 
};

enum mbMissionObjectMetaType // #17520
{
	mt_scene_prop                                                    = 0x0,
	mt_entry_point                                                   = 0x1,
	mt_scene_item                                                    = 0x2,
	mt_baggage                                                       = 0x3,
	mt_flora                                                         = 0x4,
	mt_passage                                                       = 0x5,
	mt_spawned_item                                                  = 0x6,
	mt_missile_item                                                  = 0x7,
	mt_death_item                                                    = 0x8,
	mt_broken_shield                                                 = 0x9,
	mt_spawned_prop                                                  = 0xA 
};

enum mbItemProperty // #17532
{
	itp_force_attach_left_hand                                       = 0x100,
	itp_force_attach_right_hand                                      = 0x200,
	itp_force_attach_left_forearm                                    = 0x300,
	itp_attach_armature                                              = 0xF00,
	itp_attachment_mask                                              = 0xF00,
	itp_unique                                                       = 0x1000,
	itp_always_loot                                                  = 0x2000,
	itp_no_parry                                                     = 0x4000,
	itp_default_ammo                                                 = 0x8000,
	itp_merchandise                                                  = 0x10000,
	itp_wooden_attack                                                = 0x20000,
	itp_wooden_parry                                                 = 0x40000,
	itp_food                                                         = 0x80000,
	itp_cant_reload_on_horseback                                     = 0x100000,
	itp_two_handed                                                   = 0x200000,
	itp_primary                                                      = 0x400000,
	itp_replaces_helm                                                = 0x400000,
	itp_secondary                                                    = 0x800000,
	itp_replaces_shoes                                               = 0x800000,
	itp_covers_legs                                                  = 0x1000000,
	itp_doesnt_cover_hair                                            = 0x1000000,
	itp_can_penetrate_shield                                         = 0x1000000,
	itp_consumable                                                   = 0x2000000,
	itp_bonus_against_shield                                         = 0x4000000,
	itp_penalty_with_shield                                          = 0x8000000,
	itp_cant_use_on_horseback                                        = 0x10000000,
	itp_civilian                                                     = 0x20000000,
	itp_next_item_as_melee                                           = 0x20000000,
	itp_offset_lance                                                 = 0x40000000,
	itp_covers_head                                                  = 0x80000000,
	itp_couchable                                                    = 0x80000000,
	itp_crush_through                                                = 0x100000000,
	itp_remove_item_on_use                                           = 0x400000000,
	itp_unbalanced                                                   = 0x800000000,
	itp_covers_beard                                                 = 0x1000000000,
	itp_no_pick_up_from_ground                                       = 0x2000000000,
	itp_can_knock_down                                               = 0x4000000000,
	itp_covers_hair                                                  = 0x8000000000,
	itp_force_show_body                                              = 0x10000000000,
	itp_force_show_left_hand                                         = 0x20000000000,
	itp_force_show_right_hand                                        = 0x40000000000,
	itp_covers_hair_partially                                        = 0x80000000000,
	itp_extra_penetration                                            = 0x100000000000,
	itp_has_bayonet                                                  = 0x200000000000,
	itp_cant_reload_while_moving                                     = 0x400000000000,
	itp_ignore_gravity                                               = 0x800000000000,
	itp_ignore_friction                                              = 0x1000000000000,
	itp_is_pike                                                      = 0x2000000000000,
	itp_offset_musket                                                = 0x4000000000000,
	itp_no_blur                                                      = 0x8000000000000,
	itp_cant_reload_while_moving_mounted                             = 0x10000000000000,
	itp_has_upper_stab                                               = 0x20000000000000,
	itp_disable_agent_sounds                                         = 0x40000000000000,
	itp_no_equip_animation                                           = 0x40000000000000,
	itp_is_carriage                                                  = 0x80000000000000,
	itp_kill_info_mask                                               = 0x700000000000000,
	itp_kill_info_bits                                               = 0x38,
	itp_shield_no_parry                                              = 0x4000,
	itp_offset_mortschlag                                            = 0x1000000000000000,
	itp_covers_hands                                                 = 0x1000000000000000,
	itp_offset_flip                                                  = 0x4000000000000000 
};

enum mbItemModifierKind // #17594
{
	imod_plain                                                       = 0x0,
	imod_cracked                                                     = 0x1,
	imod_rusty                                                       = 0x2,
	imod_bent                                                        = 0x3,
	imod_chipped                                                     = 0x4,
	imod_battered                                                    = 0x5,
	imod_poor                                                        = 0x6,
	imod_crude                                                       = 0x7,
	imod_old                                                         = 0x8,
	imod_cheap                                                       = 0x9,
	imod_fine                                                        = 0xA,
	imod_well_made                                                   = 0xB,
	imod_sharp                                                       = 0xC,
	imod_balanced                                                    = 0xD,
	imod_tempered                                                    = 0xE,
	imod_deadly                                                      = 0xF,
	imod_exquisite                                                   = 0x10,
	imod_masterwork                                                  = 0x11,
	imod_heavy                                                       = 0x12,
	imod_strong                                                      = 0x13,
	imod_powerful                                                    = 0x14,
	imod_tattered                                                    = 0x15,
	imod_ragged                                                      = 0x16,
	imod_rough                                                       = 0x17,
	imod_sturdy                                                      = 0x18,
	imod_thick                                                       = 0x19,
	imod_hardened                                                    = 0x1A,
	imod_reinforced                                                  = 0x1B,
	imod_superb                                                      = 0x1C,
	imod_lordly                                                      = 0x1D,
	imod_lame                                                        = 0x1E,
	imod_swaybacked                                                  = 0x1F,
	imod_stubborn                                                    = 0x20,
	imod_timid                                                       = 0x21,
	imod_meek                                                        = 0x22,
	imod_spirited                                                    = 0x23,
	imod_champion                                                    = 0x24,
	imod_fresh                                                       = 0x25,
	imod_day_old                                                     = 0x26,
	imod_two_day_old                                                 = 0x27,
	imod_smelling                                                    = 0x28,
	imod_rotten                                                      = 0x29,
	imod_large_bag                                                   = 0x2A 
};

enum mbSkinHumanVoice // #17638
{
	hv_die                                                           = 0x0,
	hv_hit                                                           = 0x1,
	hv_grunt                                                         = 0x2,
	hv_grunt_long                                                    = 0x3,
	hv_yell                                                          = 0x4,
	hv_warcry                                                        = 0x5,
	hv_victory                                                       = 0x6,
	hv_stun                                                          = 0x7 
};

enum mbTroopFlags // #17647
{
	tf_hero                                                          = 0x10,
	tf_inactive                                                      = 0x20,
	tf_unkillable                                                    = 0x40,
	tf_allways_fall_dead                                             = 0x80,
	tf_no_capture_alive                                              = 0x100,
	tf_mounted                                                       = 0x400,
	tf_is_merchant                                                   = 0x1000,
	tf_randomize_face                                                = 0x8000,
	tf_disable_sounds                                                = 0x10000,
	tf_guarantee_boots                                               = 0x100000,
	tf_guarantee_armor                                               = 0x200000,
	tf_guarantee_helmet                                              = 0x400000,
	tf_guarantee_gloves                                              = 0x800000,
	tf_guarantee_horse                                               = 0x1000000,
	tf_guarantee_shield                                              = 0x2000000,
	tf_guarantee_ranged                                              = 0x4000000,
	tf_guarantee_polearm                                             = 0x8000000,
	tf_unmoveable_in_party_window                                    = 0x10000000 
};

enum mbSkillType // #17666
{
	skl_trade                                                        = 0x0,
	skl_leadership                                                   = 0x1,
	skl_prisoner_management                                          = 0x2,
	skl_reserved_1                                                   = 0x3,
	skl_reserved_2                                                   = 0x4,
	skl_reserved_3                                                   = 0x5,
	skl_reserved_4                                                   = 0x6,
	skl_persuasion                                                   = 0x7,
	skl_engineer                                                     = 0x8,
	skl_first_aid                                                    = 0x9,
	skl_surgery                                                      = 0xA,
	skl_wound_treatment                                              = 0xB,
	skl_inventory_management                                         = 0xC,
	skl_spotting                                                     = 0xD,
	skl_pathfinding                                                  = 0xE,
	skl_tactics                                                      = 0xF,
	skl_tracking                                                     = 0x10,
	skl_trainer                                                      = 0x11,
	skl_reserved_5                                                   = 0x12,
	skl_reserved_6                                                   = 0x13,
	skl_reserved_7                                                   = 0x14,
	skl_reserved_8                                                   = 0x15,
	skl_looting                                                      = 0x16,
	skl_horse_archery                                                = 0x17,
	skl_riding                                                       = 0x18,
	skl_athletics                                                    = 0x19,
	skl_shield                                                       = 0x1A,
	skl_weapon_master                                                = 0x1B,
	skl_reserved_9                                                   = 0x1C,
	skl_reserved_10                                                  = 0x1D,
	skl_reserved_11                                                  = 0x1E,
	skl_reserved_12                                                  = 0x1F,
	skl_reserved_13                                                  = 0x20,
	skl_power_draw                                                   = 0x21,
	skl_power_throw                                                  = 0x22,
	skl_power_strike                                                 = 0x23,
	skl_ironflesh                                                    = 0x24,
	skl_reserved_14                                                  = 0x25,
	skl_reserved_15                                                  = 0x26,
	skl_reserved_16                                                  = 0x27,
	skl_reserved_17                                                  = 0x28,
	skl_reserved_18                                                  = 0x29 
};

enum mbBlowWeaponClass // #17709
{
	bwc_headshot                                                     = 0x0,
	bwc_couched_lance                                                = 0x1,
	bwc_unarmed                                                      = 0x2,
	bwc_horse_charge                                                 = 0x3,
	bwc_bow                                                          = 0x4,
	bwc_crossbow                                                     = 0x5,
	bwc_throwing_axe                                                 = 0x6,
	bwc_throwing_knife                                               = 0x7,
	bwc_javelin                                                      = 0x8,
	bwc_throwing_stone                                               = 0x9,
	bwc_pistol                                                       = 0xA,
	bwc_musket                                                       = 0xB,
	bwc_one_handed_sword                                             = 0xC,
	bwc_two_handed_sword                                             = 0xD,
	bwc_one_handed_axe                                               = 0xE,
	bwc_two_handed_axe                                               = 0xF,
	bwc_one_handed_mace                                              = 0x10,
	bwc_spear                                                        = 0x11,
	bwc_morning_star                                                 = 0x12,
	bwc_maul                                                         = 0x13,
	bwc_custom_1                                                     = 0x14,
	bwc_custom_2                                                     = 0x15,
	bwc_custom_3                                                     = 0x16,
	bwc_custom_4                                                     = 0x17,
	bwc_custom_5                                                     = 0x18,
	bwc_custom_6                                                     = 0x19,
	bwc_custom_7                                                     = 0x1A 
};

enum mbMappedSounds // #17737
{
	snd_click                                                        = 0x0,
	snd_gong                                                         = 0x1,
	snd_quest_taken                                                  = 0x2,
	snd_quest_completed                                              = 0x3,
	snd_quest_succeeded                                              = 0x4,
	snd_quest_concluded                                              = 0x5,
	snd_quest_failed                                                 = 0x6,
	snd_quest_cancelled                                              = 0x7,
	snd_rain                                                         = 0x8,
	snd_money_paid                                                   = 0x9,
	snd_money_received                                               = 0xA,
	snd_sword_clash_1                                                = 0xB,
	snd_sword_clash_2                                                = 0xC,
	snd_sword_clash_3                                                = 0xD,
	snd_sword_swing                                                  = 0xE,
	snd_footstep_grass                                               = 0xF,
	snd_footstep_wood                                                = 0x10,
	snd_footstep_water                                               = 0x11,
	snd_footstep_horse                                               = 0x12,
	snd_footstep_horse_1b                                            = 0x13,
	snd_footstep_horse_1f                                            = 0x14,
	snd_footstep_horse_2b                                            = 0x15,
	snd_footstep_horse_2f                                            = 0x16,
	snd_footstep_horse_3b                                            = 0x17,
	snd_footstep_horse_3f                                            = 0x18,
	snd_footstep_horse_4b                                            = 0x19,
	snd_footstep_horse_4f                                            = 0x1A,
	snd_footstep_horse_5b                                            = 0x1B,
	snd_footstep_horse_5f                                            = 0x1C,
	snd_jump_begin                                                   = 0x1D,
	snd_jump_end                                                     = 0x1E,
	snd_jump_begin_water                                             = 0x1F,
	snd_jump_end_water                                               = 0x20,
	snd_horse_jump_begin                                             = 0x21,
	snd_horse_jump_end                                               = 0x22,
	snd_horse_jump_begin_water                                       = 0x23,
	snd_horse_jump_end_water                                         = 0x24,
	snd_release_bow                                                  = 0x25,
	snd_release_crossbow                                             = 0x26,
	snd_throw_javelin                                                = 0x27,
	snd_throw_axe                                                    = 0x28,
	snd_throw_knife                                                  = 0x29,
	snd_throw_stone                                                  = 0x2A,
	snd_reload_crossbow                                              = 0x2B,
	snd_reload_crossbow_continue                                     = 0x2C,
	snd_pull_bow                                                     = 0x2D,
	snd_pull_arrow                                                   = 0x2E,
	snd_arrow_pass_by                                                = 0x2F,
	snd_bolt_pass_by                                                 = 0x30,
	snd_javelin_pass_by                                              = 0x31,
	snd_stone_pass_by                                                = 0x32,
	snd_axe_pass_by                                                  = 0x33,
	snd_knife_pass_by                                                = 0x34,
	snd_bullet_pass_by                                               = 0x35,
	snd_incoming_arrow_hit_ground                                    = 0x36,
	snd_incoming_bolt_hit_ground                                     = 0x37,
	snd_incoming_javelin_hit_ground                                  = 0x38,
	snd_incoming_stone_hit_ground                                    = 0x39,
	snd_incoming_axe_hit_ground                                      = 0x3A,
	snd_incoming_knife_hit_ground                                    = 0x3B,
	snd_incoming_bullet_hit_ground                                   = 0x3C,
	snd_outgoing_arrow_hit_ground                                    = 0x3D,
	snd_outgoing_bolt_hit_ground                                     = 0x3E,
	snd_outgoing_javelin_hit_ground                                  = 0x3F,
	snd_outgoing_stone_hit_ground                                    = 0x40,
	snd_outgoing_axe_hit_ground                                      = 0x41,
	snd_outgoing_knife_hit_ground                                    = 0x42,
	snd_outgoing_bullet_hit_ground                                   = 0x43,
	snd_draw_sword                                                   = 0x44,
	snd_put_back_sword                                               = 0x45,
	snd_draw_greatsword                                              = 0x46,
	snd_put_back_greatsword                                          = 0x47,
	snd_draw_axe                                                     = 0x48,
	snd_put_back_axe                                                 = 0x49,
	snd_draw_greataxe                                                = 0x4A,
	snd_put_back_greataxe                                            = 0x4B,
	snd_draw_spear                                                   = 0x4C,
	snd_put_back_spear                                               = 0x4D,
	snd_draw_crossbow                                                = 0x4E,
	snd_put_back_crossbow                                            = 0x4F,
	snd_draw_revolver                                                = 0x50,
	snd_put_back_revolver                                            = 0x51,
	snd_draw_dagger                                                  = 0x52,
	snd_put_back_dagger                                              = 0x53,
	snd_draw_bow                                                     = 0x54,
	snd_put_back_bow                                                 = 0x55,
	snd_draw_shield                                                  = 0x56,
	snd_put_back_shield                                              = 0x57,
	snd_draw_other                                                   = 0x58,
	snd_put_back_other                                               = 0x59,
	snd_body_fall_small                                              = 0x5A,
	snd_body_fall_big                                                = 0x5B,
	snd_horse_body_fall_begin                                        = 0x5C,
	snd_horse_body_fall_end                                          = 0x5D,
	snd_shield_broken                                                = 0x5E,
	snd_hide                                                         = 0x5F,
	snd_unhide                                                       = 0x60,
	snd_neigh                                                        = 0x61,
	snd_gallop                                                       = 0x62,
	snd_battle                                                       = 0x63,
	snd_arrow_hit_body                                               = 0x64,
	snd_blunt_hit                                                    = 0x65,
	snd_player_hit_by_arrow                                          = 0x66,
	snd_horse_walk                                                   = 0x67,
	snd_horse_trot                                                   = 0x68,
	snd_horse_canter                                                 = 0x69,
	snd_horse_gallop                                                 = 0x6A,
	snd_horse_breath                                                 = 0x6B,
	snd_horse_snort                                                  = 0x6C,
	snd_block_fist                                                   = 0x6D,
	snd_hit_wood_wood                                                = 0x6E,
	snd_hit_metal_metal                                              = 0x6F,
	snd_hit_wood_metal                                               = 0x70,
	snd_shield_hit_wood_wood                                         = 0x71,
	snd_shield_hit_metal_metal                                       = 0x72,
	snd_shield_hit_wood_metal                                        = 0x73,
	snd_shield_hit_metal_wood                                        = 0x74,
	snd_metal_hit_low_armor_low_damage                               = 0x75,
	snd_metal_hit_low_armor_high_damage                              = 0x76,
	snd_metal_hit_high_armor_low_damage                              = 0x77,
	snd_metal_hit_high_armor_high_damage                             = 0x78,
	snd_wooden_hit_low_armor_low_damage                              = 0x79,
	snd_wooden_hit_low_armor_high_damage                             = 0x7A,
	snd_wooden_hit_high_armor_low_damage                             = 0x7B,
	snd_wooden_hit_high_armor_high_damage                            = 0x7C,
	snd_mp_arrow_hit_target                                          = 0x7D,
	snd_release_crossbow_medium                                      = 0x7E,
	snd_release_crossbow_far                                         = 0x7F,
	snd_bullet_hit_body                                              = 0x80,
	snd_player_hit_by_bullet                                         = 0x81 
};

enum mbBlowType // #17868
{
	blt_none                                                         = 0x0,
	blt_stun                                                         = 0x1,
	blt_fall                                                         = 0x2,
	blt_kick                                                         = 0x3,
	blt_horse_charge                                                 = 0x4,
	blt_punch                                                        = 0x5,
	blt_weapon                                                       = 0x6,
	blt_couch                                                        = 0x7,
	blt_pike_bracing                                                 = 0x8 
};

enum mbDefendControl // #17878
{
	dctrl_auto                                                       = 0x0,
	dctrl_mouse                                                      = 0x1,
	dctrl_keyboard                                                   = 0x2 
};

enum mbControlFlags2 // #17882
{
	cf2_move_forward                                                 = 0x1,
	cf2_move_backward                                                = 0x2,
	cf2_move_right                                                   = 0x4,
	cf2_move_left                                                    = 0x8,
	cf2_move_mask                                                    = 0xF,
	cf2_move_horse_forward                                           = 0x10,
	cf2_move_horse_backward                                          = 0x20,
	cf2_move_horse_right                                             = 0x40,
	cf2_move_horse_left                                              = 0x80,
	cf2_move_horse_mask                                              = 0xF0,
	cf2_walk                                                         = 0x100,
	cf2_attack_left                                                  = 0x200,
	cf2_attack_right                                                 = 0x400,
	cf2_attack_overswing                                             = 0x800,
	cf2_attack_thrust                                                = 0x1000,
	cf2_attack_mask                                                  = 0x1E00,
	cf2_defend_right                                                 = 0x2000,
	cf2_defend_left                                                  = 0x4000,
	cf2_defend_overswing                                             = 0x8000,
	cf2_defend_thrust                                                = 0x10000,
	cf2_defend_auto                                                  = 0x20000,
	cf2_defend_manual_mask                                           = 0x1E000,
	cf2_defend_mask                                                  = 0x3E000,
	cf2_use_object                                                   = 0x40000,
	cf2_block                                                        = 0x80000,
	cf2_cheer                                                        = 0x100000,
	cf2_zoom                                                         = 0x800000 
};

enum mbGameKeys // #17910
{
	gk_move_forward                                                  = 0x0,
	gk_move_backward                                                 = 0x1,
	gk_move_left                                                     = 0x2,
	gk_move_right                                                    = 0x3,
	gk_action                                                        = 0x4,
	gk_jump                                                          = 0x5,
	gk_attack                                                        = 0x6,
	gk_defend                                                        = 0x7,
	gk_kick                                                          = 0x8,
	gk_toggle_weapon_mode                                            = 0x9,
	gk_equip_weapon_1                                                = 0xA,
	gk_equip_weapon_2                                                = 0xB,
	gk_equip_weapon_3                                                = 0xC,
	gk_equip_weapon_4                                                = 0xD,
	gk_equip_primary_weapon                                          = 0xE,
	gk_equip_secondary_weapon                                        = 0xF,
	gk_drop_primary_weapon                                           = 0x10,
	gk_sheath_primary_weapon                                         = 0x11,
	gk_leave                                                         = 0x12,
	gk_zoom                                                          = 0x13,
	gk_view_char                                                     = 0x14,
	gk_cam_toggle                                                    = 0x15,
	gk_view_orders                                                   = 0x16,
	gk_order_1                                                       = 0x17,
	gk_order_2                                                       = 0x18,
	gk_order_3                                                       = 0x19,
	gk_order_4                                                       = 0x1A,
	gk_order_5                                                       = 0x1B,
	gk_order_6                                                       = 0x1C,
	gk_everyone_hear                                                 = 0x1D,
	gk_infantry_hear                                                 = 0x1E,
	gk_archers_hear                                                  = 0x1F,
	gk_cavalry_hear                                                  = 0x20,
	gk_group3_hear                                                   = 0x21,
	gk_group4_hear                                                   = 0x22,
	gk_group5_hear                                                   = 0x23,
	gk_group6_hear                                                   = 0x24,
	gk_group7_hear                                                   = 0x25,
	gk_group8_hear                                                   = 0x26,
	gk_reverse_order_group                                           = 0x27,
	gk_everyone_around_hear                                          = 0x28,
	gk_mp_message_all                                                = 0x29,
	gk_mp_message_team                                               = 0x2A,
	gk_character_window                                              = 0x2B,
	gk_inventory_window                                              = 0x2C,
	gk_party_window                                                  = 0x2D,
	gk_quests_window                                                 = 0x2E,
	gk_game_log_window                                               = 0x2F,
	gk_quick_save                                                    = 0x30,
	gk_crouch                                                        = 0x31,
	gk_order_7                                                       = 0x32,
	gk_order_8                                                       = 0x33,
	gk_walk                                                          = 0x34,
	gk_walk_toggle                                                   = 0x35,
	gk_rear_horse                                                    = 0x36,
	gk_hide_ui                                                       = 0x37,
	gk_hide_tooltips                                                 = 0x38,
	gk_sheath_secondary_weapon                                       = 0x39,
	gk_drop_secondary_weapon                                         = 0x3A,
	gk_dismount                                                      = 0x3B,
	gk_command_line                                                  = 0x3C,
	gk_camera_closer                                                 = 0x3D,
	gk_camera_farther                                                = 0x3E,
	gk_spectator_camera_move_forward                                 = 0x3F,
	gk_spectator_camera_move_backward                                = 0x40,
	gk_spectator_camera_move_left                                    = 0x41,
	gk_spectator_camera_move_right                                   = 0x42,
	gk_spectator_camera_faster                                       = 0x43,
	gk_spectator_camera_slower                                       = 0x44,
	gk_map_move_forward                                              = 0x45,
	gk_map_move_backward                                             = 0x46,
	gk_map_move_left                                                 = 0x47,
	gk_map_move_right                                                = 0x48,
	gk_map_wait                                                      = 0x49,
	gk_take_screenshot                                               = 0x4A,
	gk_custom_1                                                      = 0x4B 
};

enum mbAttackControl // #17987
{
	actrl_auto                                                       = 0x0,
	actrl_mouse                                                      = 0x1,
	actrl_mouse_inverted                                             = 0x2,
	actrl_keyboard                                                   = 0x3 
};

enum mbActionFlags // #17992
{
	acf_synch_with_horse                                             = 0x1,
	acf_enforce_lowerbody                                            = 0x100,
	acf_enforce_rightside                                            = 0x200,
	acf_enforce_all                                                  = 0x400,
	acf_lock_rotation                                                = 0x800,
	acf_parallels_for_look_slope                                     = 0x1000,
	acf_lock_camera                                                  = 0x2000,
	acf_displace_position                                            = 0x4000,
	acf_ignore_slope                                                 = 0x8000,
	acf_rot_vertical_bow                                             = 0x100000,
	acf_rot_vertical_sword                                           = 0x200000,
	acf_rot_vertical_mask                                            = 0x300000 
};

enum mbScenePropFlags // #18005
{
	sokf_type_container                                              = 0x5,
	sokf_type_ai_limiter                                             = 0x8,
	sokf_type_barrier                                                = 0x9,
	sokf_type_barrier_leave                                          = 0xA,
	sokf_type_ladder                                                 = 0xB,
	sokf_type_barrier3d                                              = 0xC,
	sokf_type_player_limiter                                         = 0xD,
	sokf_type_ai_limiter3d                                           = 0xE,
	sokf_add_fire                                                    = 0x100,
	sokf_add_smoke                                                   = 0x200,
	sokf_add_light                                                   = 0x400,
	sokf_show_hit_point_bar                                          = 0x800,
	sokf_place_at_origin                                             = 0x1000,
	sokf_dynamic                                                     = 0x2000,
	sokf_invisible                                                   = 0x4000,
	sokf_destructible                                                = 0x8000,
	sokf_moveable                                                    = 0x10000,
	sokf_face_player                                                 = 0x20000,
	sokf_dynamic_physics                                             = 0x40000,
	sokf_missiles_not_attached                                       = 0x80000,
	sokf_enforce_shadows                                             = 0x100000,
	sokf_dont_move_agent_over                                        = 0x200000,
	sokf_handle_as_flora                                             = 0x1000000,
	sokf_static_movement                                             = 0x2000000,
	sokf_useable_without_physics                                     = 0x4000000,
	sokf_weapon_knock_back_collision                                 = 0x10000000 
};

enum mbAnimationFlags // #18032
{
	arf_blend_mask                                                   = 0xFF,
	arf_make_walk_sound                                              = 0x100,
	arf_make_custom_sound                                            = 0x200,
	arf_two_handed_blade                                             = 0x1000000,
	arf_lancer                                                       = 0x2000000,
	arf_stick_item_to_left_hand                                      = 0x4000000,
	arf_cyclic                                                       = 0x10000000,
	arf_use_walk_progress                                            = 0x20000000,
	arf_use_stand_progress                                           = 0x40000000,
	arf_use_inv_walk_progress                                        = 0x80000000 
};

enum mbSiteFlags // #18043
{
	sf_indoors                                                       = 0x1,
	sf_force_skybox                                                  = 0x2,
	sf_generate                                                      = 0x100,
	sf_randomize                                                     = 0x200,
	sf_auto_entry_points                                             = 0x400,
	sf_no_horses                                                     = 0x800,
	sf_muddy_water                                                   = 0x1000 
};

enum mbSoundFlags // #18051
{
	sf_2d                                                            = 0x1,
	sf_looping                                                       = 0x2,
	sf_start_at_random_pos                                           = 0x4,
	sf_stream_from_hd                                                = 0x8,
	sf_always_send_via_network                                       = 0x100000,
	sf_use_next_for_far                                              = 0x1000000,
	sf_priority_mask                                                 = 0xF,
	sf_priority_shift                                                = 0x4,
	sf_volume_mask                                                   = 0xF,
	sf_volume_shift                                                  = 0x8 
};

enum mbnetAgentReplicationRowType // #18062
{
	art_position                                                     = 0x0,
	art_movement_dirf                                                = 0x1,
	art_forward_speed                                                = 0x2,
	art_walk_state                                                   = 0x3,
	art_action_channels_0_next_action                                = 0x4,
	art_action_channels_1_next_action                                = 0x5,
	art_control_look_dirf                                            = 0x6,
	art_control_look_dir_height                                      = 0x7,
	art_wielded_primary_item                                         = 0x8,
	art_wielded_secondary_item                                       = 0x9,
	art_acceleration_state                                           = 0xA,
	art_strafe_state                                                 = 0xB,
	art_horse_turn_state                                             = 0xC,
	art_hit_points_int                                               = 0xD,
	art_item_0_flags                                                 = 0xE,
	art_item_1_flags                                                 = 0xF,
	art_item_2_flags                                                 = 0x10,
	art_item_3_flags                                                 = 0x11,
	art_item_0_no                                                    = 0x12,
	art_item_1_no                                                    = 0x13,
	art_item_2_no                                                    = 0x14,
	art_item_3_no                                                    = 0x15,
	art_item_0_alternative_usage                                     = 0x16,
	art_item_1_alternative_usage                                     = 0x17,
	art_item_2_alternative_usage                                     = 0x18,
	art_item_3_alternative_usage                                     = 0x19,
	art_couched_lance_mode                                           = 0x1A,
	art_group_no                                                     = 0x1B,
	art_crouch_mode                                                  = 0x1C 
};

enum mbMissionEntityObjectType // #18092
{
	mot_skybox                                                       = 0x1,
	mot_missile                                                      = 0x2,
	mot_agent                                                        = 0xB,
	mot_object                                                       = 0xC 
};

enum mbItemDamageType // #18097
{
	dt_cut                                                           = 0x0,
	dt_pierce                                                        = 0x1,
	dt_blunt                                                         = 0x2,
	dt_direct                                                        = 0x3 
};

enum mbActionMasterFlags // #18104
{
	amf_priority_continue                                            = 0x1,
	amf_priority_jump                                                = 0x2,
	amf_priority_ride                                                = 0x2,
	amf_priority_attack                                              = 0xA,
	amf_priority_cancel                                              = 0xC,
	amf_priority_defend                                              = 0xE,
	amf_priority_defend_parry                                        = 0xF,
	amf_priority_throw                                               = 0xF,
	amf_priority_blocked                                             = 0xF,
	amf_priority_parried                                             = 0xF,
	amf_priority_kick                                                = 0x21,
	amf_priority_jump_end                                            = 0x21,
	amf_priority_reload                                              = 0x3C,
	amf_priority_mount                                               = 0x40,
	amf_priority_equip                                               = 0x46,
	amf_priority_rear                                                = 0x4A,
	amf_priority_striked                                             = 0x50,
	amf_priority_fall_from_horse                                     = 0x51,
	amf_priority_die                                                 = 0x5F,
	amf_rider_rot_bow                                                = 0x1000,
	amf_rider_rot_throw                                              = 0x2000,
	amf_rider_rot_crossbow                                           = 0x3000,
	amf_rider_rot_pistol                                             = 0x4000,
	amf_rider_rot_overswing                                          = 0x5000,
	amf_rider_rot_thrust                                             = 0x6000,
	amf_rider_rot_swing_right                                        = 0x7000,
	amf_rider_rot_swing_left                                         = 0x8000,
	amf_rider_rot_couched_lance                                      = 0x9000,
	amf_rider_rot_shield                                             = 0xA000,
	amf_rider_rot_defend                                             = 0xB000,
	amf_start_instantly                                              = 0x10000,
	amf_use_cycle_period                                             = 0x100000,
	amf_use_attack_speed                                             = 0x200000,
	amf_use_defend_speed                                             = 0x400000,
	amf_accurate_body                                                = 0x800000,
	amf_client_prediction                                            = 0x1000000,
	amf_play                                                         = 0x2000000,
	amf_keep                                                         = 0x4000000,
	amf_restart                                                      = 0x8000000,
	amf_hide_weapon                                                  = 0x10000000,
	amf_client_owner_prediction                                      = 0x20000000,
	amf_continue_to_next                                             = 0x80000000 
};

enum mbParryAction // #18151
{
	pa_free                                                          = 0x0,
	pa_parrying                                                      = 0x1 
};

enum mbAttackAction // #18154
{
	aa_free                                                          = 0x0,
	aa_readying                                                      = 0x1,
	aa_releasing                                                     = 0x2,
	aa_hit                                                           = 0x3,
	aa_parried                                                       = 0x4,
	aa_reloading                                                     = 0x5,
	aa_released                                                      = 0x6,
	aa_cancelling                                                    = 0x7 
};

enum rglGraphicsBufferPolicy // #18163
{
	gbp_static                                                       = 0x0,
	gbp_dynamic                                                      = 0x1,
	gbp_invalid                                                      = 0x2 
};

enum mbMissionCollisionType // #18167
{
	mct_none                                                         = 0x0,
	mct_agent                                                        = 0x1,
	mct_removed                                                      = 0x2,
	mct_scene                                                        = 0x3,
	mct_static_object                                                = 0x4,
	mct_blocked                                                      = 0x5,
	mct_parried                                                      = 0x6,
	mct_chambered                                                    = 0x7,
	mct_friend_agent                                                 = 0x8,
	mct_neutral_agent                                                = 0x9,
	mct_water                                                        = 0xA,
	mct_dynamic_object                                               = 0xB 
};

enum mbDivisionOrder // #18180
{
	ordr_hold                                                        = 0x0,
	ordr_follow                                                      = 0x1,
	ordr_charge                                                      = 0x2,
	ordr_mount                                                       = 0x3,
	ordr_dismount                                                    = 0x4,
	ordr_advance                                                     = 0x5,
	ordr_fall_back                                                   = 0x6,
	ordr_stand_closer                                                = 0x7,
	ordr_spread_out                                                  = 0x8,
	ordr_use_blunt_weapons                                           = 0x9,
	ordr_use_any_weapon                                              = 0xA,
	ordr_stand_ground                                                = 0xB,
	ordr_hold_fire                                                   = 0xC,
	ordr_fire_at_will                                                = 0xD,
	ordr_retreat                                                     = 0xE,
	ordr_use_melee_weapons                                           = 0xF,
	ordr_use_ranged_weapons                                          = 0x10,
	ordr_fire_at_my_command                                          = 0x11,
	ordr_all_fire_now                                                = 0x12,
	ordr_left_fire_now                                               = 0x13,
	ordr_middle_fire_now                                             = 0x14,
	ordr_right_fire_now                                              = 0x15,
	ordr_form_1_row                                                  = 0x16,
	ordr_form_2_row                                                  = 0x17,
	ordr_form_3_row                                                  = 0x18,
	ordr_form_4_row                                                  = 0x19,
	ordr_form_5_row                                                  = 0x1A 
};

enum mbControlFlags1 // #18208
{
	cf1_dismount_horse                                               = 0x1,
	cf1_mount_horse                                                  = 0x2,
	cf1_rear_horse                                                   = 0x4,
	cf1_spur_horse                                                   = 0x8,
	cf1_jump                                                         = 0x10,
	cf1_wield_item_0                                                 = 0x20,
	cf1_wield_item_1                                                 = 0x40,
	cf1_wield_item_2                                                 = 0x80,
	cf1_wield_item_3                                                 = 0x100,
	cf1_wield_mask                                                   = 0x1E0,
	cf1_sheath_primary                                               = 0x200,
	cf1_sheath_secondary                                             = 0x400,
	cf1_toggle_item_mode                                             = 0x800,
	cf1_order_hold                                                   = 0x1000,
	cf1_order_follow                                                 = 0x2000,
	cf1_order_charge                                                 = 0x3000,
	cf1_order_stand_ground                                           = 0x4000,
	cf1_order_retreat                                                = 0x5000,
	cf1_order_mount                                                  = 0x6000,
	cf1_order_dismount                                               = 0x7000,
	cf1_order_hold_fire                                              = 0x8000,
	cf1_order_fire_at_will                                           = 0x9000,
	cf1_order_advance                                                = 0xA000,
	cf1_order_fall_back                                              = 0xB000,
	cf1_order_stand_closer                                           = 0xC000,
	cf1_order_spread_out                                             = 0xD000,
	cf1_order_use_blunt_weapons                                      = 0xE000,
	cf1_order_use_any_weapon                                         = 0xF000,
	cf1_order_mask                                                   = 0xFF000,
	cf1_order_use_melee_weapons                                      = 0x10000,
	cf1_order_use_ranged_weapons                                     = 0x11000,
	cf1_order_fire_at_my_command                                     = 0x12000,
	cf1_order_all_fire_now                                           = 0x13000,
	cf1_order_left_fire_now                                          = 0x14000,
	cf1_order_middle_fire_now                                        = 0x15000,
	cf1_order_right_fire_now                                         = 0x16000,
	cf1_order_form_1_row                                             = 0x17000,
	cf1_order_form_2_row                                             = 0x18000,
	cf1_order_form_3_row                                             = 0x19000,
	cf1_order_form_4_row                                             = 0x1A000,
	cf1_order_form_5_row                                             = 0x1B000,
	cf1_hear_combine                                                 = 0x800000,
	cf1_hear_infantry                                                = 0x1000000,
	cf1_hear_archers                                                 = 0x2000000,
	cf1_hear_cavalry                                                 = 0x3000000,
	cf1_hear_group_3                                                 = 0x4000000,
	cf1_hear_group_4                                                 = 0x5000000,
	cf1_hear_group_5                                                 = 0x6000000,
	cf1_hear_group_6                                                 = 0x7000000,
	cf1_hear_group_7                                                 = 0x8000000,
	cf1_hear_group_8                                                 = 0x9000000,
	cf1_hear_everyone_around                                         = 0xD000000,
	cf1_hear_everyone                                                = 0xE000000,
	cf1_hear_reverse                                                 = 0xF000000,
	cf1_hear_mask                                                    = 0xF000000,
	cf1_kick                                                         = 0x10000000,
	cf1_crouch                                                       = 0x20000000 
};

enum mbCombatMessageType // #18266
{
	cm_hear                                                          = 0x0,
	cm_order                                                         = 0x1,
	cm_invalid                                                       = 0x2 
};

enum mbAgentHorseWalkState // #18270
{
	hws_walk_backwards                                               = 0x0,
	hws_stand                                                        = 0x1,
	hws_walk                                                         = 0x2,
	hws_trot                                                         = 0x3,
	hws_canter                                                       = 0x4,
	hws_gallop                                                       = 0x5,
	hws_pace_mask                                                    = 0x7,
	hws_accelerating                                                 = 0x10,
	hws_decelerating                                                 = 0x20,
	hws_movement_mask                                                = 0x30 
};

enum mbLanceControl // #18281
{
	lctrl_auto                                                       = 0x0,
	lctrl_easy                                                       = 0x1,
	lctrl_hard                                                       = 0x2 
};

enum mbTroopProficiencyKind // #18285
{
	wpf_one_handed                                                   = 0x0,
	wpf_two_handed                                                   = 0x1,
	wpf_polearm                                                      = 0x2,
	wpf_archery                                                      = 0x3,
	wpf_crossbow                                                     = 0x4,
	wpf_throwing                                                     = 0x5,
	wpf_firearms                                                     = 0x6 
};

enum mbSkeletonHumanBoneKind // #18293
{
	hb_abdomen                                                       = 0x0,
	hb_thigh_l                                                       = 0x1,
	hb_calf_l                                                        = 0x2,
	hb_foot_l                                                        = 0x3,
	hb_thigh_r                                                       = 0x4,
	hb_calf_r                                                        = 0x5,
	hb_foot_r                                                        = 0x6,
	hb_spine                                                         = 0x7,
	hb_thorax                                                        = 0x8,
	hb_head                                                          = 0x9,
	hb_shoulder_l                                                    = 0xA,
	hb_upperarm_l                                                    = 0xB,
	hb_forearm_l                                                     = 0xC,
	hb_hand_l                                                        = 0xD,
	hb_item_l                                                        = 0xE,
	hb_shoulder_r                                                    = 0xF,
	hb_upperarm_r                                                    = 0x10,
	hb_forearm_r                                                     = 0x11,
	hb_hand_r                                                        = 0x12,
	hb_item_r                                                        = 0x13 
};

enum mbBlowFlags // #18314
{
	blf_stagger                                                      = 0x1,
	blf_interrupt                                                    = 0x2,
	blf_ranged                                                       = 0x4,
	blf_horse_charge                                                 = 0x10,
	blf_silent                                                       = 0x20,
	blf_crushthrough                                                 = 0x40,
	blf_no_knockdown                                                 = 0x80,
	blf_pike_bracing                                                 = 0x100 
};

enum mbTroopAttributeKind // #18323
{
	atr_str                                                          = 0x0,
	atr_agi                                                          = 0x1,
	atr_int                                                          = 0x2,
	atr_cha                                                          = 0x3 
};

enum mbSkinHorseVoice // #18328
{
	hrv_neigh                                                        = 0x0 
};

enum mbMissionTemplateFlags // #18330
{
	mtf_team_fight                                                   = 0x1,
	mtf_battle_mode                                                  = 0x2,
	mtf_commit_casualties                                            = 0x10,
	mtf_no_blood                                                     = 0x100,
	mtf_synch_inventory                                              = 0x10000 
};

enum mbSkeletonHorseBoneKind // #18336
{
	hrsb_pelvis                                                      = 0x0,
	hrsb_spine_1                                                     = 0x1,
	hrsb_spine_2                                                     = 0x2,
	hrsb_spine_3                                                     = 0x3,
	hrsb_neck_1                                                      = 0x4,
	hrsb_neck_2                                                      = 0x5,
	hrsb_neck_3                                                      = 0x6,
	hrsb_head                                                        = 0x7,
	hrsb_l_clavicle                                                  = 0x8,
	hrsb_l_upper_arm                                                 = 0x9,
	hrsb_l_forearm                                                   = 0xA,
	hrsb_l_hand                                                      = 0xB,
	hrsb_l_front_hoof                                                = 0xC,
	hrsb_r_clavicle                                                  = 0xD,
	hrsb_r_upper_arm                                                 = 0xE,
	hrsb_r_forearm                                                   = 0xF,
	hrsb_r_hand                                                      = 0x10,
	hrsb_r_front_hoof                                                = 0x11,
	hrsb_l_thigh                                                     = 0x12,
	hrsb_l_calf                                                      = 0x13,
	hrsb_l_foot                                                      = 0x14,
	hrsb_l_back_hoof                                                 = 0x15,
	hrsb_r_thigh                                                     = 0x16,
	hrsb_r_calf                                                      = 0x17,
	hrsb_r_foot                                                      = 0x18,
	hrsb_r_back_hoof                                                 = 0x19,
	hrsb_tail_1                                                      = 0x1A,
	hrsb_tail_2                                                      = 0x1B 
};

enum mbDivisionAttackOrder // #18365
{
	aordr_fire_at_will                                               = 0x0,
	aordr_hold_your_fire                                             = 0x1,
	aordr_fire_at_my_command                                         = 0x2 
};

enum mbDivisionWeaponOrder // #18369
{
	wordr_use_any_weapon                                             = 0x0,
	wordr_use_blunt_weapons                                          = 0x1,
	wordr_use_melee_weapons                                          = 0x2,
	wordr_use_ranged_weapons                                         = 0x3 
};

enum mbItemKindType // #18374
{
	itp_type_horse                                                   = 0x1,
	itp_type_one_handed                                              = 0x2,
	itp_type_two_handed                                              = 0x3,
	itp_type_polearm                                                 = 0x4,
	itp_type_arrows                                                  = 0x5,
	itp_type_bolts                                                   = 0x6,
	itp_type_shield                                                  = 0x7,
	itp_type_bow                                                     = 0x8,
	itp_type_crossbow                                                = 0x9,
	itp_type_thrown                                                  = 0xA,
	itp_type_goods                                                   = 0xB,
	itp_type_head_armor                                              = 0xC,
	itp_type_body_armor                                              = 0xD,
	itp_type_foot_armor                                              = 0xE,
	itp_type_hand_armor                                              = 0xF,
	itp_type_pistol                                                  = 0x10,
	itp_type_musket                                                  = 0x11,
	itp_type_bullets                                                 = 0x12,
	itp_type_animal                                                  = 0x13,
	itp_type_book                                                    = 0x14 
};

enum mbAgentAiCombatState // #18395
{
	aics_free                                                        = 0x0,
	aics_preparing                                                   = 0x1,
	aics_parrying                                                    = 0x2,
	aics_readying                                                    = 0x3,
	aics_releasing                                                   = 0x4,
	aics_melee_blocking                                              = 0x7,
	aics_ranged_seeking                                              = 0x7,
	aics_ranged_horse_maneuvering                                    = 0x8 
};

enum mbAgentAiRangedTargetStatus // #18404
{
	airts_not_in_sight                                               = 0x0,
	airts_in_sight                                                   = 0x1,
	airts_near_allies                                                = 0x2,
	airts_out_of_angle                                               = 0x3 
};

enum mbAgentAiMovementFlags // #18409
{
	aimf_moving                                                      = 0x1,
	aimf_forward                                                     = 0x2,
	aimf_backward                                                    = 0x4,
	aimf_right                                                       = 0x8,
	aimf_left                                                        = 0x10 
};

enum rglBodyType // #18415
{
	bt_sphere                                                        = 0x0,
	bt_capsule                                                       = 0x1,
	bt_quad                                                          = 0x2,
	bt_composite                                                     = 0x3,
	bt_manifold                                                      = 0x4 
};

enum mbAgentAiBehavior // #18421
{
	aisb_hold                                                        = 0x0,
	aisb_go_to_pos                                                   = 0x1,
	aisb_mount                                                       = 0x2,
	aisb_dismount                                                    = 0x3,
	aisb_melee                                                       = 0x4,
	aisb_ranged                                                      = 0x5,
	aisb_ranged_horseback                                            = 0x6,
	aisb_charge_horseback                                            = 0x7,
	aisb_maneuver_horseback                                          = 0x8,
	aisb_flock                                                       = 0x9,
	aisb_race                                                        = 0xA,
	aisb_patrol                                                      = 0xB,
	aisb_no_enemies                                                  = 0xC,
	aisb_horse_hold                                                  = 0xD,
	aisb_horse_run_away                                              = 0xE,
	aisb_run_away                                                    = 0xF 
};

enum mbAgentAiMoveTargetFlags // #18438
{
	aimtf_position                                                   = 0x1,
	aimtf_agent                                                      = 0x2,
	aimtf_running                                                    = 0x20,
	aimtf_horse_melee                                                = 0x80,
	aimtf_no_horse_reverse                                           = 0x200 
};

enum mbAgentAiMeleeMovementStatus // #18444
{
	aimms_closing                                                    = 0x0,
	aimms_avoiding                                                   = 0x1 
};

enum mbAgentAiLookFlags // #18447
{
	ailtf_position                                                   = 0x1,
	ailtf_agent                                                      = 0x2,
	ailtf_aiming                                                     = 0x20 
};

enum mbAgentAiScriptedMode // #18451
{
	aism_none                                                        = 0x0,
	aism_go_to_pos                                                   = 0x1,
	aism_go_to_pos_no_attack                                         = 0x4 
};

enum mbDivisionRidingOrder // #18455
{
	rordr_free                                                       = 0x0,
	rordr_mount                                                      = 0x1,
	rordr_dismount                                                   = 0x2 
};

enum mbDivisionMovementOrder // #18459
{
	mordr_charge                                                     = 0x0,
	mordr_hold                                                       = 0x1,
	mordr_follow                                                     = 0x2,
	mordr_stand_ground                                               = 0x3,
	mordr_retreat                                                    = 0x4 
};

enum mbAgentAiWeaponClass // #18465
{
	aiwc_melee                                                       = 0x1,
	aiwc_ranged                                                      = 0x2,
	aiwc_polearm                                                     = 0x3 
};

enum mbDefendAction // #18469
{
	da_free                                                          = 0x0,
	da_parrying                                                      = 0x1,
	da_blocking                                                      = 0x2 
};

enum mbAgentFilterFlags // #18613
{
	aff_no_enemies                                                   = 0x1,
	aff_no_allies                                                    = 0x2,
	aff_no_neutrals                                                  = 0x4,
	aff_no_humans                                                    = 0x10,
	aff_no_horses                                                    = 0x20,
	aff_in_front                                                     = 0x1000,
	aff_in_sight                                                     = 0x2000 
};

enum mbAgentAiBehaviorFlags // #18621
{
	aibf_alarmed                                                     = 0x1 
};

enum mbAgentWalkState // #18623
{
	ws_stand                                                         = 0x0,
	ws_walk                                                          = 0x1,
	ws_run                                                           = 0x2,
	ws_pace_mask                                                     = 0x7,
	ws_walking                                                       = 0x10 
};

enum mbAgentStatus // #18629
{
	as_alive                                                         = 0x1,
	as_fading                                                        = 0x2,
	as_wounded                                                       = 0x3,
	as_dead                                                          = 0x4 
};

enum mbAgentRunningStatus // #18634
{
	ars_holding                                                      = 0x0,
	ars_running                                                      = 0x1,
	ars_ran_away                                                     = 0x2 
};

enum rglRenderContextVisibilityFlags // #18638
{
	rcvf_default                                                     = 0x1,
	rcvf_full                                                        = 0xFFFF,
	rcvf_tableau                                                     = 0x2000,
	rcvf_shadowmap                                                   = 0x10000 
};

enum mbCharacterMetaMeshType // #18643
{
	cmt_head                                                         = 0x0,
	cmt_beard                                                        = 0x1,
	cmt_hair                                                         = 0x2,
	cmt_helmet                                                       = 0x3,
	cmt_armor                                                        = 0x4,
	cmt_trousers                                                     = 0x5,
	cmt_left_foot                                                    = 0x6,
	cmt_right_foot                                                   = 0x7,
	cmt_armature                                                     = 0x8,
	cmt_item_1                                                       = 0x9,
	cmt_item_2                                                       = 0xA,
	cmt_item_3                                                       = 0xB,
	cmt_item_4                                                       = 0xC,
	cmt_missile_1                                                    = 0xD,
	cmt_missile_2                                                    = 0xE,
	cmt_missile_3                                                    = 0xF,
	cmt_missile_4                                                    = 0x10,
	cmt_carry_1                                                      = 0x11,
	cmt_carry_2                                                      = 0x12,
	cmt_carry_3                                                      = 0x13,
	cmt_carry_4                                                      = 0x14,
	cmt_unknown_2                                                    = 0x15,
	cmt_left_hand                                                    = 0x16,
	cmt_right_hand                                                   = 0x17,
	cmt_left_bracer                                                  = 0x18,
	cmt_right_bracer                                                 = 0x19,
	cmt_banner                                                       = 0x1A,
	cmt_name                                                         = 0x1B 
};

enum rglEntityFlags // #18672
{
	ef_no_shadow                                                     = 0x0,
	ef_smooth_shadow                                                 = 0x1,
	ef_precise_shadow                                                = 0x2,
	ef_dynamic_reflections                                           = 0x4,
	ef_no_reflections                                                = 0x8 
};

enum mbAgentWieldedItemFlags // #18679
{
	awif_one_handed                                                  = 0x2,
	awif_two_handed                                                  = 0x4,
	awif_polearm                                                     = 0x8,
	awif_bow                                                         = 0x10,
	awif_ranged                                                      = 0x20,
	awif_shield                                                      = 0x1000 
};

enum rglGraphicsBufferKind // #18686
{
	gbk_vertex                                                       = 0x0,
	gbk_index                                                        = 0x1 
};

enum mbTroopEquipmentSlotKind // #18689
{
	ek_weapon_0                                                      = 0x0,
	ek_weapon_1                                                      = 0x1,
	ek_weapon_2                                                      = 0x2,
	ek_weapon_3                                                      = 0x3,
	ek_head_armor                                                    = 0x4,
	ek_body_armor                                                    = 0x5,
	ek_leg_armor                                                     = 0x6,
	ek_hand_armor                                                    = 0x7,
	ek_horse                                                         = 0x8 
};

enum mbWeatherPrecipitationType // #18699
{
	wpr_none                                                         = 0x0,
	wpr_rain                                                         = 0x1,
	wpr_snow                                                         = 0x2 
};

enum mbAgentController // #18703
{
	ac_other                                                         = 0x0,
	ac_bot                                                           = 0x1,
	ac_player                                                        = 0x2 
};

enum mbAgentType // #18707
{
	at_human                                                         = 0x0,
	at_horse                                                         = 0x1 
};

enum mbAgentExitStatus // #18711
{
	aes_present                                                      = 0x2,
	aes_exiting                                                      = 0x3,
	aes_exited                                                       = 0x4 
};

enum mbnetReplicationTableType // #18715
{
	rtt_agent                                                        = 0x0,
	rtt_player                                                       = 0x1 
};

enum mbAgentModifier // #18718
{
	am_damage                                                        = 0x0,
	am_ranged_damage                                                 = 0x1,
	am_accuracy                                                      = 0x2,
	am_speed                                                         = 0x3,
	am_reload_speed                                                  = 0x4,
	am_use_speed                                                     = 0x5,
	am_action_speed                                                  = 0x6 
};

enum mbAgentHand // #18726
{
	ah_primary                                                       = 0x0,
	ah_secondary                                                     = 0x1 
};

enum mbQueuedWindowType // #20267
{
	qwt_none                                                         = 0x0,
	qwt_return                                                       = 0x1,
	qwt_loot                                                         = 0x2,
	qwt_equip_other                                                  = 0x3,
	qwt_trade                                                        = 0x4,
	qwt_exchange_members                                             = 0x5,
	qwt_exchange_leader                                              = 0x6,
	qwt_give_members                                                 = 0x7,
	qwt_exchange_with_party                                          = 0x8,
	qwt_trade_prisoners                                              = 0x9,
	qwt_buy_mercenaries                                              = 0xA,
	qwt_view_character                                               = 0xB,
	qwt_training                                                     = 0xC,
	qwt_mission                                                      = 0xD,
	qwt_map_conversation                                             = 0xE,
	qwt_presentation                                                 = 0xF,
	qwt_notes                                                        = 0x10,
	qwt_map                                                          = 0x11,
	qwt_menu                                                         = 0x12,
	qwt_controls                                                     = 0x13,
	qwt_options                                                      = 0x14 
};

enum rglWidgetMeshKind // #20289
{
	wmk_background                                                   = 0x0,
	wmk_border_left                                                  = 0x1,
	wmk_border_right                                                 = 0x2,
	wmk_button_down                                                  = 0x3,
	wmk_button_up                                                    = 0x4,
	wmk_button_highlight                                             = 0x5,
	wmk_text                                                         = 0x6,
	wmk_highlight                                                    = 0x7,
	wmk_cursor                                                       = 0x8,
	wmk_structure                                                    = 0x9 
};

enum mbMappedPresentations // #20300
{
	prsnt_game_start                                                 = 0x0,
	prsnt_game_escape                                                = 0x1,
	prsnt_game_credits                                               = 0x2,
	prsnt_game_before_quit                                           = 0x3,
	prsnt_game_multiplayer_admin_panel                               = 0x4,
	prsnt_game_profile_banner_selection                              = 0x5,
	prsnt_game_custom_battle_designer                                = 0x6,
	prsnt_wse_mission_debug_window                                   = 0x7 
};

enum mbMappedScripts // #20309
{
	game_start                                                       = 0x0,
	game_quick_start                                                 = 0x1,
	game_set_multiplayer_mission_end                                 = 0x2,
	game_get_console_command                                         = 0x3,
	game_enable_cheat_menu                                           = 0x4,
	game_event_party_encounter                                       = 0x5,
	game_event_simulate_battle                                       = 0x6,
	game_get_item_buy_price_factor                                   = 0x7,
	game_get_item_sell_price_factor                                  = 0x8,
	game_event_buy_item                                              = 0x9,
	game_event_sell_item                                             = 0xA,
	game_get_troop_wage                                              = 0xB,
	game_get_total_wage                                              = 0xC,
	game_get_join_cost                                               = 0xD,
	game_get_prisoner_price                                          = 0xE,
	game_check_prisoner_can_be_sold                                  = 0xF,
	game_event_detect_party                                          = 0x10,
	game_event_undetect_party                                        = 0x11,
	game_get_statistics_line                                         = 0x12,
	game_get_date_text                                               = 0x13,
	game_get_money_text                                              = 0x14,
	game_get_party_companion_limit                                   = 0x15,
	game_get_party_prisoner_limit                                    = 0x16,
	game_get_item_extra_text                                         = 0x17,
	game_on_disembark                                                = 0x18,
	game_context_menu_get_buttons                                    = 0x19,
	game_event_context_menu_button_clicked                           = 0x1A,
	game_get_skill_modifier_for_troop                                = 0x1B,
	game_reset_player_party_name                                     = 0x1C,
	game_check_party_sees_party                                      = 0x1D,
	game_get_party_speed_multiplier                                  = 0x1E,
	game_event_battle_end                                            = 0x1F,
	game_get_troop_note                                              = 0x20,
	game_get_center_note                                             = 0x21,
	game_get_faction_note                                            = 0x22,
	game_get_quest_note                                              = 0x23,
	game_get_info_page_note                                          = 0x24,
	game_get_scene_name                                              = 0x25,
	game_get_mission_template_name                                   = 0x26,
	game_receive_network_message                                     = 0x27,
	game_get_multiplayer_server_option_for_mission_template          = 0x28,
	game_multiplayer_server_option_for_mission_template_to_string    = 0x29,
	game_get_use_string                                              = 0x2A,
	game_get_upgrade_xp                                              = 0x2B,
	game_get_upgrade_cost                                            = 0x2C,
	game_get_morale_of_troops_from_faction                           = 0x2D,
	game_multiplayer_get_game_type_mission_template                  = 0x2E,
	game_get_multiplayer_game_type_enum                              = 0x2F,
	game_receive_url_response                                        = 0x30,
	game_get_cheat_mode                                              = 0x31,
	game_multiplayer_event_duel_offered                              = 0x32,
	game_missile_launch                                              = 0x33,
	game_missile_dives_into_water                                    = 0x34,
	game_troop_upgrades_button_clicked                               = 0x35,
	game_character_screen_requested                                  = 0x36,
	wse_chat_message_received                                        = 0x37,
	wse_console_command_received                                     = 0x38,
	wse_game_saved                                                   = 0x39,
	wse_multiplayer_message_received                                 = 0x3A,
	wse_get_agent_scale                                              = 0x3B,
	wse_window_opened                                                = 0x3C,
	wse_savegame_loaded                                              = 0x3D,
	wse_get_server_info                                              = 0x3E,
	wse_initial_window_start                                         = 0x3F 
};

enum mbGameType // #20374
{
	gt_single                                                        = 0x0,
	gt_multi_client                                                  = 0x1,
	gt_multi_server                                                  = 0x2,
	gt_multi_client_server                                           = 0x3 
};

enum rglWidgetStateFlags // #20751
{
	wsf_mouse_inside                                                 = 0x1,
	wsf_mouse_enter                                                  = 0x2,
	wsf_mouse_leave                                                  = 0x4,
	wsf_mouse_left_up                                                = 0x8,
	wsf_mouse_left_down                                              = 0x10,
	wsf_mouse_right_up                                               = 0x20,
	wsf_mouse_right_down                                             = 0x40,
	wsf_mouse_middle_up                                              = 0x80,
	wsf_mouse_middle_down                                            = 0x100,
	wsf_mouse_left_staying_down                                      = 0x200,
	wsf_mouse_right_staying_down                                     = 0x400,
	wsf_mouse_middle_staying_down                                    = 0x800,
	wsf_key_press                                                    = 0x1000,
	wsf_event                                                        = 0x10000,
	wsf_close                                                        = 0x20000,
	wsf_double_click                                                 = 0x40000 
};

enum rglRenderContextFlags // #20984
{
	rcf_ignore_render_order                                          = 0x1,
	rcf_clear_render_target                                          = 0x100,
	rcf_clear_depth_buffer                                           = 0x200,
	rcf_add_at_end                                                   = 0x1000,
	rcf_fixed_water_level                                            = 0x4000,
	rcf_force_tableau_render                                         = 0x8000 
};

enum rglLightType // #20991
{
	lt_point                                                         = 0x0,
	lt_directional                                                   = 0x1 
};

enum mbSkillFlags // #20994
{
	sf_effects_party                                                 = 0x10,
	sf_inactive                                                      = 0x100 
};

enum rglKeys // #20997
{
	key_escape                                                       = 0x1,
	key_1                                                            = 0x2,
	key_2                                                            = 0x3,
	key_3                                                            = 0x4,
	key_4                                                            = 0x5,
	key_5                                                            = 0x6,
	key_6                                                            = 0x7,
	key_7                                                            = 0x8,
	key_8                                                            = 0x9,
	key_9                                                            = 0xA,
	key_0                                                            = 0xB,
	key_minus                                                        = 0xC,
	key_equals                                                       = 0xD,
	key_back_space                                                   = 0xE,
	key_tab                                                          = 0xF,
	key_q                                                            = 0x10,
	key_w                                                            = 0x11,
	key_e                                                            = 0x12,
	key_r                                                            = 0x13,
	key_t                                                            = 0x14,
	key_y                                                            = 0x15,
	key_u                                                            = 0x16,
	key_i                                                            = 0x17,
	key_o                                                            = 0x18,
	key_p                                                            = 0x19,
	key_open_braces                                                  = 0x1A,
	key_close_braces                                                 = 0x1B,
	key_enter                                                        = 0x1C,
	key_left_control                                                 = 0x1D,
	key_a                                                            = 0x1E,
	key_s                                                            = 0x1F,
	key_d                                                            = 0x20,
	key_f                                                            = 0x21,
	key_g                                                            = 0x22,
	key_h                                                            = 0x23,
	key_j                                                            = 0x24,
	key_k                                                            = 0x25,
	key_l                                                            = 0x26,
	key_semicolon                                                    = 0x27,
	key_apostrophe                                                   = 0x28,
	key_tilde                                                        = 0x29,
	key_left_shift                                                   = 0x2A,
	key_back_slash                                                   = 0x2B,
	key_z                                                            = 0x2C,
	key_x                                                            = 0x2D,
	key_c                                                            = 0x2E,
	key_v                                                            = 0x2F,
	key_b                                                            = 0x30,
	key_n                                                            = 0x31,
	key_m                                                            = 0x32,
	key_comma                                                        = 0x33,
	key_period                                                       = 0x34,
	key_slash                                                        = 0x35,
	key_right_shift                                                  = 0x36,
	key_numpad_multiply                                              = 0x37,
	key_left_alt                                                     = 0x38,
	key_space                                                        = 0x39,
	key_caps_lock                                                    = 0x3A,
	key_f1                                                           = 0x3B,
	key_f2                                                           = 0x3C,
	key_f3                                                           = 0x3D,
	key_f4                                                           = 0x3E,
	key_f5                                                           = 0x3F,
	key_f6                                                           = 0x40,
	key_f7                                                           = 0x41,
	key_f8                                                           = 0x42,
	key_f9                                                           = 0x43,
	key_f10                                                          = 0x44,
	key_num_lock                                                     = 0x45,
	key_numpad_7                                                     = 0x47,
	key_numpad_8                                                     = 0x48,
	key_numpad_9                                                     = 0x49,
	key_numpad_minus                                                 = 0x4A,
	key_numpad_4                                                     = 0x4B,
	key_numpad_5                                                     = 0x4C,
	key_numpad_6                                                     = 0x4D,
	key_numpad_plus                                                  = 0x4E,
	key_numpad_1                                                     = 0x4F,
	key_numpad_2                                                     = 0x50,
	key_numpad_3                                                     = 0x51,
	key_numpad_0                                                     = 0x52,
	key_numpad_period                                                = 0x53,
	key_f11                                                          = 0x57,
	key_f12                                                          = 0x58,
	key_numpad_enter                                                 = 0x9C,
	key_right_control                                                = 0x9D,
	key_numpad_slash                                                 = 0xB5,
	key_print_screen                                                 = 0xB7,
	key_right_alt                                                    = 0xB8,
	key_home                                                         = 0xC7,
	key_up                                                           = 0xC8,
	key_page_up                                                      = 0xC9,
	key_left                                                         = 0xCB,
	key_right                                                        = 0xCD,
	key_end                                                          = 0xCF,
	key_down                                                         = 0xD0,
	key_page_down                                                    = 0xD1,
	key_insert                                                       = 0xD2,
	key_delete                                                       = 0xD3,
	key_left_mouse_button                                            = 0xE0,
	key_right_mouse_button                                           = 0xE1,
	key_middle_mouse_button                                          = 0xE2,
	key_mouse_button_4                                               = 0xE3,
	key_mouse_button_5                                               = 0xE4,
	key_mouse_button_6                                               = 0xE5,
	key_mouse_button_7                                               = 0xE6,
	key_mouse_button_8                                               = 0xE7,
	key_mouse_scroll_up                                              = 0xEE,
	key_mouse_scroll_down                                            = 0xEF 
};

enum mbCharacterWindowMode // #21107
{
	cwm_edit                                                         = 0x0,
	cwm_view                                                         = 0x1,
	cwm_train                                                        = 0x2 
};

enum mbMappedTableauMaterials // #21111
{
	tab_game_character_sheet                                         = 0x0,
	tab_game_inventory_window                                        = 0x1,
	tab_game_party_window                                            = 0x2,
	tab_game_troop_label_banner                                      = 0x3,
	tab_game_profile_window                                          = 0x4 
};

enum rglSimpleButtonWidgetFlags // #21143
{
	sbwf_toggleable                                                  = 0x1,
	sbwf_clickonce                                                   = 0x2 
};

enum rglFontFlags // #21146
{
	tf_auto_position                                                 = 0x1,
	tf_auto_size                                                     = 0x2,
	tf_left_align                                                    = 0x4,
	tf_right_align                                                   = 0x8,
	tf_center_align                                                  = 0x10,
	tf_multi_line                                                    = 0x100,
	tf_auto_scale                                                    = 0x200,
	tf_double_space                                                  = 0x800,
	tf_vertical_align_center                                         = 0x1000,
	tf_scrollable                                                    = 0x2000,
	tf_force_single_line                                             = 0x4000,
	tf_single_line                                                   = 0x8000,
	tf_with_outline                                                  = 0x10000,
	tf_scrollable_style_2                                            = 0x20000,
	tf_scrollable_horizontal                                         = 0x40000,
	tf_scrollable_horizontal_style_2                                 = 0x80000 
};

enum mbSentenceFlags // #21163
{
	stf_repeat_for_factions                                          = 0x1000,
	stf_repeat_for_parties                                           = 0x2000,
	stf_repeat_for_troops                                            = 0x3000,
	stf_repeat_for_100                                               = 0x4000,
	stf_repeat_for_1000                                              = 0x5000,
	stf_plyr                                                         = 0x10000,
	stf_party_tpl                                                    = 0x20000,
	stf_auto_proceed                                                 = 0x40000,
	stf_multi_line                                                   = 0x80000 
};

enum mbDialogStates // #21173
{
	dlg_start                                                        = 0x0,
	dlg_party_encounter                                              = 0x1,
	dlg_event_triggered                                              = 0x5,
	dlg_close_window                                                 = 0x6,
	dlg_member_chat                                                  = 0xD,
	dlg_prisoner_chat                                                = 0xE 
};

enum mbPartyWindowMode // #21229
{
	pwm_view                                                         = 0x0,
	pwm_exchange_members                                             = 0x1,
	pwm_trade_prisoners                                              = 0x2,
	pwm_buy_mercenaries                                              = 0x3,
	pwm_battle_result                                                = 0x4,
	pwm_battle_view                                                  = 0x5,
	pwm_exchange_leader                                              = 0x6,
	pwm_give_members                                                 = 0x7 
};

enum mbInventoryWindowMode // #21238
{
	iwm_view                                                         = 0x0,
	iwm_loot                                                         = 0x1,
	iwm_trade                                                        = 0x2,
	iwm_chest                                                        = 0x3,
	iwm_equip_other                                                  = 0x4 
};

enum mbNoteType // #21244
{
	nt_none                                                          = 0x0,
	nt_troop                                                         = 0x1,
	nt_faction                                                       = 0x2,
	nt_party                                                         = 0x3,
	nt_quest                                                         = 0x4,
	nt_info_page                                                     = 0x5 
};

enum rglFileOpenMode // #21253
{
	fom_read                                                         = 0x1,
	fom_write                                                        = 0x2,
	fom_binary                                                       = 0x4,
	fom_append                                                       = 0x8 
};

enum rglWidgetType // #23413
{
	wt_base                                                          = 0x0,
	wt_simple_button                                                 = 0x1,
	wt_slider                                                        = 0x2,
	wt_fill_slider                                                   = 0x3,
	wt_image                                                         = 0x4,
	wt_combo_button                                                  = 0x5,
	wt_text_box                                                      = 0x6,
	wt_simple_text_box                                               = 0x7,
	wt_scrollable                                                    = 0x8,
	wt_image_button                                                  = 0x9,
	wt_game_button                                                   = 0xA,
	wt_number_box                                                    = 0xB,
	wt_list_box                                                      = 0xC,
	wt_table                                                         = 0xD,
	wt_combo_label                                                   = 0xE,
	wt_scrollbar                                                     = 0xF,
	wt_meta_mesh                                                     = 0x10 
};

enum rglWidgetFlags // #23431
{
	wf_hidden                                                        = 0x1,
	wf_disabled                                                      = 0x2,
	wf_autosize                                                      = 0x100 
};

enum rglRenderThreadCallType // #23455
{
	rtct_effect_init_device_objects                                  = 0x0,
	rtct_texture_init_device_objects                                 = 0x1,
	rtct_texture_restore_device_objects                              = 0x2,
	rtct_texture_delete_device_objects                               = 0x3,
	rtct_take_screenshot                                             = 0x4,
	rtct_renderer_init_postfx_shaders                                = 0x5,
	rtct_resource_manager_init_hlsl_technique_device_objects         = 0x6,
	rtct_resource_manager_update_material_shaders                    = 0x7,
	rtct_show_cursor                                                 = 0x8,
	rtct_shader_param_int                                            = 0x9,
	rtct_shader_param_float                                          = 0xA,
	rtct_shader_param_float4                                         = 0xB,
	rtct_shader_param_float4x4                                       = 0xC 
};

enum mbMusicTrackFlags // #23489
{
	mtf_culture_1                                                    = 0x1,
	mtf_culture_2                                                    = 0x2,
	mtf_culture_3                                                    = 0x4,
	mtf_culture_4                                                    = 0x8,
	mtf_culture_5                                                    = 0x10,
	mtf_culture_6                                                    = 0x20,
	mtf_culture_all                                                  = 0x3F,
	mtf_looping                                                      = 0x40,
	mtf_start_immediately                                            = 0x80,
	mtf_persist_until_finished                                       = 0x100,
	mtf_sit_tavern                                                   = 0x200,
	mtf_sit_fight                                                    = 0x400,
	mtf_sit_multiplayer_fight                                        = 0x800,
	mtf_sit_ambushed                                                 = 0x1000,
	mtf_sit_town                                                     = 0x2000,
	mtf_sit_town_infiltrate                                          = 0x4000,
	mtf_sit_killed                                                   = 0x8000,
	mtf_sit_travel                                                   = 0x10000,
	mtf_sit_arena                                                    = 0x20000,
	mtf_sit_siege                                                    = 0x40000,
	mtf_sit_night                                                    = 0x80000,
	mtf_sit_day                                                      = 0x100000,
	mtf_sit_encounter_hostile                                        = 0x200000,
	mtf_sit_main_title                                               = 0x400000,
	mtf_sit_victorious                                               = 0x800000,
	mtf_sit_feast                                                    = 0x1000000,
	mtf_sit_ambient_music                                            = 0x2000000,
	mtf_module_track                                                 = 0x10000000 
};

enum mbLoadingWindowType // #23518
{
	lwt_new_game                                                     = 0x0,
	lwt_load_game                                                    = 0x1,
	lwt_quick_battle                                                 = 0x2,
	lwt_tutorial                                                     = 0x3,
	lwt_multiplayer                                                  = 0x4,
	lwt_initial_screen                                               = 0x5 
};

enum mbMetaMissionSide // #23525
{
	mms_defender                                                     = 0x0,
	mms_attacker                                                     = 0x1,
	mms_observer                                                     = 0x2 
};

enum mbPartyFilterFlags // #23529
{
	pff_no_commander                                                 = 0x1,
	pff_no_heroes                                                    = 0x2,
	pff_no_wounded_heroes                                            = 0x4,
	pff_no_regulars                                                  = 0x8,
	pff_no_prisoners                                                 = 0x10,
	pff_no_player                                                    = 0x20,
	pff_no_wounded_regulars                                          = 0x100 
};

enum mbPartyAiBehavior // #23537
{
	ai_bhvr_hold                                                     = 0x0,
	ai_bhvr_travel_to_party                                          = 0x1,
	ai_bhvr_patrol_location                                          = 0x2,
	ai_bhvr_patrol_party                                             = 0x3,
	ai_bhvr_attack_party                                             = 0x4,
	ai_bhvr_avoid_party                                              = 0x5,
	ai_bhvr_travel_to_point                                          = 0x6,
	ai_bhvr_negotiate_party                                          = 0x7,
	ai_bhvr_in_town                                                  = 0x8,
	ai_bhvr_travel_to_ship                                           = 0x9,
	ai_bhvr_escort_party                                             = 0xA,
	ai_bhvr_driven_by_party                                          = 0xB 
};

enum mbEventType // #23550
{
	et_battle                                                        = 0x1,
	et_landing                                                       = 0x2 
};

enum mbSkinFlags // #23553
{
	skf_use_morph_key_10                                             = 0x1,
	skf_use_morph_key_20                                             = 0x2,
	skf_use_morph_key_30                                             = 0x3,
	skf_use_morph_key_40                                             = 0x4,
	skf_use_morph_key_50                                             = 0x5,
	skf_use_morph_key_60                                             = 0x6,
	skf_use_morph_key_70                                             = 0x7,
	skf_morph_key_mask                                               = 0x7 
};

enum mbCharacterAlterFlags // #24000
{
	af_override_weapons                                              = 0xF,
	af_override_weapon_0                                             = 0x1,
	af_override_weapon_1                                             = 0x2,
	af_override_weapon_2                                             = 0x4,
	af_override_weapon_3                                             = 0x8,
	af_override_head                                                 = 0x10,
	af_override_body                                                 = 0x20,
	af_override_foot                                                 = 0x40,
	af_override_gloves                                               = 0x80,
	af_override_armor                                                = 0xF0,
	af_override_horse                                                = 0x100,
	af_override_fullhelm                                             = 0x200,
	af_require_civilian                                              = 0x10000000 
};

enum rglMaterialFlags // #24071
{
	mf_no_fog                                                        = 0x1,
	mf_no_lighting                                                   = 0x2,
	mf_no_depth_effects                                              = 0x4,
	mf_no_z_write                                                    = 0x8,
	mf_no_depth_test                                                 = 0x10,
	mf_uniform_shading                                               = 0x40,
	mf_alpha_blend_modulate                                          = 0x100,
	mf_alpha_blend_add                                               = 0x200,
	mf_alpha_blend_multiply                                          = 0x300,
	mf_alpha_blend_factor                                            = 0x700,
	mf_alpha_test_1                                                  = 0x1000,
	mf_alpha_test_128                                                = 0x2000,
	mf_alpha_test_255                                                = 0x3000,
	mf_render_first                                                  = 0x10000,
	mf_origin_at_camera                                              = 0x20000,
	mf_lod                                                           = 0x40000,
	mf_lod_if_low_poly                                               = 0x80000,
	mf_render_order_plus_1                                           = 0x1000000,
	mf_render_order_plus_2                                           = 0x2000000,
	mf_render_order_plus_3                                           = 0x3000000,
	mf_render_order_plus_4                                           = 0x4000000,
	mf_render_order_plus_5                                           = 0x5000000,
	mf_render_order_plus_6                                           = 0x6000000,
	mf_render_order_plus_7                                           = 0x7000000,
	mf_render_order_minus_8                                          = 0x8000000,
	mf_render_order_minus_7                                          = 0x9000000,
	mf_render_order_minus_6                                          = 0xA000000,
	mf_render_order_minus_5                                          = 0xB000000,
	mf_render_order_minus_4                                          = 0xC000000,
	mf_render_order_minus_3                                          = 0xD000000,
	mf_render_order_minus_2                                          = 0xE000000,
	mf_render_order_minus_1                                          = 0xF000000 
};

enum mbFloraKindFlags // #24231
{
	fkf_plain                                                        = 0x4,
	fkf_steppe                                                       = 0x8,
	fkf_snow                                                         = 0x10,
	fkf_desert                                                       = 0x20,
	fkf_plain_forest                                                 = 0x400,
	fkf_steppe_forest                                                = 0x800,
	fkf_snow_forest                                                  = 0x1000,
	fkf_desert_forest                                                = 0x2000,
	fkf_realtime_ligting                                             = 0x10000,
	fkf_point_up                                                     = 0x20000,
	fkf_align_with_ground                                            = 0x40000,
	fkf_grass                                                        = 0x80000,
	fkf_on_green_ground                                              = 0x100000,
	fkf_rock                                                         = 0x200000,
	fkf_tree                                                         = 0x400000,
	fkf_snowy                                                        = 0x800000,
	fkf_guarantee                                                    = 0x1000000,
	fkf_has_colony_props                                             = 0x4000000 
};

enum mbQuestProgressionFlags // #24250
{
	qpf_active                                                       = 0x100,
	qpf_completed                                                    = 0x200,
	qpf_succeeded                                                    = 0x400,
	qpf_failed                                                       = 0x800,
	qpf_concluded                                                    = 0x1000 
};

enum mbPartyStackFlags // #24256
{
	pmf_is_prisoner                                                  = 0x1 
};

enum mbPartyFlags // #24258
{
	pf_disabled                                                      = 0x100,
	pf_is_ship                                                       = 0x200,
	pf_is_static                                                     = 0x400,
	pf_label_medium                                                  = 0x1000,
	pf_label_large                                                   = 0x2000,
	pf_always_visible                                                = 0x4000,
	pf_default_behavior                                              = 0x10000,
	pf_auto_remove_in_town                                           = 0x20000,
	pf_quest_party                                                   = 0x40000,
	pf_no_label                                                      = 0x80000,
	pf_limit_members                                                 = 0x100000,
	pf_hide_defenders                                                = 0x200000,
	pf_show_faction                                                  = 0x400000,
	pf_is_hidden                                                     = 0x1000000,
	pf_dont_attack_civilians                                         = 0x2000000,
	pf_civilian                                                      = 0x4000000,
	pf_no_size_label                                                 = 0x8000000 
};

enum mbGameEntityObjectType // #24276
{
	got_party                                                        = 0x1,
	got_event                                                        = 0x3 
};

enum mbMainPartyActionType // #24279
{
	mpat_hold                                                        = 0x0,
	mpat_travel                                                      = 0x1,
	mpat_fast_forward                                                = 0x2 
};

enum rglMeshBillboardMode // #24283
{
	mbm_none                                                         = 0x0,
	mbm_face_camera                                                  = 0x1,
	mbm_camera                                                       = 0x2,
	mbm_flare                                                        = 0x3 
};

enum mbRegionType // #24288
{
	rt_ocean                                                         = 0x0,
	rt_mountain                                                      = 0x1,
	rt_steppe                                                        = 0x2,
	rt_plain                                                         = 0x3,
	rt_snow                                                          = 0x4,
	rt_desert                                                        = 0x5,
	rt_bridge                                                        = 0x7,
	rt_river                                                         = 0x8,
	rt_mountain_forest                                               = 0x9,
	rt_steppe_forest                                                 = 0xA,
	rt_forest                                                        = 0xB,
	rt_snow_forest                                                   = 0xC,
	rt_desert_forest                                                 = 0xD,
	rt_shore                                                         = 0x15,
	rt_foam                                                          = 0x16,
	rt_waves                                                         = 0x17 
};

enum mbTrackFlags // #24305
{
	mtrf_battle_track                                                = 0x10000000,
	mtrf_spotted                                                     = 0x20000000 
};

enum mbGameKeyGroupFlags // #24765
{
	gkgf_dismounted                                                  = 0x1,
	gkgf_mounted                                                     = 0x2,
	gkgf_spectator                                                   = 0x4,
	gkgf_map                                                         = 0x8 
};

enum mbGroundSpecFlags // #24899
{
	gtf_overlay                                                      = 0x1,
	gtf_dusty                                                        = 0x2,
	gtf_has_color                                                    = 0x4 
};

enum mbInventoryWindowSlotFlags // #24923
{
	iwsf_borrowed                                                    = 0x1,
	iwsf_needs_update                                                = 0x2 
};

enum mbGameTutorialFlags // #24926
{
	gtf_inventory                                                    = 0x1 
};

enum mbItemVariationFlags // #24928
{
	ixmesh_inventory                                                 = 0x1000000000000000,
	ixmesh_flying_ammo                                               = 0x2000000000000000,
	ixmesh_carry                                                     = 0x3000000000000000,
	ixmesh_alt_mask                                                  = 0xF000000000000000 
};

enum mbGameLogWindowMode // #25114
{
	glwm_recent                                                      = 0x0,
	glwm_log                                                         = 0x1 
};

enum mbFactionFlags // #25158
{
	ff_always_hide_label                                             = 0x1 
};

enum mbMapWindowSelectionType // #25160
{
	mwst_terrain                                                     = 0x0,
	mwst_party                                                       = 0x1,
	mwst_track                                                       = 0x2 
};

enum mbConsoleMode // #25164
{
	csm_none                                                         = 0x0,
	csm_chat                                                         = 0x1,
	csm_team_chat                                                    = 0x2,
	csm_command_line                                                 = 0x3 
};

enum mbMetaMissionResultFlags // #25380
{
	rf_start_encounter                                               = 0x1,
	rf_mission                                                       = 0x8,
	rf_inventory_window                                              = 0x80,
	rf_party_window                                                  = 0x100,
	rf_end_encounter                                                 = 0x200,
	rf_conversation_window                                           = 0x800,
	rf_presentation_window                                           = 0x1000,
	rf_notes_window                                                  = 0x2000,
	rf_map_window                                                    = 0x4000 
};

enum mbMetaMissionEncounterFlags // #25433
{
	ef_leave                                                         = 0x1 
};

enum mbMenuFlags // #25435
{
	mnf_join_battle                                                  = 0x1,
	mnf_auto_enter                                                   = 0x10,
	mnf_enable_hot_keys                                              = 0x100,
	mnf_disable_all_keys                                             = 0x200,
	mnf_scale_picture                                                = 0x1000 
};

enum mbMeshFlags // #25441
{
	mhf_render_order_plus_1                                          = 0x1 
};

enum mbMetaMissionType // #25443
{
	mmt_my_battle                                                    = 0x0,
	mmt_joined_battle                                                = 0x1 
};

enum mbMissileHitType // #25446
{
	mht_none                                                         = 0x0,
	mht_remove                                                       = 0x1,
	mht_scene                                                        = 0x2,
	mht_agent                                                        = 0x3,
	mht_mission_object                                               = 0x4,
	mht_shield                                                       = 0x5 
};

enum mbMissileScreenState // #25453
{
	mss_none                                                         = 0x0,
	mss_incoming                                                     = 0x1,
	mss_outgoing                                                     = 0x3 
};

enum mbMissionSpawnFlags // #25537
{
	spf_all_teams_are_enemy                                          = 0x1,
	spf_is_horseman                                                  = 0x2,
	spf_examine_all_spawn_points                                     = 0x4,
	spf_team_0_spawn_far_from_entry_32                               = 0x8,
	spf_team_1_spawn_far_from_entry_0                                = 0x10,
	spf_team_1_spawn_far_from_entry_66                               = 0x20,
	spf_team_0_spawn_near_entry_0                                    = 0x40,
	spf_team_0_spawn_near_entry_66                                   = 0x80,
	spf_team_1_spawn_near_entry_32                                   = 0x100,
	spf_team_0_walkers_spawn_at_high_points                          = 0x200,
	spf_team_1_walkers_spawn_at_high_points                          = 0x400,
	spf_try_to_spawn_close_to_at_least_one_enemy                     = 0x800,
	spf_care_agent_to_agent_distances_less                           = 0x1000 
};

enum rglParticleSystemFlags // #25551
{
	psf_forced                                                       = 0x1,
	psf_always_emit                                                  = 0x2,
	psf_global_emit_dir                                              = 0x10,
	psf_emit_at_water_level                                          = 0x20,
	psf_use_ambient_color                                            = 0x40,
	psf_billboard_2d                                                 = 0x100,
	psf_billboard_3d                                                 = 0x200,
	psf_billboard_drop                                               = 0x300,
	psf_turn_to_velocity                                             = 0x400,
	psf_billboard_mask                                               = 0xF00,
	psf_randomize_rotation                                           = 0x1000,
	psf_randomize_size                                               = 0x2000,
	psf_2d_turbulance                                                = 0x10000,
	psf_next_effect_is_lod                                           = 0x20000 
};

enum mbnetErrorCode // #25566
{
	ec_authentication_failed                                         = 0x1,
	ec_server_full                                                   = 0x2,
	ec_server_full_non_private                                       = 0x3,
	ec_password_incorrect                                            = 0x4,
	ec_incorrect_authorization_key                                   = 0x5,
	ec_incorrect_serial                                              = 0x6,
	ec_username_taken                                                = 0x7,
	ec_connection_failed                                             = 0x8,
	ec_connection_lost                                               = 0x9,
	ec_master_connection_failed                                      = 0xA,
	ec_banned                                                        = 0xB,
	ec_kicked                                                        = 0xC,
	ec_incorrect_username_or_password                                = 0xD,
	ec_data_file_mismatch                                            = 0xE,
	ec_bind_failed                                                   = 0xF,
	ec_synchronization_error                                         = 0x10 
};

enum mbAgentAiFlags // #25583
{
	aif_start_alarmed                                                = 0x10 
};

enum mbMissionEntryFlags // #25585
{
	mtef_enemy_party                                                 = 0x1,
	mtef_ally_party                                                  = 0x2,
	mtef_scene_source                                                = 0x4,
	mtef_conversation_source                                         = 0x8,
	mtef_visitor_source                                              = 0x10,
	mtef_defenders                                                   = 0x40,
	mtef_attackers                                                   = 0x80,
	mtef_no_leader                                                   = 0x100,
	mtef_no_companions                                               = 0x200,
	mtef_no_regulars                                                 = 0x400,
	mtef_team_0                                                      = 0x1000,
	mtef_team_1                                                      = 0x2000,
	mtef_team_2                                                      = 0x3000,
	mtef_team_3                                                      = 0x4000,
	mtef_team_4                                                      = 0x5000,
	mtef_team_5                                                      = 0x6000,
	mtef_team_member_2                                               = 0x8000,
	mtef_infantry_first                                              = 0x10000,
	mtef_archers_first                                               = 0x20000,
	mtef_cavalry_first                                               = 0x40000,
	mtef_no_auto_reset                                               = 0x80000,
	mtef_reverse_order                                               = 0x1000000,
	mtef_use_exact_number                                            = 0x2000000 
};

enum rglMeshCullMode // #25609
{
	cm_default                                                       = 0x0,
	cm_invert                                                        = 0x1,
	cm_none                                                          = 0x2 
};

enum rglTableWidgetCellType // #26066
{
	twct_bool                                                        = 0x0,
	twct_int                                                         = 0x1,
	twct_uint64                                                      = 0x2,
	twct_string                                                      = 0x3,
	twct_count                                                       = 0x4 
};

enum mbServerListColumn // #26072
{
	slc_ip                                                           = 0x0,
	slc_port                                                         = 0x1,
	slc_game_version                                                 = 0x2,
	slc_module_version                                               = 0x3,
	slc_mission_template_no                                          = 0x4,
	slc_site_no                                                      = 0x5,
	slc_name                                                         = 0x6,
	slc_module_name                                                  = 0x7,
	slc_mode_name                                                    = 0x8,
	slc_site_name                                                    = 0x9,
	slc_player_count                                                 = 0xA,
	slc_ping                                                         = 0xB,
	slc_dedicated                                                    = 0xC,
	slc_passworded                                                   = 0xD,
	slc_extended_version                                             = 0xE 
};

enum mbnetServerSearchType // #26088
{
	sst_internet                                                     = 0x0,
	sst_local                                                        = 0x1,
	sst_favorites                                                    = 0x2,
	sst_refresh                                                      = 0x3,
	sst_stored                                                       = 0x4 
};

enum mbnetActionCode // #26094
{
	ac_authenticating_steam                                          = 0x1,
	ac_validating_serial                                             = 0x2,
	ac_scanning_lan                                                  = 0x3,
	ac_retrieving_servers                                            = 0x4,
	ac_retrieving_server_infos                                       = 0x5,
	ac_connecting_to_server                                          = 0x6,
	ac_requesting_join                                               = 0x7,
	ac_loading                                                       = 0x8,
	ac_downloading_map                                               = 0x9,
	ac_validating_account                                            = 0xA 
};

enum mbPresentationFlags // #26299
{
	prsntf_read_only                                                 = 0x1,
	prsntf_manual_end_only                                           = 0x2 
};

enum mbnetHostSocketOption // #26460
{
	hso_non_blocking                                                 = 0x0,
	hso_broadcast                                                    = 0x1,
	hso_receive_buffer_size                                          = 0x2,
	hso_send_buffer_size                                             = 0x3 
};

enum mbnetPlayerPrivilege // #26467
{
	npp_none                                                         = 0x0,
	npp_regular                                                      = 0x1,
	npp_private                                                      = 0x2,
	npp_admin                                                        = 0x3 
};

enum mbnetServerEventTypes // #26962
{
	mse_mission_info_request                                         = 0x0,
	mse_control_flags_1                                              = 0x1,
	mse_pick_up_item                                                 = 0x2,
	mse_drop_item                                                    = 0x3,
	mse_seed                                                         = 0x4,
	mse_player_options                                               = 0x5,
	mse_message                                                      = 0x6,
	mse_message_1_int                                                = 0x7,
	mse_message_2_int                                                = 0x8,
	mse_message_3_int                                                = 0x9,
	mse_message_4_int                                                = 0xA,
	mse_message_string                                               = 0xB,
	mse_team_chat                                                    = 0xC,
	mse_chat                                                         = 0xD,
	mse_order_position                                               = 0xE,
	mse_in_menu                                                      = 0xF,
	mse_mission_object_use                                           = 0x10,
	mse_server_join_request                                          = 0x11,
	mse_server_info_request_steam                                    = 0x12,
	mse_disconnect                                                   = 0x13,
	mse_server_info_request                                          = 0x14,
	mse_site_chunk_request                                           = 0x15,
	mse_wse_event                                                    = 0x16 
};

enum mbnetPlayerReplicationRowType // #26986
{
	prt_score                                                        = 0x0,
	prt_ping                                                         = 0x1 
};

enum mbnetClientEventTypes // #26989
{
	mce_mission_info                                                 = 0x0,
	mce_server_options                                               = 0x1,
	mce_team_info                                                    = 0x2,
	mce_player_info                                                  = 0x3,
	mce_player_stats                                                 = 0x4,
	mce_agent_spawn                                                  = 0x5,
	mce_missile_spawn                                                = 0x6,
	mce_mission_object_spawn                                         = 0x7,
	mce_missile_hit_scene                                            = 0x8,
	mce_missile_hit_agent                                            = 0x9,
	mce_missile_hit_mission_object                                   = 0xA,
	mce_missile_hit_shield                                           = 0xB,
	mce_missile_hit_remove                                           = 0xC,
	mce_agent_die                                                    = 0xD,
	mce_player_team                                                  = 0xE,
	mce_player_troop                                                 = 0xF,
	mce_player_disconnect                                            = 0x10,
	mce_mission_object_remove                                        = 0x11,
	mce_agent_remove                                                 = 0x12,
	mce_agent_fade_out                                               = 0x13,
	mce_sound                                                        = 0x14,
	mce_agent_sound                                                  = 0x15,
	mce_knockback                                                    = 0x16,
	mce_agent_jump                                                   = 0x17,
	mce_horse_speed                                                  = 0x18,
	mce_agent_approximate_x                                          = 0x19,
	mce_agent_approximate_y                                          = 0x1A,
	mce_agent_approximate_z                                          = 0x1B,
	mce_agent_bleed                                                  = 0x1C,
	mce_agent_horse                                                  = 0x1D,
	mce_agent_rider                                                  = 0x1E,
	mce_gold                                                         = 0x1F,
	mce_player_team_chat                                             = 0x20,
	mce_player_chat                                                  = 0x21,
	mce_message                                                      = 0x22,
	mce_message_1_int                                                = 0x23,
	mce_message_2_int                                                = 0x24,
	mce_message_3_int                                                = 0x25,
	mce_message_4_int                                                = 0x26,
	mce_message_string                                               = 0x27,
	mce_player_combat_message                                        = 0x28,
	mce_clear_scene                                                  = 0x29,
	mce_mission_object_use                                           = 0x2A,
	mce_mission_object_animate                                       = 0x2B,
	mce_mission_object_animate_position                              = 0x2C,
	mce_mission_object_stop_animating                                = 0x2D,
	mce_mission_object_position                                      = 0x2E,
	mce_particle_system_burst                                        = 0x2F,
	mce_mission_object_hit                                           = 0x30,
	mce_ranged_hit_sound                                             = 0x31,
	mce_player_control_agent                                         = 0x32,
	mce_agent_change_modifier                                        = 0x33,
	mce_agent_module_sound                                           = 0x34,
	mce_server_info_steam                                            = 0x35,
	mce_peer_player_no                                               = 0x36,
	mce_disconnect                                                   = 0x37,
	mce_server_info                                                  = 0x38,
	mce_division_leader                                              = 0x39,
	mce_agent_kick                                                   = 0x3A,
	mce_stun                                                         = 0x3B,
	mce_agent_fall                                                   = 0x3C,
	mce_kick                                                         = 0x3D,
	mce_site_chunk                                                   = 0x3E,
	mce_join_accept_reject                                           = 0x3F 
};

enum WSENetworkEventType // #27054
{
	wse_net_multiplayer_message                                      = 0x0,
	wse_net_player_set_skin_no_client_message                        = 0x1,
	wse_net_remote_script_message                                    = 0x2,
	wse_net_player_stop_controlling_agent_message                    = 0x3,
	wse_net_cheat_detected                                           = 0x4,
	wse_net_agent_apply_force                                        = 0x5,
	wse_net_lock_fov                                                 = 0x6,
	wse_net_fastdl                                                   = 0x7,
	wse_net_ghost_mode                                               = 0x8 
};

enum mbnetPlayerStatus // #27064
{
	nps_inactive                                                     = 0x0,
	nps_info                                                         = 0x1,
	nps_active                                                       = 0x2 
};

enum mbnetGhostMode // #27190
{
	gm_free                                                          = 0x0,
	gm_player                                                        = 0x1,
	gm_team                                                          = 0x2,
	gm_team_view                                                     = 0x3 
};

enum mbPartyPersonalityFlags // #28056
{
	ppf_is_bandit                                                    = 0x100 
};

enum mbPartyAiMoveMode // #28058
{
	aimm_hold                                                        = 0x0,
	aimm_position                                                    = 0x1,
	aimm_party                                                       = 0x2,
	aimm_escort                                                      = 0x3 
};

enum mbMapIconFlags // #28063
{
	mcn_no_shadow                                                    = 0x1 
};

enum mbQuestFlags // #28158
{
	qf_show_progression                                              = 0x1,
	qf_random_quest                                                  = 0x2 
};

enum mbWseOpcode // #28217
{
	break_loop                                                       = 0x8,
	continue_loop                                                    = 0x9,
	try_for_dict_keys                                                = 0x12,
	is_vanilla_warband                                               = 0x3EC,
	val_shr                                                          = 0xAF0,
	store_shr                                                        = 0xAF1,
	val_lshr                                                         = 0xAF2,
	store_lshr                                                       = 0xAF3,
	val_shl                                                          = 0xAF4,
	store_shl                                                        = 0xAF5,
	val_xor                                                          = 0xAF6,
	store_xor                                                        = 0xAF7,
	val_not                                                          = 0xAF8,
	store_not                                                        = 0xAF9,
	player_set_skin                                                  = 0xB54,
	player_stop_controlling_agent                                    = 0xB55,
	player_set_banner_id                                             = 0xB56,
	player_set_username                                              = 0xB57,
	player_temp_ban                                                  = 0xB58,
	player_get_wse2_version                                          = 0xB59,
	register_get                                                     = 0xBB8,
	register_set                                                     = 0xBB9,
	store_wse_version                                                = 0xBBA,
	item_slot_gt                                                     = 0xBBB,
	party_template_slot_gt                                           = 0xBBC,
	troop_slot_gt                                                    = 0xBBD,
	faction_slot_gt                                                  = 0xBBE,
	quest_slot_gt                                                    = 0xBBF,
	scene_slot_gt                                                    = 0xBC0,
	party_slot_gt                                                    = 0xBC1,
	player_slot_gt                                                   = 0xBC2,
	team_slot_gt                                                     = 0xBC3,
	agent_slot_gt                                                    = 0xBC4,
	scene_prop_slot_gt                                               = 0xBC5,
	store_current_trigger                                            = 0xBC6,
	return_values                                                    = 0xBC7,
	store_num_return_values                                          = 0xBC8,
	store_return_value                                               = 0xBC9,
	set_forced_lod                                                   = 0xBCA,
	send_message_to_url_advanced                                     = 0xBCB,
	mtsrand                                                          = 0xBCC,
	mtrand                                                           = 0xBCD,
	get_time                                                         = 0xBCE,
	order_flag_is_active                                             = 0xBCF,
	play_bink_file                                                   = 0xBD0,
	process_advanced_url_messages                                    = 0xBD1,
	sleep_ms                                                         = 0xBD2,
	timer_reset                                                      = 0xBD3,
	timer_get_elapsed_time                                           = 0xBD4,
	shell_open_url                                                   = 0xBD5,
	set_main_party                                                   = 0xBD6,
	get_main_party                                                   = 0xBD7,
	make_screenshot                                                  = 0xBD8,
	send_post_message_to_url_advanced                                = 0xBD9,
	set_random_seed                                                  = 0xBDA,
	store_application_time                                           = 0xBDB,
	is_party_skill                                                   = 0xBDC,
	get_campaign_time                                                = 0xBDD,
	set_campaign_time                                                = 0xBDE,
	get_mouse_map_coordinates                                        = 0xBDF,
	game_key_get_key                                                 = 0xC1C,
	key_released                                                     = 0xC1D,
	game_key_released                                                = 0xC1E,
	dict_create                                                      = 0xC80,
	dict_free                                                        = 0xC81,
	dict_load_file                                                   = 0xC82,
	dict_load_dict                                                   = 0xC83,
	dict_save                                                        = 0xC84,
	dict_clear                                                       = 0xC85,
	dict_is_empty                                                    = 0xC86,
	dict_has_key                                                     = 0xC87,
	dict_get_size                                                    = 0xC88,
	dict_delete_file                                                 = 0xC89,
	dict_get_str                                                     = 0xC8A,
	dict_get_int                                                     = 0xC8B,
	dict_set_str                                                     = 0xC8C,
	dict_set_int                                                     = 0xC8D,
	dict_get_key_by_iterator                                         = 0xC8E,
	dict_get_pos                                                     = 0xC8F,
	dict_set_pos                                                     = 0xC90,
	dict_load_file_json                                              = 0xC91,
	dict_save_json                                                   = 0xC92,
	dict_from_url_encoded_json                                       = 0xC93,
	dict_to_url_encoded_json                                         = 0xC94,
	dict_erase                                                       = 0xC95,
	dict_delete_file_json                                            = 0xC96,
	agent_get_item_modifier                                          = 0xCE4,
	agent_get_item_slot_modifier                                     = 0xCE5,
	agent_get_animation_progress                                     = 0xCE6,
	agent_get_dna                                                    = 0xCE7,
	agent_get_ground_scene_prop                                      = 0xCE8,
	agent_set_item_slot_ammo                                         = 0xCE9,
	agent_get_item_slot_hit_points                                   = 0xCEA,
	agent_set_item_slot_hit_points                                   = 0xCEB,
	agent_get_wielded_item_slot_no                                   = 0xCEC,
	agent_get_scale                                                  = 0xCED,
	agent_set_forced_lod                                             = 0xCEE,
	agent_get_item_slot_flags                                        = 0xCEF,
	agent_ai_get_move_target_position                                = 0xCF0,
	agent_set_horse                                                  = 0xCF1,
	agent_ai_set_simple_behavior                                     = 0xCF2,
	agent_accelerate                                                 = 0xCF3,
	agent_set_item_slot_modifier                                     = 0xCF4,
	agent_body_meta_mesh_set_vertex_keys_time_point                  = 0xCF5,
	agent_body_meta_mesh_set_visibility                              = 0xCF6,
	agent_set_personal_animation                                     = 0xCF7,
	agent_get_personal_animation                                     = 0xCF8,
	agent_set_default_animations                                     = 0xCF9,
	agent_cancel_current_animation                                   = 0xCFA,
	agent_get_ranged_damage_modifier                                 = 0xCFB,
	agent_add_stun                                                   = 0xCFC,
	agent_body_meta_mesh_deform_in_range                             = 0xCFD,
	agent_body_meta_mesh_deform_in_cycle_loop                        = 0xCFE,
	agent_body_meta_mesh_get_current_deform_progress                 = 0xCFF,
	agent_body_meta_mesh_get_current_deform_frame                    = 0xD00,
	agent_set_footstep_sound                                         = 0xD01,
	agent_get_horse_rotation_velocity                                = 0xD02,
	agent_get_current_vertical_speed                                 = 0xD03,
	agent_set_current_vertical_speed                                 = 0xD04,
	agent_get_position_in_group                                      = 0xD05,
	agent_get_current_ai_mesh_face_group                             = 0xD06,
	agent_set_time_speed_multiplier                                  = 0xD07,
	agent_get_time_speed_multiplier                                  = 0xD08,
	agent_kick                                                       = 0xD09,
	agent_set_dropped_items_prune_time                               = 0xD0A,
	agent_set_missile_items_prune_time                               = 0xD0B,
	agent_set_action_speed_modifier                                  = 0xD0C,
	agent_get_action_speed_modifier                                  = 0xD0D,
	agent_set_left_hand_weapon_collision                             = 0xD0E,
	multiplayer_send_chat_message_to_player                          = 0xD48,
	multiplayer_send_composite_message_to_player                     = 0xD49,
	multiplayer_send_composite_message_to_server                     = 0xD4A,
	multiplayer_get_cur_profile                                      = 0xD4B,
	multiplayer_get_num_profiles                                     = 0xD4C,
	multiplayer_message_init                                         = 0xD4D,
	multiplayer_message_put_string                                   = 0xD4E,
	multiplayer_message_put_int                                      = 0xD4F,
	multiplayer_message_put_position                                 = 0xD50,
	multiplayer_message_put_coordinate                               = 0xD51,
	multiplayer_cur_message_get_string                               = 0xD52,
	multiplayer_cur_message_get_int                                  = 0xD53,
	multiplayer_cur_message_get_position                             = 0xD54,
	multiplayer_cur_message_get_coordinate                           = 0xD55,
	multiplayer_cur_profile_get_skin                                 = 0xD56,
	multiplayer_connect_to_server                                    = 0xD57,
	server_set_password_admin                                        = 0xDAC,
	server_set_password_private                                      = 0xDAD,
	server_map_rotation_get_count                                    = 0xDAE,
	server_map_rotation_get_index                                    = 0xDAF,
	server_map_rotation_set_index                                    = 0xDB0,
	server_map_rotation_get_map                                      = 0xDB1,
	server_map_rotation_add_map                                      = 0xDB2,
	server_map_rotation_remove_map                                   = 0xDB3,
	server_get_horse_friendly_fire                                   = 0xDB4,
	server_set_horse_friendly_fire                                   = 0xDB5,
	server_get_show_crosshair                                        = 0xDB6,
	server_set_show_crosshair                                        = 0xDB7,
	get_server_option_at_connect                                     = 0xDB8,
	server_set_password_rcon                                         = 0xDB9,
	execute_server_console_command                                   = 0xDBA,
	add_anonymous_player                                             = 0xDBB,
	remove_anonymous_player                                          = 0xDBC,
	clear_anonymous_players                                          = 0xDBD,
	server_set_ghost_mode_advanced                                   = 0xDBE,
	store_cur_mission_template_no                                    = 0xE10,
	set_show_use_tooltip                                             = 0xE11,
	set_ally_collision_threshold                                     = 0xE12,
	particle_system_remove                                           = 0xE13,
	get_spectated_agent_no                                           = 0xE14,
	prop_instance_set_forced_lod                                     = 0xE15,
	prop_instance_set_variation_id                                   = 0xE16,
	prop_instance_set_variation_id_2                                 = 0xE17,
	stop_time                                                        = 0xE18,
	missile_get_path_point_position                                  = 0xE19,
	get_water_level                                                  = 0xE1A,
	missile_remove_on_hit                                            = 0xE1B,
	missile_is_valid                                                 = 0xE1C,
	missile_get_cur_position                                         = 0xE1D,
	set_prop_collision_threshold                                     = 0xE1E,
	get_camera_position                                              = 0xE1F,
	prop_instance_remove_particle_system                             = 0xE20,
	prop_instance_remove_light                                       = 0xE21,
	prop_instance_get_sound_progress                                 = 0xE22,
	set_horse_friendly_fire                                          = 0xE23,
	cast_ray_agents                                                  = 0xE24,
	ai_mesh_face_group_translate                                     = 0xE25,
	set_show_crosshair                                               = 0xE26,
	shift_entry_point                                                = 0xE27,
	troop_get_skill_points                                           = 0xE74,
	troop_set_skill_points                                           = 0xE75,
	troop_get_attribute_points                                       = 0xE76,
	troop_set_attribute_points                                       = 0xE77,
	troop_get_proficiency_points                                     = 0xE78,
	troop_set_proficiency_points                                     = 0xE79,
	troop_has_flag                                                   = 0xE7A,
	troop_set_skill                                                  = 0xE7B,
	troop_set_attribute                                              = 0xE7C,
	troop_set_proficiency                                            = 0xE7D,
	item_set_thrust_damage                                           = 0xED8,
	item_set_thrust_damage_type                                      = 0xED9,
	item_set_swing_damage                                            = 0xEDA,
	item_set_swing_damage_type                                       = 0xEDB,
	item_set_head_armor                                              = 0xEDC,
	item_set_body_armor                                              = 0xEDD,
	item_set_leg_armor                                               = 0xEDE,
	item_set_speed_rating                                            = 0xEDF,
	item_set_missile_speed                                           = 0xEE0,
	item_set_horse_blood_particles                                   = 0xEE1,
	item_set_horse_blood_color                                       = 0xEE2,
	cur_item_mesh_set_color                                          = 0xEE3,
	cur_item_add_mesh_with_material                                  = 0xEE4,
	party_stack_get_experience                                       = 0xF3C,
	party_stack_get_num_upgradeable                                  = 0xF3D,
	party_has_flag                                                   = 0xF3E,
	party_heal_members                                               = 0xF3F,
	party_switch_stacks                                              = 0xF40,
	party_stack_upgrade                                              = 0xF41,
	party_stack_set_num_upgradeable                                  = 0xF42,
	position_get_vector_to_position                                  = 0x1004,
	position_align_to_ground                                         = 0x1005,
	position_get_length                                              = 0x1006,
	get_dot_product_of_positions                                     = 0x1007,
	get_cross_product_of_positions                                   = 0x1008,
	str_equals                                                       = 0x1068,
	str_contains                                                     = 0x1069,
	str_starts_with                                                  = 0x106A,
	str_ends_with                                                    = 0x106B,
	str_is_alpha                                                     = 0x106C,
	str_is_digit                                                     = 0x106D,
	str_is_whitespace                                                = 0x106E,
	str_length                                                       = 0x106F,
	str_index_of                                                     = 0x1070,
	str_last_index_of                                                = 0x1071,
	str_get_char                                                     = 0x1072,
	str_to_num                                                       = 0x1073,
	str_compare                                                      = 0x1074,
	str_split                                                        = 0x1075,
	str_sort                                                         = 0x1076,
	str_store_lower                                                  = 0x1077,
	str_store_upper                                                  = 0x1078,
	str_store_trim                                                   = 0x1079,
	str_store_replace                                                = 0x107A,
	str_store_md5                                                    = 0x107B,
	str_store_substring                                              = 0x107C,
	str_store_reverse                                                = 0x107D,
	str_store_join                                                   = 0x107E,
	str_store_replace_spaces_with_underscores                        = 0x107F,
	str_store_replace_underscores_with_spaces                        = 0x1080,
	str_store_multiplayer_profile_name                               = 0x1081,
	str_store_module_setting                                         = 0x1082,
	str_store_server_password_admin                                  = 0x1083,
	str_store_server_password_private                                = 0x1084,
	str_store_overlay_text                                           = 0x1085,
	str_store_player_ip                                              = 0x1086,
	str_store_game_variable                                          = 0x1087,
	str_store_skill_name                                             = 0x1088,
	str_store_float                                                  = 0x1089,
	str_sanitize                                                     = 0x108A,
	str_store_item_id                                                = 0x108B,
	str_is_integer                                                   = 0x108C,
	str_store_multiplayer_profile_face_keys                          = 0x108D,
	str_store_server_password_rcon                                   = 0x108E,
	str_store_item_mesh_name                                         = 0x108F,
	str_regex_match                                                  = 0x1090,
	str_regex_search                                                 = 0x1091,
	str_regex_get_matches                                            = 0x1092,
	str_store_regex_replace                                          = 0x1093,
	str_decode_url                                                   = 0x1094,
	str_store_skill_desc                                             = 0x1095,
	options_get_verbose_casualties                                   = 0x10CC,
	options_set_verbose_casualties                                   = 0x10CD,
	options_get_cheat_mode                                           = 0x10CE,
	options_set_cheat_mode                                           = 0x10CF,
	options_get_realistic_headshots                                  = 0x10D0,
	options_set_realistic_headshots                                  = 0x10D1,
	fld                                                              = 0x1130,
	fld_str                                                          = 0x1131,
	fld_pos_x                                                        = 0x1132,
	fld_pos_y                                                        = 0x1133,
	fld_pos_z                                                        = 0x1134,
	fst                                                              = 0x1135,
	fcpy                                                             = 0x1136,
	feq                                                              = 0x1137,
	fgt                                                              = 0x1138,
	flt                                                              = 0x1139,
	fge                                                              = 0x113A,
	fle                                                              = 0x113B,
	fsub                                                             = 0x113C,
	fmul                                                             = 0x113D,
	fdiv                                                             = 0x113E,
	op_fmin                                                          = 0x113F,
	op_fmax                                                          = 0x1140,
	fclamp                                                           = 0x1141,
	fsqrt                                                            = 0x1142,
	op_fabs                                                          = 0x1143,
	fceil                                                            = 0x1144,
	ffloor                                                           = 0x1145,
	fexp                                                             = 0x1146,
	fpow                                                             = 0x1147,
	fln                                                              = 0x1148,
	flog                                                             = 0x1149,
	op_fmod                                                          = 0x114A,
	fsin                                                             = 0x114B,
	fcos                                                             = 0x114C,
	ftan                                                             = 0x114D,
	fsinh                                                            = 0x114E,
	fcosh                                                            = 0x114F,
	ftanh                                                            = 0x1150,
	fasin                                                            = 0x1151,
	facos                                                            = 0x1152,
	fatan                                                            = 0x1153,
	fatan2                                                           = 0x1154,
	feval                                                            = 0x1155,
	fadd                                                             = 0x1156,
	scene_set_flags                                                  = 0x1194,
	scene_set_water_level                                            = 0x1195,
	scene_set_bounds                                                 = 0x1196,
	scene_set_outer_terrain                                          = 0x1197,
	scene_set_terrain_seed                                           = 0x1198,
	scene_set_river_seed                                             = 0x1199,
	scene_set_flora_seed                                             = 0x119A,
	scene_set_deep_water                                             = 0x119B,
	scene_set_place_river                                            = 0x119C,
	scene_set_disable_grass                                          = 0x119D,
	scene_set_valley_size                                            = 0x119E,
	scene_set_hill_height                                            = 0x119F,
	scene_set_ruggedness                                             = 0x11A0,
	scene_set_vegetation                                             = 0x11A1,
	scene_set_size                                                   = 0x11A2,
	scene_set_region_type                                            = 0x11A3,
	scene_set_region_detail                                          = 0x11A4,
	edit_mode_get_num_selected_prop_instances                        = 0x11F8,
	edit_mode_get_selected_prop_instance                             = 0x11F9,
	edit_mode_select_prop_instance                                   = 0x11FA,
	edit_mode_deselect_prop_instance                                 = 0x11FB,
	edit_mode_get_highlighted_prop_instance                          = 0x11FC,
	edit_mode_set_highlighted_prop_instance                          = 0x11FD,
	edit_mode_set_enabled                                            = 0x11FE,
	edit_mode_in_edit_objects_mode                                   = 0x11FF,
	update_material                                                  = 0x125C,
	reload_item_kinds                                                = 0x125D,
	reload_troops                                                    = 0x125E,
	reload_parties                                                   = 0x125F,
	menu_create_new                                                  = 0x12C0,
	menu_add_item                                                    = 0x12C1,
	menu_clear_items                                                 = 0x12C2,
	menu_clear_generated                                             = 0x12C3,
	overlay_get_val                                                  = 0x1324,
	presentation_activate                                            = 0x1325,
	overlay_button_set_type                                          = 0x1326,
	overlay_get_scroll_pos                                           = 0x1327,
	overlay_set_scroll_pos                                           = 0x1328,
	overlay_enable                                                   = 0x1329,
	overlay_item_set_text                                            = 0x132A,
	array_create                                                     = 0x1388,
	array_free                                                       = 0x1389,
	array_copy                                                       = 0x138A,
	array_save_file                                                  = 0x138B,
	array_load_file                                                  = 0x138C,
	array_delete_file                                                = 0x138D,
	array_set_val                                                    = 0x138E,
	array_set_val_all                                                = 0x138F,
	array_get_val                                                    = 0x1390,
	array_push                                                       = 0x1391,
	array_pop                                                        = 0x1392,
	array_resize_dim                                                 = 0x1393,
	array_get_dim_size                                               = 0x1394,
	array_get_dim_count                                              = 0x1395,
	array_get_type_id                                                = 0x1396,
	array_sort                                                       = 0x1397,
	array_sort_custom                                                = 0x1398,
	array_eq                                                         = 0x1399,
	array_neq                                                        = 0x139A,
	array_gt                                                         = 0x139B,
	array_ge                                                         = 0x139C,
	array_lt                                                         = 0x139D,
	array_le                                                         = 0x139E,
	lua_get_top                                                      = 0x13EC,
	lua_set_top                                                      = 0x13ED,
	op_lua_insert                                                    = 0x13EE,
	op_lua_remove                                                    = 0x13EF,
	lua_pop                                                          = 0x13F0,
	lua_to_int                                                       = 0x13F1,
	lua_to_str                                                       = 0x13F2,
	lua_to_pos                                                       = 0x13F3,
	lua_push_int                                                     = 0x13F4,
	lua_push_str                                                     = 0x13F5,
	lua_push_pos                                                     = 0x13F6,
	lua_get_type                                                     = 0x13F7,
	op_lua_call                                                      = 0x13F8,
	lua_triggerCallback                                              = 0x13F9,
	skin_set_blood_color                                             = 0x1450 
};

enum mbOpcode // #28610
{
	call_script                                                      = 0x1,
	try_end                                                          = 0x3,
	try_begin                                                        = 0x4,
	else_try                                                         = 0x5,
	try_for_range                                                    = 0x6,
	try_for_range_backwards                                          = 0x7,
	try_for_parties                                                  = 0xB,
	try_for_agents                                                   = 0xC,
	try_for_prop_instances                                           = 0x10,
	try_for_players                                                  = 0x11,
	store_script_param_1                                             = 0x15,
	store_script_param_2                                             = 0x16,
	store_script_param                                               = 0x17,
	ge                                                               = 0x1E,
	eq                                                               = 0x1F,
	gt                                                               = 0x20,
	is_between                                                       = 0x21,
	entering_town                                                    = 0x24,
	map_free                                                         = 0x25,
	encountered_party_is_attacker                                    = 0x27,
	conversation_screen_is_active                                    = 0x2A,
	in_meta_mission                                                  = 0x2C,
	set_player_troop                                                 = 0x2F,
	store_repeat_object                                              = 0x32,
	is_cheat_mode_enabled                                            = 0x35,
	get_operation_set_version                                        = 0x37,
	set_physics_delta_time                                           = 0x3A,
	set_result_string                                                = 0x3C,
	is_camera_in_first_person                                        = 0x3D,
	set_camera_in_first_person                                       = 0x3E,
	game_key_get_mapped_key_name                                     = 0x41,
	key_is_down                                                      = 0x46,
	key_clicked                                                      = 0x47,
	game_key_is_down                                                 = 0x48,
	game_key_clicked                                                 = 0x49,
	mouse_get_position                                               = 0x4B,
	omit_key_once                                                    = 0x4D,
	clear_omitted_keys                                               = 0x4E,
	get_global_cloud_amount                                          = 0x5A,
	set_global_cloud_amount                                          = 0x5B,
	get_global_haze_amount                                           = 0x5C,
	set_global_haze_amount                                           = 0x5D,
	hero_can_join                                                    = 0x65,
	hero_can_join_as_prisoner                                        = 0x66,
	party_can_join                                                   = 0x67,
	party_can_join_as_prisoner                                       = 0x68,
	troops_can_join                                                  = 0x69,
	troops_can_join_as_prisoner                                      = 0x6A,
	party_can_join_party                                             = 0x6B,
	party_end_battle                                                 = 0x6C,
	main_party_has_troop                                             = 0x6E,
	party_is_in_town                                                 = 0x82,
	party_is_in_any_town                                             = 0x83,
	party_is_active                                                  = 0x84,
	player_has_item                                                  = 0x96,
	troop_has_item_equipped                                          = 0x97,
	troop_is_mounted                                                 = 0x98,
	troop_is_guarantee_ranged                                        = 0x99,
	troop_is_guarantee_horse                                         = 0x9A,
	check_quest_active                                               = 0xC8,
	check_quest_finished                                             = 0xC9,
	check_quest_succeeded                                            = 0xCA,
	check_quest_failed                                               = 0xCB,
	check_quest_concluded                                            = 0xCC,
	is_trial_version                                                 = 0xFA,
	is_edit_mode_enabled                                             = 0xFF,
	options_get_damage_to_player                                     = 0x104,
	options_set_damage_to_player                                     = 0x105,
	options_get_damage_to_friends                                    = 0x106,
	options_set_damage_to_friends                                    = 0x107,
	options_get_combat_ai                                            = 0x108,
	options_set_combat_ai                                            = 0x109,
	options_get_campaign_ai                                          = 0x10A,
	options_set_campaign_ai                                          = 0x10B,
	options_get_combat_speed                                         = 0x10C,
	options_set_combat_speed                                         = 0x10D,
	options_get_battle_size                                          = 0x10E,
	options_set_battle_size                                          = 0x10F,
	profile_get_banner_id                                            = 0x15E,
	profile_set_banner_id                                            = 0x15F,
	get_achievement_stat                                             = 0x172,
	set_achievement_stat                                             = 0x173,
	unlock_achievement                                               = 0x174,
	send_message_to_url                                              = 0x17C,
	multiplayer_send_message_to_server                               = 0x184,
	multiplayer_send_int_to_server                                   = 0x185,
	multiplayer_send_2_int_to_server                                 = 0x186,
	multiplayer_send_3_int_to_server                                 = 0x187,
	multiplayer_send_4_int_to_server                                 = 0x188,
	multiplayer_send_string_to_server                                = 0x189,
	multiplayer_send_message_to_player                               = 0x18A,
	multiplayer_send_int_to_player                                   = 0x18B,
	multiplayer_send_2_int_to_player                                 = 0x18C,
	multiplayer_send_3_int_to_player                                 = 0x18D,
	multiplayer_send_4_int_to_player                                 = 0x18E,
	multiplayer_send_string_to_player                                = 0x18F,
	get_max_players                                                  = 0x190,
	player_is_active                                                 = 0x191,
	player_get_team_no                                               = 0x192,
	player_set_team_no                                               = 0x193,
	player_get_troop_id                                              = 0x194,
	player_set_troop_id                                              = 0x195,
	player_get_agent_id                                              = 0x196,
	player_get_gold                                                  = 0x197,
	player_set_gold                                                  = 0x198,
	player_spawn_new_agent                                           = 0x199,
	player_add_spawn_item                                            = 0x19A,
	multiplayer_get_my_team                                          = 0x19B,
	multiplayer_get_my_troop                                         = 0x19C,
	multiplayer_set_my_troop                                         = 0x19D,
	multiplayer_get_my_gold                                          = 0x19E,
	multiplayer_get_my_player                                        = 0x19F,
	multiplayer_clear_scene                                          = 0x1A0,
	multiplayer_is_server                                            = 0x1A1,
	multiplayer_is_dedicated_server                                  = 0x1A2,
	game_in_multiplayer_mode                                         = 0x1A3,
	multiplayer_make_everyone_enemy                                  = 0x1A4,
	player_control_agent                                             = 0x1A5,
	player_get_item_id                                               = 0x1A6,
	player_get_banner_id                                             = 0x1A7,
	game_get_reduce_campaign_ai                                      = 0x1A8,
	multiplayer_find_spawn_point                                     = 0x1A9,
	set_spawn_effector_scene_prop_kind                               = 0x1AA,
	set_spawn_effector_scene_prop_id                                 = 0x1AB,
	player_set_is_admin                                              = 0x1AD,
	player_is_admin                                                  = 0x1AE,
	player_get_score                                                 = 0x1AF,
	player_set_score                                                 = 0x1B0,
	player_get_kill_count                                            = 0x1B1,
	player_set_kill_count                                            = 0x1B2,
	player_get_death_count                                           = 0x1B3,
	player_set_death_count                                           = 0x1B4,
	player_get_ping                                                  = 0x1B5,
	player_is_busy_with_menus                                        = 0x1B6,
	player_get_is_muted                                              = 0x1B7,
	player_set_is_muted                                              = 0x1B8,
	player_get_unique_id                                             = 0x1B9,
	player_get_gender                                                = 0x1BA,
	team_get_bot_kill_count                                          = 0x1C2,
	team_set_bot_kill_count                                          = 0x1C3,
	team_get_bot_death_count                                         = 0x1C4,
	team_set_bot_death_count                                         = 0x1C5,
	team_get_kill_count                                              = 0x1C6,
	team_get_score                                                   = 0x1C7,
	team_set_score                                                   = 0x1C8,
	team_set_faction                                                 = 0x1C9,
	team_get_faction                                                 = 0x1CA,
	player_save_picked_up_items_for_next_spawn                       = 0x1CB,
	player_get_value_of_original_items                               = 0x1CC,
	player_item_slot_is_picked_up                                    = 0x1CD,
	kick_player                                                      = 0x1D1,
	ban_player                                                       = 0x1D2,
	save_ban_info_of_player                                          = 0x1D3,
	ban_player_using_saved_ban_info                                  = 0x1D4,
	start_multiplayer_mission                                        = 0x1D6,
	server_add_message_to_log                                        = 0x1D9,
	server_get_renaming_server_allowed                               = 0x1DB,
	server_get_changing_game_type_allowed                            = 0x1DC,
	server_set_anti_cheat                                            = 0x1DD,
	server_get_combat_speed                                          = 0x1DE,
	server_set_combat_speed                                          = 0x1DF,
	server_get_friendly_fire                                         = 0x1E0,
	server_set_friendly_fire                                         = 0x1E1,
	server_get_control_block_dir                                     = 0x1E2,
	server_set_control_block_dir                                     = 0x1E3,
	server_set_password                                              = 0x1E4,
	server_get_add_to_game_servers_list                              = 0x1E5,
	server_set_add_to_game_servers_list                              = 0x1E6,
	server_get_ghost_mode                                            = 0x1E7,
	server_set_ghost_mode                                            = 0x1E8,
	server_set_name                                                  = 0x1E9,
	server_get_max_num_players                                       = 0x1EA,
	server_set_max_num_players                                       = 0x1EB,
	server_set_welcome_message                                       = 0x1EC,
	server_get_melee_friendly_fire                                   = 0x1ED,
	server_set_melee_friendly_fire                                   = 0x1EE,
	server_get_friendly_fire_damage_self_ratio                       = 0x1EF,
	server_set_friendly_fire_damage_self_ratio                       = 0x1F0,
	server_get_friendly_fire_damage_friend_ratio                     = 0x1F1,
	server_set_friendly_fire_damage_friend_ratio                     = 0x1F2,
	server_get_anti_cheat                                            = 0x1F3,
	troop_set_slot                                                   = 0x1F4,
	party_set_slot                                                   = 0x1F5,
	faction_set_slot                                                 = 0x1F6,
	scene_set_slot                                                   = 0x1F7,
	party_template_set_slot                                          = 0x1F8,
	agent_set_slot                                                   = 0x1F9,
	quest_set_slot                                                   = 0x1FA,
	item_set_slot                                                    = 0x1FB,
	player_set_slot                                                  = 0x1FC,
	team_set_slot                                                    = 0x1FD,
	scene_prop_set_slot                                              = 0x1FE,
	troop_get_slot                                                   = 0x208,
	party_get_slot                                                   = 0x209,
	faction_get_slot                                                 = 0x20A,
	scene_get_slot                                                   = 0x20B,
	party_template_get_slot                                          = 0x20C,
	agent_get_slot                                                   = 0x20D,
	quest_get_slot                                                   = 0x20E,
	item_get_slot                                                    = 0x20F,
	player_get_slot                                                  = 0x210,
	team_get_slot                                                    = 0x211,
	scene_prop_get_slot                                              = 0x212,
	troop_slot_eq                                                    = 0x21C,
	party_slot_eq                                                    = 0x21D,
	faction_slot_eq                                                  = 0x21E,
	scene_slot_eq                                                    = 0x21F,
	party_template_slot_eq                                           = 0x220,
	agent_slot_eq                                                    = 0x221,
	quest_slot_eq                                                    = 0x222,
	item_slot_eq                                                     = 0x223,
	player_slot_eq                                                   = 0x224,
	team_slot_eq                                                     = 0x225,
	scene_prop_slot_eq                                               = 0x226,
	troop_slot_ge                                                    = 0x230,
	party_slot_ge                                                    = 0x231,
	faction_slot_ge                                                  = 0x232,
	scene_slot_ge                                                    = 0x233,
	party_template_slot_ge                                           = 0x234,
	agent_slot_ge                                                    = 0x235,
	quest_slot_ge                                                    = 0x236,
	item_slot_ge                                                     = 0x237,
	player_slot_ge                                                   = 0x238,
	team_slot_ge                                                     = 0x239,
	scene_prop_slot_ge                                               = 0x23A,
	play_sound_at_position                                           = 0x257,
	play_sound                                                       = 0x258,
	play_track                                                       = 0x259,
	play_cue_track                                                   = 0x25A,
	music_set_situation                                              = 0x25B,
	music_set_culture                                                = 0x25C,
	stop_all_sounds                                                  = 0x261,
	store_last_sound_channel                                         = 0x267,
	stop_sound_channel                                               = 0x268,
	copy_position                                                    = 0x2BC,
	init_position                                                    = 0x2BD,
	get_trigger_object_position                                      = 0x2BE,
	get_angle_between_positions                                      = 0x2C1,
	position_has_line_of_sight_to_position                           = 0x2C3,
	get_distance_between_positions                                   = 0x2C6,
	get_distance_between_positions_in_meters                         = 0x2C7,
	get_sq_distance_between_positions                                = 0x2C8,
	get_sq_distance_between_positions_in_meters                      = 0x2C9,
	position_is_behind_position                                      = 0x2CA,
	get_sq_distance_between_position_heights                         = 0x2CB,
	position_transform_position_to_parent                            = 0x2CC,
	position_transform_position_to_local                             = 0x2CD,
	position_copy_rotation                                           = 0x2CE,
	position_copy_origin                                             = 0x2CF,
	position_move_x                                                  = 0x2D0,
	position_move_y                                                  = 0x2D1,
	position_move_z                                                  = 0x2D2,
	position_rotate_x                                                = 0x2D3,
	position_rotate_y                                                = 0x2D4,
	position_rotate_z                                                = 0x2D5,
	position_get_x                                                   = 0x2D6,
	position_get_y                                                   = 0x2D7,
	position_get_z                                                   = 0x2D8,
	position_set_x                                                   = 0x2D9,
	position_set_y                                                   = 0x2DA,
	position_set_z                                                   = 0x2DB,
	position_rotate_z_floating                                       = 0x2DE,
	position_get_scale_x                                             = 0x2DF,
	position_get_scale_y                                             = 0x2E0,
	position_get_scale_z                                             = 0x2E1,
	position_rotate_x_floating                                       = 0x2E2,
	position_rotate_y_floating                                       = 0x2E3,
	position_get_rotation_around_z                                   = 0x2E4,
	position_normalize_origin                                        = 0x2E5,
	position_get_rotation_around_x                                   = 0x2E6,
	position_get_rotation_around_y                                   = 0x2E7,
	position_set_scale_x                                             = 0x2E8,
	position_set_scale_y                                             = 0x2E9,
	position_set_scale_z                                             = 0x2EA,
	position_get_screen_projection                                   = 0x2EE,
	mouse_get_world_projection                                       = 0x2EF,
	position_set_z_to_ground_level                                   = 0x317,
	position_get_distance_to_terrain                                 = 0x318,
	position_get_distance_to_ground_level                            = 0x319,
	start_presentation                                               = 0x384,
	start_background_presentation                                    = 0x385,
	presentation_set_duration                                        = 0x386,
	is_presentation_active                                           = 0x387,
	create_text_overlay                                              = 0x38E,
	create_mesh_overlay                                              = 0x38F,
	create_button_overlay                                            = 0x390,
	create_image_button_overlay                                      = 0x391,
	create_slider_overlay                                            = 0x392,
	create_progress_overlay                                          = 0x393,
	create_combo_button_overlay                                      = 0x394,
	create_text_box_overlay                                          = 0x395,
	create_check_box_overlay                                         = 0x396,
	create_simple_text_box_overlay                                   = 0x397,
	overlay_set_text                                                 = 0x398,
	overlay_set_color                                                = 0x399,
	overlay_set_alpha                                                = 0x39A,
	overlay_set_hilight_color                                        = 0x39B,
	overlay_set_hilight_alpha                                        = 0x39C,
	overlay_set_size                                                 = 0x39D,
	overlay_set_position                                             = 0x39E,
	overlay_set_val                                                  = 0x39F,
	overlay_set_boundaries                                           = 0x3A0,
	overlay_set_area_size                                            = 0x3A1,
	overlay_set_mesh_rotation                                        = 0x3A2,
	overlay_add_item                                                 = 0x3A3,
	overlay_animate_to_color                                         = 0x3A4,
	overlay_animate_to_alpha                                         = 0x3A5,
	overlay_animate_to_highlight_color                               = 0x3A6,
	overlay_animate_to_highlight_alpha                               = 0x3A7,
	overlay_animate_to_size                                          = 0x3A8,
	overlay_animate_to_position                                      = 0x3A9,
	create_image_button_overlay_with_tableau_material                = 0x3AA,
	create_mesh_overlay_with_tableau_material                        = 0x3AB,
	create_game_button_overlay                                       = 0x3AC,
	create_in_game_button_overlay                                    = 0x3AD,
	create_number_box_overlay                                        = 0x3AE,
	create_listbox_overlay                                           = 0x3AF,
	create_mesh_overlay_with_item_id                                 = 0x3B0,
	set_container_overlay                                            = 0x3B1,
	overlay_get_position                                             = 0x3B2,
	overlay_set_display                                              = 0x3B3,
	create_combo_label_overlay                                       = 0x3B4,
	overlay_obtain_focus                                             = 0x3B5,
	overlay_set_tooltip                                              = 0x3B6,
	overlay_set_container_overlay                                    = 0x3B7,
	overlay_set_additional_render_height                             = 0x3B8,
	overlay_set_material                                             = 0x3BC,
	show_object_details_overlay                                      = 0x3C0,
	show_item_details                                                = 0x3CA,
	close_item_details                                               = 0x3CB,
	show_item_details_with_modifier                                  = 0x3CC,
	context_menu_add_item                                            = 0x3D4,
	auto_save                                                        = 0x3D9,
	allow_ironman                                                    = 0x3DC,
	get_average_game_difficulty                                      = 0x3DE,
	get_level_boundary                                               = 0x3DF,
	all_enemies_defeated                                             = 0x3EB,
	num_active_teams_le                                              = 0x3ED,
	main_hero_fallen                                                 = 0x3EE,
	finish_party_battle_mode                                         = 0x3FB,
	set_party_battle_mode                                            = 0x3FC,
	set_camera_follow_party                                          = 0x3FD,
	start_map_conversation                                           = 0x401,
	rest_for_hours                                                   = 0x406,
	rest_for_hours_interactive                                       = 0x407,
	add_xp_to_troop                                                  = 0x426,
	add_gold_as_xp                                                   = 0x427,
	add_xp_as_reward                                                 = 0x428,
	add_gold_to_party                                                = 0x42E,
	set_party_creation_random_limits                                 = 0x438,
	add_info_page_note_tableau_mesh                                  = 0x442,
	add_info_page_note_from_dialog                                   = 0x443,
	add_info_page_note_from_sreg                                     = 0x444,
	troop_set_note_available                                         = 0x447,
	faction_set_note_available                                       = 0x448,
	party_set_note_available                                         = 0x449,
	quest_set_note_available                                         = 0x44A,
	spawn_around_party                                               = 0x44C,
	set_spawn_radius                                                 = 0x44F,
	display_debug_message                                            = 0x450,
	display_log_message                                              = 0x451,
	display_message                                                  = 0x452,
	set_show_messages                                                = 0x453,
	add_troop_note_tableau_mesh                                      = 0x454,
	add_faction_note_tableau_mesh                                    = 0x455,
	add_party_note_tableau_mesh                                      = 0x456,
	add_quest_note_tableau_mesh                                      = 0x457,
	add_quest_note_from_dialog                                       = 0x458,
	add_quest_note_from_sreg                                         = 0x459,
	add_troop_note_from_dialog                                       = 0x45A,
	add_faction_note_from_dialog                                     = 0x45B,
	add_party_note_from_dialog                                       = 0x45C,
	add_troop_note_from_sreg                                         = 0x45D,
	add_faction_note_from_sreg                                       = 0x45E,
	add_party_note_from_sreg                                         = 0x45F,
	dialog_box                                                       = 0x460,
	question_box                                                     = 0x461,
	tutorial_message                                                 = 0x462,
	tutorial_message_set_position                                    = 0x463,
	tutorial_message_set_size                                        = 0x464,
	tutorial_message_set_center_justify                              = 0x465,
	tutorial_message_set_background                                  = 0x466,
	set_tooltip_text                                                 = 0x46A,
	reset_price_rates                                                = 0x492,
	set_price_rate_for_item                                          = 0x493,
	set_price_rate_for_item_type                                     = 0x494,
	party_join                                                       = 0x4B1,
	party_join_as_prisoner                                           = 0x4B2,
	troop_join                                                       = 0x4B3,
	troop_join_as_prisoner                                           = 0x4B4,
	remove_member_from_party                                         = 0x4BA,
	remove_regular_prisoners                                         = 0x4BB,
	remove_troops_from_companions                                    = 0x4BF,
	remove_troops_from_prisoners                                     = 0x4C0,
	heal_party                                                       = 0x4C9,
	disable_party                                                    = 0x4CE,
	enable_party                                                     = 0x4CF,
	remove_party                                                     = 0x4D0,
	add_companion_party                                              = 0x4D1,
	add_troop_to_site                                                = 0x4E2,
	remove_troop_from_site                                           = 0x4E3,
	modify_visitors_at_site                                          = 0x4ED,
	reset_visitors                                                   = 0x4EE,
	set_visitor                                                      = 0x4EF,
	set_visitors                                                     = 0x4F0,
	add_visitors_to_current_scene                                    = 0x4F1,
	scene_set_day_time                                               = 0x4F2,
	set_relation                                                     = 0x4F6,
	faction_set_name                                                 = 0x4FB,
	faction_set_color                                                = 0x4FC,
	faction_get_color                                                = 0x4FD,
	start_quest                                                      = 0x500,
	complete_quest                                                   = 0x501,
	succeed_quest                                                    = 0x502,
	fail_quest                                                       = 0x503,
	cancel_quest                                                     = 0x504,
	set_quest_progression                                            = 0x505,
	conclude_quest                                                   = 0x506,
	setup_quest_text                                                 = 0x50A,
	setup_quest_giver                                                = 0x50B,
	start_encounter                                                  = 0x514,
	leave_encounter                                                  = 0x515,
	encounter_attack                                                 = 0x516,
	select_enemy                                                     = 0x517,
	set_passage_menu                                                 = 0x518,
	auto_set_meta_mission_at_end_commited                            = 0x519,
	end_current_battle                                               = 0x51B,
	set_mercenary_source_party                                       = 0x528,
	set_merchandise_modifier_quality                                 = 0x5D2,
	set_merchandise_max_value                                        = 0x5D3,
	reset_item_probabilities                                         = 0x5D4,
	set_item_probability_in_merchandise                              = 0x5D5,
	troop_set_name                                                   = 0x5DD,
	troop_set_plural_name                                            = 0x5DE,
	troop_set_face_key_from_current_profile                          = 0x5DF,
	troop_set_type                                                   = 0x5E1,
	troop_get_type                                                   = 0x5E2,
	troop_is_hero                                                    = 0x5E3,
	troop_is_wounded                                                 = 0x5E4,
	troop_set_auto_equip                                             = 0x5E5,
	troop_ensure_inventory_space                                     = 0x5E6,
	troop_sort_inventory                                             = 0x5E7,
	troop_add_merchandise                                            = 0x5E8,
	troop_add_merchandise_with_faction                               = 0x5E9,
	troop_get_xp                                                     = 0x5EB,
	troop_get_class                                                  = 0x5EC,
	troop_set_class                                                  = 0x5ED,
	troop_raise_attribute                                            = 0x5F0,
	troop_raise_skill                                                = 0x5F1,
	troop_raise_proficiency                                          = 0x5F2,
	troop_raise_proficiency_linear                                   = 0x5F3,
	troop_add_proficiency_points                                     = 0x5F5,
	troop_add_gold                                                   = 0x5F8,
	troop_remove_gold                                                = 0x5F9,
	troop_add_item                                                   = 0x5FA,
	troop_remove_item                                                = 0x5FB,
	troop_clear_inventory                                            = 0x5FC,
	troop_equip_items                                                = 0x5FD,
	troop_inventory_slot_set_item_amount                             = 0x5FE,
	troop_add_items                                                  = 0x5FF,
	troop_remove_items                                               = 0x600,
	troop_inventory_slot_get_item_amount                             = 0x601,
	troop_inventory_slot_get_item_max_amount                         = 0x602,
	troop_loot_troop                                                 = 0x603,
	troop_get_inventory_capacity                                     = 0x604,
	troop_get_inventory_slot                                         = 0x605,
	troop_get_inventory_slot_modifier                                = 0x606,
	troop_set_inventory_slot                                         = 0x607,
	troop_set_inventory_slot_modifier                                = 0x608,
	troop_set_faction                                                = 0x60E,
	troop_set_age                                                    = 0x613,
	troop_set_health                                                 = 0x618,
	troop_get_upgrade_troop                                          = 0x619,
	item_get_type                                                    = 0x622,
	troop_get_ranged_damage_adder                                    = 0x62B,
	troop_set_ranged_damage_adder                                    = 0x62C,
	troop_get_blunt_damage_adder                                     = 0x62D,
	troop_set_blunt_damage_adder                                     = 0x62E,
	troop_get_pierce_damage_adder                                    = 0x62F,
	troop_set_pierce_damage_adder                                    = 0x630,
	troop_get_cut_damage_adder                                       = 0x631,
	troop_set_cut_damage_adder                                       = 0x632,
	troop_get_melee_speed_adder                                      = 0x633,
	troop_set_melee_speed_adder                                      = 0x634,
	troop_get_ranged_speed_adder                                     = 0x635,
	troop_set_ranged_speed_adder                                     = 0x636,
	troop_get_accuracy_adder                                         = 0x637,
	troop_set_accuracy_adder                                         = 0x638,
	troop_get_charge_adder                                           = 0x639,
	troop_set_charge_adder                                           = 0x63A,
	troop_get_horse_speed_adder                                      = 0x63B,
	troop_set_horse_speed_adder                                      = 0x63C,
	troop_get_riding_limit_adder                                     = 0x63D,
	troop_set_riding_limit_adder                                     = 0x63E,
	troop_get_strength_limit_adder                                   = 0x63F,
	troop_set_strength_limit_adder                                   = 0x640,
	party_get_num_companions                                         = 0x641,
	party_get_num_prisoners                                          = 0x642,
	party_set_flags                                                  = 0x643,
	party_set_marshall                                               = 0x644,
	party_set_extra_text                                             = 0x645,
	party_set_aggressiveness                                         = 0x646,
	party_set_courage                                                = 0x647,
	party_get_current_terrain                                        = 0x648,
	party_get_template_id                                            = 0x649,
	party_add_members                                                = 0x64A,
	party_add_prisoners                                              = 0x64B,
	party_add_leader                                                 = 0x64C,
	party_force_add_members                                          = 0x64D,
	party_force_add_prisoners                                        = 0x64E,
	party_remove_members                                             = 0x64F,
	party_remove_prisoners                                           = 0x650,
	party_clear                                                      = 0x651,
	party_wound_members                                              = 0x652,
	party_remove_members_wounded_first                               = 0x653,
	party_set_faction                                                = 0x654,
	party_relocate_near_party                                        = 0x657,
	party_get_position                                               = 0x659,
	party_set_position                                               = 0x65A,
	map_get_random_position_around_position                          = 0x65B,
	map_get_land_position_around_position                            = 0x65C,
	map_get_water_position_around_position                           = 0x65D,
	party_count_members_of_type                                      = 0x65E,
	party_count_companions_of_type                                   = 0x65F,
	party_count_prisoners_of_type                                    = 0x660,
	party_get_free_companions_capacity                               = 0x661,
	party_get_free_prisoners_capacity                                = 0x662,
	party_set_base_terrain_strength                                  = 0x663,
	party_get_ai_initiative                                          = 0x666,
	party_set_ai_initiative                                          = 0x667,
	party_set_ai_behavior                                            = 0x668,
	party_set_ai_object                                              = 0x669,
	party_set_ai_target_position                                     = 0x66A,
	party_set_ai_patrol_radius                                       = 0x66B,
	party_ignore_player                                              = 0x66C,
	party_set_bandit_attraction                                      = 0x66D,
	party_get_helpfulness                                            = 0x66E,
	party_set_helpfulness                                            = 0x66F,
	party_set_ignore_with_player_party                               = 0x670,
	party_get_ignore_with_player_party                               = 0x671,
	party_get_num_companion_stacks                                   = 0x672,
	party_get_num_prisoner_stacks                                    = 0x673,
	party_stack_get_troop_id                                         = 0x674,
	party_stack_get_size                                             = 0x675,
	party_stack_get_num_wounded                                      = 0x676,
	party_stack_get_troop_dna                                        = 0x677,
	party_prisoner_stack_get_troop_id                                = 0x678,
	party_prisoner_stack_get_size                                    = 0x679,
	party_prisoner_stack_get_troop_dna                               = 0x67A,
	party_attach_to_party                                            = 0x67C,
	party_detach                                                     = 0x67D,
	party_collect_attachments_to_party                               = 0x67E,
	party_quick_attach_to_current_battle                             = 0x67F,
	party_get_cur_town                                               = 0x681,
	party_leave_cur_battle                                           = 0x682,
	party_set_next_battle_simulation_time                            = 0x683,
	party_set_name                                                   = 0x685,
	party_add_xp_to_stack                                            = 0x686,
	party_get_morale                                                 = 0x687,
	party_set_morale                                                 = 0x688,
	party_upgrade_with_xp                                            = 0x689,
	party_add_xp                                                     = 0x68A,
	party_add_template                                               = 0x68B,
	party_set_icon                                                   = 0x68C,
	party_set_banner_icon                                            = 0x68D,
	party_add_particle_system                                        = 0x68E,
	party_clear_particle_systems                                     = 0x68F,
	party_get_battle_opponent                                        = 0x690,
	party_get_icon                                                   = 0x691,
	party_set_extra_icon                                             = 0x692,
	party_get_skill_level                                            = 0x695,
	agent_get_speed                                                  = 0x699,
	get_battle_advantage                                             = 0x69A,
	set_battle_advantage                                             = 0x69B,
	agent_refill_wielded_shield_hit_points                           = 0x69C,
	agent_is_in_special_mode                                         = 0x69D,
	party_get_attached_to                                            = 0x69E,
	party_get_num_attached_parties                                   = 0x69F,
	party_get_attached_party_with_rank                               = 0x6A0,
	inflict_casualties_to_party_group                                = 0x6A1,
	distribute_party_among_party_group                               = 0x6A2,
	agent_is_routed                                                  = 0x6A3,
	get_player_agent_no                                              = 0x6A4,
	get_player_agent_kill_count                                      = 0x6A5,
	agent_is_alive                                                   = 0x6A6,
	agent_is_wounded                                                 = 0x6A7,
	agent_is_human                                                   = 0x6A8,
	get_player_agent_own_troop_kill_count                            = 0x6A9,
	agent_is_ally                                                    = 0x6AA,
	agent_is_non_player                                              = 0x6AB,
	agent_is_defender                                                = 0x6AC,
	agent_get_look_position                                          = 0x6AD,
	agent_get_position                                               = 0x6AE,
	agent_set_position                                               = 0x6AF,
	agent_is_active                                                  = 0x6B0,
	agent_set_look_target_agent                                      = 0x6B1,
	agent_get_horse                                                  = 0x6B2,
	agent_get_rider                                                  = 0x6B3,
	agent_get_party_id                                               = 0x6B4,
	agent_get_entry_no                                               = 0x6B5,
	agent_get_troop_id                                               = 0x6B6,
	agent_get_item_id                                                = 0x6B7,
	store_agent_hit_points                                           = 0x6B8,
	agent_set_hit_points                                             = 0x6B9,
	agent_deliver_damage_to_agent                                    = 0x6BA,
	agent_get_kill_count                                             = 0x6BB,
	agent_get_player_id                                              = 0x6BC,
	agent_set_invulnerable_shield                                    = 0x6BD,
	agent_get_wielded_item                                           = 0x6BE,
	agent_get_ammo                                                   = 0x6BF,
	agent_refill_ammo                                                = 0x6C0,
	agent_has_item_equipped                                          = 0x6C1,
	agent_set_scripted_destination                                   = 0x6C2,
	agent_get_scripted_destination                                   = 0x6C3,
	agent_force_rethink                                              = 0x6C4,
	agent_set_no_death_knock_down_only                               = 0x6C5,
	agent_set_horse_speed_factor                                     = 0x6C6,
	agent_clear_scripted_mode                                        = 0x6C7,
	agent_set_speed_limit                                            = 0x6C8,
	agent_ai_set_always_attack_in_melee                              = 0x6C9,
	agent_get_simple_behavior                                        = 0x6CA,
	agent_get_combat_state                                           = 0x6CB,
	agent_set_animation                                              = 0x6CC,
	agent_set_stand_animation                                        = 0x6CD,
	agent_set_walk_forward_animation                                 = 0x6CE,
	agent_set_animation_progress                                     = 0x6CF,
	agent_set_look_target_position                                   = 0x6D0,
	agent_set_attack_action                                          = 0x6D1,
	agent_set_defend_action                                          = 0x6D2,
	agent_set_wielded_item                                           = 0x6D3,
	agent_set_scripted_destination_no_attack                         = 0x6D4,
	agent_fade_out                                                   = 0x6D5,
	agent_play_sound                                                 = 0x6D6,
	agent_start_running_away                                         = 0x6D7,
	agent_stop_running_away                                          = 0x6D8,
	agent_ai_set_aggressiveness                                      = 0x6D9,
	agent_set_kick_allowed                                           = 0x6DA,
	remove_agent                                                     = 0x6DB,
	agent_get_attached_scene_prop                                    = 0x6DC,
	agent_set_attached_scene_prop                                    = 0x6DD,
	agent_set_attached_scene_prop_x                                  = 0x6DE,
	agent_set_attached_scene_prop_z                                  = 0x6DF,
	agent_get_time_elapsed_since_removed                             = 0x6E0,
	agent_get_number_of_enemies_following                            = 0x6E1,
	agent_set_no_dynamics                                            = 0x6E2,
	agent_get_attack_action                                          = 0x6E3,
	agent_get_defend_action                                          = 0x6E4,
	agent_get_group                                                  = 0x6E5,
	agent_set_group                                                  = 0x6E6,
	agent_get_action_dir                                             = 0x6E7,
	agent_get_animation                                              = 0x6E8,
	agent_is_in_parried_animation                                    = 0x6E9,
	agent_get_team                                                   = 0x6EA,
	agent_set_team                                                   = 0x6EB,
	agent_get_class                                                  = 0x6EC,
	agent_get_division                                               = 0x6ED,
	agent_unequip_item                                               = 0x6EE,
	class_is_listening_order                                         = 0x6EF,
	agent_set_ammo                                                   = 0x6F0,
	agent_add_offer_with_timeout                                     = 0x6F1,
	agent_check_offer_from_agent                                     = 0x6F2,
	agent_equip_item                                                 = 0x6F3,
	entry_point_get_position                                         = 0x6F4,
	entry_point_set_position                                         = 0x6F5,
	entry_point_is_auto_generated                                    = 0x6F6,
	agent_set_division                                               = 0x6F7,
	team_get_hold_fire_order                                         = 0x6F8,
	team_get_movement_order                                          = 0x6F9,
	team_get_riding_order                                            = 0x6FA,
	team_get_weapon_usage_order                                      = 0x6FB,
	teams_are_enemies                                                = 0x6FC,
	close_order_menu                                                 = 0x6FD,
	team_give_order                                                  = 0x6FE,
	team_set_order_position                                          = 0x6FF,
	team_get_leader                                                  = 0x700,
	team_set_leader                                                  = 0x701,
	team_get_order_position                                          = 0x702,
	team_set_order_listener                                          = 0x703,
	team_set_relation                                                = 0x704,
	set_rain                                                         = 0x705,
	set_fog_distance                                                 = 0x706,
	get_scene_boundaries                                             = 0x707,
	scene_prop_enable_after_time                                     = 0x708,
	scene_prop_has_agent_on_it                                       = 0x709,
	agent_clear_relations_with_agents                                = 0x70A,
	agent_add_relation_with_agent                                    = 0x70B,
	agent_get_item_slot                                              = 0x70C,
	ai_mesh_face_group_show_hide                                     = 0x70D,
	agent_is_alarmed                                                 = 0x70E,
	agent_set_is_alarmed                                             = 0x70F,
	agent_stop_sound                                                 = 0x710,
	agent_set_attached_scene_prop_y                                  = 0x711,
	scene_prop_get_num_instances                                     = 0x712,
	scene_prop_get_instance                                          = 0x713,
	scene_prop_get_visibility                                        = 0x714,
	scene_prop_set_visibility                                        = 0x715,
	scene_prop_set_hit_points                                        = 0x716,
	scene_prop_get_hit_points                                        = 0x717,
	scene_prop_get_max_hit_points                                    = 0x718,
	scene_prop_get_team                                              = 0x719,
	scene_prop_set_team                                              = 0x71A,
	scene_prop_set_prune_time                                        = 0x71B,
	scene_prop_set_cur_hit_points                                    = 0x71C,
	scene_prop_fade_out                                              = 0x71E,
	scene_prop_fade_in                                               = 0x71F,
	agent_get_ammo_for_slot                                          = 0x721,
	agent_is_in_line_of_sight                                        = 0x722,
	agent_deliver_damage_to_agent_advanced                           = 0x723,
	team_get_gap_distance                                            = 0x724,
	add_missile                                                      = 0x725,
	scene_item_get_num_instances                                     = 0x726,
	scene_item_get_instance                                          = 0x727,
	scene_spawned_item_get_num_instances                             = 0x728,
	scene_spawned_item_get_instance                                  = 0x729,
	scene_allows_mounted_units                                       = 0x72A,
	class_set_name                                                   = 0x72D,
	prop_instance_is_valid                                           = 0x72E,
	prop_instance_get_variation_id                                   = 0x730,
	prop_instance_get_variation_id_2                                 = 0x731,
	prop_instance_get_position                                       = 0x73A,
	prop_instance_get_starting_position                              = 0x73B,
	prop_instance_get_scale                                          = 0x73C,
	prop_instance_get_scene_prop_kind                                = 0x73D,
	prop_instance_set_scale                                          = 0x73E,
	prop_instance_set_position                                       = 0x73F,
	prop_instance_get_parent_instance                                = 0x740,
	prop_instance_set_parent_instance                                = 0x741,
	prop_instance_get_local_position                                 = 0x742,
	prop_instance_set_local_position                                 = 0x743,
	prop_instance_animate_to_position                                = 0x744,
	prop_instance_stop_animating                                     = 0x745,
	prop_instance_is_animating                                       = 0x746,
	prop_instance_get_animation_target_position                      = 0x747,
	prop_instance_enable_physics                                     = 0x748,
	prop_instance_rotate_to_position                                 = 0x749,
	prop_instance_initialize_rotation_angles                         = 0x74A,
	prop_instance_refill_hit_points                                  = 0x74E,
	prop_instance_dynamics_set_properties                            = 0x74F,
	prop_instance_dynamics_set_velocity                              = 0x750,
	prop_instance_dynamics_set_omega                                 = 0x751,
	prop_instance_dynamics_apply_impulse                             = 0x752,
	prop_instance_receive_damage                                     = 0x755,
	prop_instance_intersects_with_prop_instance                      = 0x758,
	prop_instance_play_sound                                         = 0x759,
	prop_instance_stop_sound                                         = 0x75A,
	prop_instance_clear_attached_missiles                            = 0x75D,
	prop_instance_add_particle_system                                = 0x75E,
	prop_instance_stop_all_particle_systems                          = 0x75F,
	replace_prop_instance                                            = 0x761,
	replace_scene_props                                              = 0x762,
	replace_scene_items_with_scene_props                             = 0x763,
	cast_ray                                                         = 0x76C,
	set_mission_result                                               = 0x772,
	finish_mission                                                   = 0x773,
	jump_to_scene                                                    = 0x776,
	set_jump_mission                                                 = 0x777,
	set_jump_entry                                                   = 0x778,
	start_mission_conversation                                       = 0x780,
	add_reinforcements_to_entry                                      = 0x78A,
	mission_enable_talk                                              = 0x78F,
	mission_disable_talk                                             = 0x790,
	mission_tpl_entry_set_override_flags                             = 0x794,
	mission_tpl_entry_clear_override_items                           = 0x795,
	mission_tpl_entry_add_override_item                              = 0x796,
	mission_tpl_are_all_agents_spawned                               = 0x797,
	set_current_color                                                = 0x79E,
	set_position_delta                                               = 0x7A3,
	add_point_light                                                  = 0x7A8,
	add_point_light_to_entity                                        = 0x7A9,
	cur_item_add_mesh                                                = 0x7AC,
	particle_system_add_new                                          = 0x7AD,
	particle_system_emit                                             = 0x7B0,
	particle_system_burst                                            = 0x7B1,
	set_spawn_position                                               = 0x7B2,
	spawn_item                                                       = 0x7B3,
	spawn_agent                                                      = 0x7B4,
	spawn_horse                                                      = 0x7B5,
	spawn_scene_prop                                                 = 0x7B6,
	particle_system_burst_no_sync                                    = 0x7B7,
	spawn_item_without_refill                                        = 0x7B8,
	agent_get_item_cur_ammo                                          = 0x7B9,
	cur_item_set_material                                            = 0x7BA,
	cur_tableau_add_terrain                                          = 0x7BB,
	cur_tableau_add_tableau_mesh                                     = 0x7BC,
	cur_item_set_tableau_material                                    = 0x7BD,
	cur_scene_prop_set_tableau_material                              = 0x7BE,
	cur_map_icon_set_tableau_material                                = 0x7BF,
	cur_tableau_render_as_alpha_mask                                 = 0x7C0,
	cur_tableau_set_background_color                                 = 0x7C1,
	cur_agent_set_banner_tableau_material                            = 0x7C2,
	cur_tableau_set_ambient_light                                    = 0x7C3,
	cur_tableau_set_camera_position                                  = 0x7C4,
	cur_tableau_set_camera_parameters                                = 0x7C5,
	cur_tableau_add_point_light                                      = 0x7C6,
	cur_tableau_add_sun_light                                        = 0x7C7,
	cur_tableau_add_mesh                                             = 0x7C8,
	cur_tableau_add_mesh_with_vertex_color                           = 0x7C9,
	cur_tableau_add_map_icon                                         = 0x7CA,
	cur_tableau_add_troop                                            = 0x7CB,
	cur_tableau_add_horse                                            = 0x7CC,
	cur_tableau_set_override_flags                                   = 0x7CD,
	cur_tableau_clear_override_items                                 = 0x7CE,
	cur_tableau_add_override_item                                    = 0x7CF,
	cur_tableau_add_mesh_with_scale_and_vertex_color                 = 0x7D0,
	mission_cam_set_mode                                             = 0x7D1,
	mission_get_time_speed                                           = 0x7D2,
	mission_set_time_speed                                           = 0x7D3,
	mission_time_speed_move_to_value                                 = 0x7D4,
	mission_set_duel_mode                                            = 0x7D6,
	mission_cam_set_screen_color                                     = 0x7D8,
	mission_cam_animate_to_screen_color                              = 0x7D9,
	mission_cam_get_position                                         = 0x7DA,
	mission_cam_set_position                                         = 0x7DB,
	mission_cam_animate_to_position                                  = 0x7DC,
	mission_cam_get_aperture                                         = 0x7DD,
	mission_cam_set_aperture                                         = 0x7DE,
	mission_cam_animate_to_aperture                                  = 0x7DF,
	mission_cam_animate_to_position_and_aperture                     = 0x7E0,
	mission_cam_set_target_agent                                     = 0x7E1,
	mission_cam_clear_target_agent                                   = 0x7E2,
	mission_cam_set_animation                                        = 0x7E3,
	talk_info_show                                                   = 0x7E4,
	talk_info_set_relation_bar                                       = 0x7E5,
	talk_info_set_line                                               = 0x7E6,
	set_background_mesh                                              = 0x7EF,
	set_game_menu_tableau_mesh                                       = 0x7F0,
	change_screen_return                                             = 0x7F8,
	change_screen_loot                                               = 0x7F9,
	change_screen_trade                                              = 0x7FA,
	change_screen_exchange_members                                   = 0x7FB,
	change_screen_trade_prisoners                                    = 0x7FC,
	change_screen_buy_mercenaries                                    = 0x7FD,
	change_screen_view_character                                     = 0x7FE,
	change_screen_training                                           = 0x7FF,
	change_screen_mission                                            = 0x800,
	change_screen_map_conversation                                   = 0x801,
	change_screen_exchange_with_party                                = 0x802,
	change_screen_equip_other                                        = 0x803,
	change_screen_map                                                = 0x804,
	change_screen_notes                                              = 0x805,
	change_screen_quit                                               = 0x807,
	change_screen_give_members                                       = 0x808,
	change_screen_controls                                           = 0x809,
	change_screen_options                                            = 0x80A,
	change_screen_class_selection                                    = 0x80B,
	jump_to_menu                                                     = 0x80C,
	disable_menu_option                                              = 0x80D,
	agent_get_damage_modifier                                        = 0x811,
	agent_get_accuracy_modifier                                      = 0x812,
	agent_get_speed_modifier                                         = 0x813,
	agent_get_reload_speed_modifier                                  = 0x814,
	agent_get_use_speed_modifier                                     = 0x815,
	store_trigger_param                                              = 0x816,
	store_trigger_param_1                                            = 0x817,
	store_trigger_param_2                                            = 0x818,
	store_trigger_param_3                                            = 0x819,
	set_trigger_result                                               = 0x81B,
	agent_get_bone_position                                          = 0x81C,
	agent_ai_set_interact_with_player                                = 0x81D,
	agent_ai_get_look_target                                         = 0x820,
	agent_ai_get_move_target                                         = 0x821,
	agent_ai_get_behavior_target                                     = 0x822,
	agent_ai_set_can_crouch                                          = 0x823,
	agent_notify_animation_progress                                  = 0x825,
	agent_relocate_to_position                                       = 0x828,
	agent_set_horse_rotation_speed_modifier                          = 0x829,
	agent_set_max_hit_points                                         = 0x82A,
	agent_set_damage_modifier                                        = 0x82B,
	agent_set_accuracy_modifier                                      = 0x82C,
	agent_set_speed_modifier                                         = 0x82D,
	agent_set_reload_speed_modifier                                  = 0x82E,
	agent_set_use_speed_modifier                                     = 0x82F,
	agent_set_visibility                                             = 0x830,
	agent_get_crouch_mode                                            = 0x831,
	agent_set_crouch_mode                                            = 0x832,
	agent_set_ranged_damage_modifier                                 = 0x833,
	val_lshift                                                       = 0x834,
	val_rshift                                                       = 0x835,
	val_add                                                          = 0x839,
	val_sub                                                          = 0x83A,
	val_mul                                                          = 0x83B,
	val_div                                                          = 0x83C,
	val_mod                                                          = 0x83D,
	val_min                                                          = 0x83E,
	val_max                                                          = 0x83F,
	val_clamp                                                        = 0x840,
	val_abs                                                          = 0x841,
	val_or                                                           = 0x842,
	val_and                                                          = 0x843,
	store_or                                                         = 0x844,
	store_and                                                        = 0x845,
	store_mod                                                        = 0x847,
	store_add                                                        = 0x848,
	store_sub                                                        = 0x849,
	store_mul                                                        = 0x84A,
	store_div                                                        = 0x84B,
	set_fixed_point_multiplier                                       = 0x84C,
	store_sqrt                                                       = 0x84D,
	store_pow                                                        = 0x84E,
	store_sin                                                        = 0x84F,
	store_cos                                                        = 0x850,
	store_tan                                                        = 0x851,
	convert_to_fixed_point                                           = 0x852,
	convert_from_fixed_point                                         = 0x853,
	assign                                                           = 0x855,
	shuffle_range                                                    = 0x856,
	store_random                                                     = 0x857,
	store_random_in_range                                            = 0x858,
	store_asin                                                       = 0x85C,
	store_acos                                                       = 0x85D,
	store_atan                                                       = 0x85E,
	store_atan2                                                      = 0x85F,
	store_troop_gold                                                 = 0x865,
	store_num_free_stacks                                            = 0x86A,
	store_num_free_prisoner_stacks                                   = 0x86B,
	store_party_size                                                 = 0x86C,
	store_party_size_wo_prisoners                                    = 0x86D,
	store_troop_kind_count                                           = 0x86E,
	store_num_regular_prisoners                                      = 0x86F,
	store_troop_count_companions                                     = 0x870,
	store_troop_count_prisoners                                      = 0x871,
	store_item_kind_count                                            = 0x875,
	store_free_inventory_capacity                                    = 0x877,
	store_skill_level                                                = 0x87A,
	store_character_level                                            = 0x87B,
	store_attribute_level                                            = 0x87C,
	store_troop_faction                                              = 0x87D,
	store_troop_health                                               = 0x87F,
	store_proficiency_level                                          = 0x880,
	store_main_party_wounded                                         = 0x884,
	store_relation                                                   = 0x88E,
	set_conversation_speaker_troop                                   = 0x895,
	set_conversation_speaker_agent                                   = 0x896,
	store_conversation_agent                                         = 0x897,
	store_conversation_troop                                         = 0x898,
	store_partner_faction                                            = 0x899,
	store_encountered_party                                          = 0x89A,
	store_encountered_party2                                         = 0x89B,
	store_faction_of_party                                           = 0x89C,
	set_encountered_party                                            = 0x89D,
	store_current_scene                                              = 0x8A3,
	store_zoom_amount                                                = 0x8AC,
	set_zoom_amount                                                  = 0x8AD,
	is_zoom_disabled                                                 = 0x8AE,
	store_item_value                                                 = 0x8B6,
	store_troop_value                                                = 0x8B7,
	store_partner_quest                                              = 0x8C0,
	store_random_quest_in_range                                      = 0x8CA,
	store_random_troop_to_raise                                      = 0x8CB,
	store_random_troop_to_capture                                    = 0x8CC,
	store_random_party_in_range                                      = 0x8CE,
	store01_random_parties_in_range                                  = 0x8CF,
	store_random_horse                                               = 0x8D1,
	store_random_equipment                                           = 0x8D2,
	store_random_armor                                               = 0x8D3,
	store_quest_number                                               = 0x8D5,
	store_quest_item                                                 = 0x8D6,
	store_quest_troop                                                = 0x8D7,
	store_current_hours                                              = 0x8DE,
	store_time_of_day                                                = 0x8DF,
	store_current_day                                                = 0x8E0,
	is_currently_night                                               = 0x8E1,
	store_distance_to_party_from_party                               = 0x8E9,
	get_party_ai_behavior                                            = 0x8F2,
	get_party_ai_object                                              = 0x8F3,
	party_get_ai_target_position                                     = 0x8F4,
	get_party_ai_current_behavior                                    = 0x8F5,
	get_party_ai_current_object                                      = 0x8F6,
	store_num_parties_created                                        = 0x8FC,
	store_num_parties_destroyed                                      = 0x8FD,
	store_num_parties_destroyed_by_player                            = 0x8FE,
	store_num_parties_of_template                                    = 0x906,
	store_random_party_of_template                                   = 0x907,
	str_is_empty                                                     = 0x90E,
	str_clear                                                        = 0x90F,
	str_store_string                                                 = 0x910,
	str_store_string_reg                                             = 0x911,
	str_store_troop_name                                             = 0x912,
	str_store_troop_name_plural                                      = 0x913,
	str_store_troop_name_by_count                                    = 0x914,
	str_store_item_name                                              = 0x915,
	str_store_item_name_plural                                       = 0x916,
	str_store_item_name_by_count                                     = 0x917,
	str_store_party_name                                             = 0x91A,
	str_store_agent_name                                             = 0x91C,
	str_store_faction_name                                           = 0x91F,
	str_store_quest_name                                             = 0x920,
	str_store_info_page_name                                         = 0x921,
	str_store_date                                                   = 0x924,
	str_store_troop_name_link                                        = 0x925,
	str_store_party_name_link                                        = 0x926,
	str_store_faction_name_link                                      = 0x927,
	str_store_quest_name_link                                        = 0x928,
	str_store_info_page_name_link                                    = 0x929,
	str_store_class_name                                             = 0x92A,
	str_store_player_username                                        = 0x92E,
	str_store_server_password                                        = 0x92F,
	str_store_server_name                                            = 0x930,
	str_store_welcome_message                                        = 0x931,
	str_encode_url                                                   = 0x933,
	store_remaining_team_no                                          = 0x938,
	store_mission_timer_a_msec                                       = 0x93D,
	store_mission_timer_b_msec                                       = 0x93E,
	store_mission_timer_c_msec                                       = 0x93F,
	store_mission_timer_a                                            = 0x942,
	store_mission_timer_b                                            = 0x943,
	store_mission_timer_c                                            = 0x944,
	reset_mission_timer_a                                            = 0x947,
	reset_mission_timer_b                                            = 0x948,
	reset_mission_timer_c                                            = 0x949,
	set_cheer_at_no_enemy                                            = 0x94B,
	store_enemy_count                                                = 0x94C,
	store_friend_count                                               = 0x94D,
	store_defender_count                                             = 0x94F,
	store_attacker_count                                             = 0x950,
	store_normalized_team_count                                      = 0x951,
	set_postfx                                                       = 0x952,
	set_river_shader_to_mud                                          = 0x953,
	show_troop_details                                               = 0x954,
	set_skybox                                                       = 0x955,
	set_startup_sun_light                                            = 0x956,
	set_startup_ambient_light                                        = 0x957,
	set_startup_ground_ambient_light                                 = 0x958,
	rebuild_shadow_map                                               = 0x959,
	get_startup_sun_light                                            = 0x95A,
	get_startup_ambient_light                                        = 0x95B,
	get_startup_ground_ambient_light                                 = 0x95C,
	set_shader_param_int                                             = 0x960,
	set_shader_param_float                                           = 0x961,
	set_shader_param_float4                                          = 0x962,
	set_shader_param_float4x4                                        = 0x963,
	show_hud                                                         = 0x9C5,
	enable_orders                                                    = 0x9C6,
	prop_instance_deform_to_time                                     = 0xA32,
	prop_instance_deform_in_range                                    = 0xA33,
	prop_instance_deform_in_cycle_loop                               = 0xA34,
	prop_instance_get_current_deform_progress                        = 0xA37,
	prop_instance_get_current_deform_frame                           = 0xA38,
	prop_instance_set_material                                       = 0xA39,
	agent_attack_scene_prop_instance                                 = 0xA5A,
	agent_ai_get_num_cached_enemies                                  = 0xA6E,
	agent_ai_get_cached_enemy                                        = 0xA6F,
	item_get_weight                                                  = 0xA8C,
	item_get_value                                                   = 0xA8D,
	item_get_difficulty                                              = 0xA8E,
	item_get_head_armor                                              = 0xA8F,
	item_get_body_armor                                              = 0xA90,
	item_get_leg_armor                                               = 0xA91,
	item_get_hit_points                                              = 0xA92,
	item_get_weapon_length                                           = 0xA93,
	item_get_speed_rating                                            = 0xA94,
	item_get_missile_speed                                           = 0xA95,
	item_get_max_ammo                                                = 0xA96,
	item_get_accuracy                                                = 0xA97,
	item_get_shield_height                                           = 0xA98,
	item_get_horse_scale                                             = 0xA99,
	item_get_horse_speed                                             = 0xA9A,
	item_get_horse_maneuver                                          = 0xA9B,
	item_get_food_quality                                            = 0xA9C,
	item_get_abundance                                               = 0xA9D,
	item_get_thrust_damage                                           = 0xA9E,
	item_get_thrust_damage_type                                      = 0xA9F,
	item_get_swing_damage                                            = 0xAA0,
	item_get_swing_damage_type                                       = 0xAA1,
	item_get_horse_charge_damage                                     = 0xAA2,
	item_has_property                                                = 0xAA3,
	item_has_capability                                              = 0xAA4,
	item_has_modifier                                                = 0xAA5,
	item_has_faction                                                 = 0xAA6,
	str_store_player_face_keys                                       = 0xABB,
	player_set_face_keys                                             = 0xABC,
	str_store_agent_face_keys                                        = 0xABD,
	str_store_troop_face_keys                                        = 0xABE,
	troop_set_face_keys                                              = 0xABF,
	face_keys_get_hair                                               = 0xAC0,
	face_keys_set_hair                                               = 0xAC1,
	face_keys_get_beard                                              = 0xAC2,
	face_keys_set_beard                                              = 0xAC3,
	face_keys_get_face_texture                                       = 0xAC4,
	face_keys_set_face_texture                                       = 0xAC5,
	face_keys_get_hair_texture                                       = 0xAC6,
	face_keys_set_hair_texture                                       = 0xAC7,
	face_keys_get_hair_color                                         = 0xAC8,
	face_keys_set_hair_color                                         = 0xAC9,
	face_keys_get_age                                                = 0xACA,
	face_keys_set_age                                                = 0xACB,
	face_keys_get_skin_color                                         = 0xACC,
	face_keys_set_skin_color                                         = 0xACD,
	face_keys_get_morph_key                                          = 0xACE,
	face_keys_set_morph_key                                          = 0xACF 
};

enum mbOpcodeFlags // #29704
{
	this_or_next                                                     = 0x40000000,
	neg                                                              = 0x80000000 
};

enum mbOperandType // #29707
{
	opt_value                                                        = 0x0,
	opt_register                                                     = 0x1,
	opt_global                                                       = 0x2,
	opt_local                                                        = 0x11 
};

enum mbSkinDeformGroup // #31979
{
	sdg_head                                                         = 0x0,
	sdg_body                                                         = 0x1 
};

enum rglMaterialTextureKind // #32266
{
	mtk_diffuse_1                                                    = 0x0,
	mtk_diffuse_2                                                    = 0x1,
	mtk_bump                                                         = 0x2,
	mtk_environment                                                  = 0x3,
	mtk_specular                                                     = 0x4 
};

enum mbObjectUseType // #32465
{
	ut_agent                                                         = 0x1,
	ut_mount                                                         = 0x2,
	ut_dismount                                                      = 0x3,
	ut_container                                                     = 0x5,
	ut_passage                                                       = 0x6,
	ut_item                                                          = 0x7,
	ut_leave                                                         = 0x8,
	ut_use                                                           = 0x9,
	ut_destroy                                                       = 0xA 
};

enum rglTerrainCellFlags // #32477
{
	tcf_is_triangle                                                  = 0x1,
	tcf_is_orientated                                                = 0x2 
};

enum rglShaderFlags // #32480
{
	shf_specular_enable                                              = 0x20,
	shf_static_lighting                                              = 0x80,
	shf_has_reflections                                              = 0x100,
	shf_preshaded                                                    = 0x1000,
	shf_uses_instancing                                              = 0x2000,
	shf_biased                                                       = 0x8000,
	shf_always_fail                                                  = 0x10000,
	shf_special                                                      = 0x20000,
	shf_uses_dot3                                                    = 0x40000,
	shf_uses_hlsl                                                    = 0x20000000,
	shf_uses_normal_map                                              = 0x40000000,
	shf_uses_skinning                                                = 0x80000000 
};

enum mbRiverLayerType // #32493
{
	trt_river_layer                                                  = 0x2,
	trt_expanded_river_layer                                         = 0x4 
};

enum mbGroundType // #32496
{
	ground_gray_stone                                                = 0x0,
	ground_brown_stone                                               = 0x1,
	ground_turf                                                      = 0x2,
	ground_steppe                                                    = 0x3,
	ground_snow                                                      = 0x4,
	ground_earth                                                     = 0x5,
	ground_desert                                                    = 0x6,
	ground_forest                                                    = 0x7,
	ground_pebbles                                                   = 0x8,
	ground_village                                                   = 0x9,
	ground_path                                                      = 0xA 
};

enum mbTerrainLayerType // #32508
{
	tlt_rock                                                         = 0x0,
	tlt_earth                                                        = 0x1,
	tlt_green                                                        = 0x2,
	tlt_riverbed                                                     = 0x3 
};

enum mbFloraSetType // #32513
{
	fst_trees                                                        = 0x0,
	fst_rocks                                                        = 0x1,
	fst_grass                                                        = 0x2 
};

enum mbTriggerStatus // #32724
{
	ts_check                                                         = 0x0,
	ts_delay                                                         = 0x1,
	ts_rearm                                                         = 0x2 
};

enum rglLightFlags // #32751
{
	lf_ambient                                                       = 0x1,
	lf_no_shadow                                                     = 0x2 
};

enum mbSkyboxFlags // #32754
{
	sf_day                                                           = 0x0,
	sf_dawn                                                          = 0x1,
	sf_night                                                         = 0x2,
	sf_time_mask                                                     = 0x3,
	sf_clouds_0                                                      = 0x0,
	sf_clouds_1                                                      = 0x10,
	sf_clouds_2                                                      = 0x20,
	sf_clouds_3                                                      = 0x30,
	sf_clouds_mask                                                   = 0xF0,
	sf_clouds_shift                                                  = 0x4,
	sf_no_shadows                                                    = 0x10000000,
	sf_hdr                                                           = 0x20000000 
};

enum mbYesNoWindowMode // #32767
{
	ynwm_dialog                                                      = 0x0,
	ynwm_question                                                    = 0x1,
	ynwm_question_2                                                  = 0x2,
	ynwm_text_question                                               = 0x3,
	ynwm_combo_question                                              = 0x4,
	ynwm_simple_text_question_2                                      = 0x5 
};

enum rglResourceType // #32899
{
	rt_resource                                                      = 0x0,
	rt_mesh                                                          = 0x1,
	rt_texture                                                       = 0x2,
	rt_material                                                      = 0x3,
	rt_shader                                                        = 0x4,
	rt_physics_material                                              = 0x5,
	rt_body                                                          = 0x6,
	rt_skeleton_model                                                = 0x7,
	rt_skeleton_animation                                            = 0x8,
	rt_hlsl_technique                                                = 0x9 
};

enum rglCameraPlaneType // #32953
{
	cpt_top                                                          = 0x0,
	cpt_bottom                                                       = 0x1,
	cpt_right                                                        = 0x2,
	cpt_left                                                         = 0x3,
	cpt_far                                                          = 0x4,
	cpt_near                                                         = 0x5 
};

enum rglWidgetTriggerFlags // #33141
{
	wtf_auto_increase                                                = 0x1,
	wtf_auto_decrease                                                = 0x2,
	wtf_close                                                        = 0x4,
	wtf_check_children                                               = 0x8 
};

enum rglTextureFlags // #33410
{
	tf_no_mipmaps                                                    = 0x1,
	tf_max_detail                                                    = 0x2,
	tf_is_normal_map                                                 = 0x4,
	tf_is_multilanguage                                              = 0x8,
	tf_no_hdr                                                        = 0x10,
	tf_hdr                                                           = 0x20,
	tf_is_cubemap                                                    = 0x40,
	tf_no_ondemand                                                   = 0x80,
	tf_clamp_v                                                       = 0x200000,
	tf_ondemand                                                      = 0x10000000,
	tf_restore_ondemand                                              = 0x20000000 
};

enum rglAlphaTestMode // #33892
{
	atm_none                                                         = 0x0,
	atm_1                                                            = 0x1,
	atm_128                                                          = 0x2,
	atm_255                                                          = 0x3 
};

enum rglRasterizerStateType // #33897
{
	rs_none                                                          = 0x0,
	rs_wireframe                                                     = 0x1 
};

enum rglBlendStateType // #33900
{
	bs_none                                                          = 0x0,
	bs_modulate                                                      = 0x1,
	bs_add                                                           = 0x2,
	bs_multiply                                                      = 0x3,
	bs_fill                                                          = 0x4 
};

enum rglDepthStencilStateType // #33906
{
	dss_depth_test_z_write                                           = 0x0,
	dss_zwrite                                                       = 0x1,
	dss_depth_test                                                   = 0x2,
	dss_nothing                                                      = 0x3 
};

enum rglTextureStageType // #33911
{
	tst_reflection                                                   = 0x0,
	tst_environment                                                  = 0x1,
	tst_diffuse_2                                                    = 0x2,
	tst_normal                                                       = 0x3,
	tst_specular                                                     = 0x4,
	tst_depth                                                        = 0x5,
	tst_cubic                                                        = 0x6,
	tst_shadow_map                                                   = 0x7,
	tst_screen                                                       = 0x8,
	tst_mesh                                                         = 0x9,
	tst_clamped                                                      = 0xA,
	tst_font                                                         = 0xB,
	tst_character_shadow                                             = 0xC,
	tst_mesh_no_filter                                               = 0xD,
	tst_diffuse_no_wrap                                              = 0xE,
	tst_grass                                                        = 0xF 
};

enum rglEarlyZEffectHandleType // #33928
{
	ezh_far_clip                                                     = 0x0,
	ezh_alpha_ref                                                    = 0x1,
	ezh_alpha_test_texture                                           = 0x2,
	ezh_view_projection_matrix                                       = 0x3,
	ezh_world_view_projection_matrix                                 = 0x4,
	ezh_bone_matrices_start                                          = 0x5 
};

enum rglPostFxEffectHandleType // #33935
{
	pfxh_dof_focus                                                   = 0x0,
	pfxh_dof_range                                                   = 0x1,
	pfxh_depth_viewport_data                                         = 0x2,
	pfxh_color_value                                                 = 0x3,
	pfxh_gamma                                                       = 0x4,
	pfxh_gamma_inv                                                   = 0x5,
	pfxh_hdr_frame_time                                              = 0x6 
};

enum rglEffectHandleType // #33943
{
	hdht_material_color                                              = 0x0,
	hdht_material_2_color                                            = 0x1,
	hdht_material_power                                              = 0x2,
	hdht_specular_color                                              = 0x3,
	hdht_ambient_color                                               = 0x4,
	hdht_ground_ambient_color                                        = 0x5,
	hdht_output_gamma                                                = 0x6,
	hdht_output_gamma_inverted                                       = 0x7,
	hdht_time_var                                                    = 0x8,
	hdht_fog_density                                                 = 0x9,
	hdht_diffuse_texture                                             = 0xA,
	hdht_diffuse_2_texture                                           = 0xB,
	hdht_specular_texture                                            = 0xC,
	hdht_normal_texture                                              = 0xD,
	hdht_environment_texture                                         = 0xE,
	hdht_shadow_map_texture                                          = 0xF,
	hdht_cubic_texture                                               = 0x10,
	hdht_depth_texture                                               = 0x11,
	hdht_screen_texture                                              = 0x12,
	hdht_use_depth_effects                                           = 0x13,
	hdht_far_clip_inverted                                           = 0x14,
	hdht_depth_viewport_data                                         = 0x15,
	hdht_flora_detail                                                = 0x16,
	hdht_light_indices                                               = 0x17,
	hdht_light_position_direction                                    = 0x18,
	hdht_light_diffuse                                               = 0x19,
	hdht_sky_light_direction                                         = 0x1A,
	hdht_sky_light_color                                             = 0x1B,
	hdht_sun_light_direction                                         = 0x1C,
	hdht_sun_light_color                                             = 0x1D,
	hdht_point_light_color                                           = 0x1E,
	hdht_reflection_factor                                           = 0x1F,
	hdht_shadow_map_next_pixel                                       = 0x20,
	hdht_shadow_map_size                                             = 0x21,
	hdht_light_point_count                                           = 0x22,
	hdht_world_view_projection_matrix                                = 0x23,
	hdht_world_view_matrix                                           = 0x24,
	hdht_view_projection_matrix                                      = 0x25,
	hdht_world_matrix                                                = 0x26,
	hdht_view_matrix                                                 = 0x27,
	hdht_sun_view_projection_matrix                                  = 0x28,
	hdht_water_view_projection_matrix                                = 0x29,
	hdht_water_world_view_projection_matrix                          = 0x2A,
	hdht_camera_position                                             = 0x2B,
	hdht_texture_offset                                              = 0x2C,
	hdht_specular_coefficient                                        = 0x2D,
	hdht_use_motion_blur                                             = 0x2E,
	hdht_motion_blur_matrix                                          = 0x2F,
	hdht_bone_matrices_start                                         = 0x30 
};

enum rglActivePostEffectFlags // #33993
{
	apef_hdr                                                         = 0x1,
	apef_dof                                                         = 0x2,
	apef_fxaa                                                        = 0x4,
	apef_pp                                                          = 0x8 
};

enum rglTechniqueFlags // #34539
{
	htf_hdr                                                          = 0x1 
};

enum rglTechniqueKind // #34541
{
	htk_default                                                      = 0x0,
	htk_shadow                                                       = 0x1,
	htk_shadow_nvidia                                                = 0x2,
	htk_preshaded                                                    = 0x3,
	htk_hdr                                                          = 0x4 
};

enum rglTextureOnDemandState // #35060
{
	tods_none                                                        = 0x0,
	tods_loading                                                     = 0x1,
	tods_loaded                                                      = 0x2 
};

enum rglMeshFlags // #35064
{
	msf_read_tangent                                                 = 0x10000,
	msf_single_uv                                                    = 0x20000,
	msf_gamma_corrected                                              = 0x1000000 
};

enum rglVertexDeclarationType // #35068
{
	vdt_regular                                                      = 0x0,
	vdt_normal_map                                                   = 0x1,
	vdt_skinning                                                     = 0x2,
	vdt_normal_map_skinning                                          = 0x3,
	vdt_special                                                      = 0x4 
};

enum rglRagdollWorldStatus // #35813
{
	rws_dead                                                         = 0x0,
	rws_active                                                       = 0x1,
	rws_inactive                                                     = 0x2 
};

enum rglCollisionGroupFlags // #35818
{
	cgf_none                                                         = 0x1,
	cgf_agent                                                        = 0x4,
	cgf_ai_agent                                                     = 0x8,
	cgf_static_body                                                  = 0x10,
	cgf_terrain                                                      = 0x20,
	cgf_barrier                                                      = 0x40,
	cgf_ai_limiter                                                   = 0x80,
	cgf_unknown                                                      = 0x100,
	cgf_ragdoll                                                      = 0x200,
	cgf_non_collidable                                               = 0x400,
	cgf_horse_agent                                                  = 0x800,
	cgf_ai_horse_agent                                               = 0x1000,
	cgf_dynamic_body                                                 = 0x2000,
	cgf_horse_agent_ragdoll                                          = 0x4000,
	cgf_barrier_3d                                                   = 0x8000,
	cgf_barrier_player                                               = 0x10000,
	cgf_barrier_ai_3d                                                = 0x20000 
};

enum rglTextureType // #36353
{
	tt_image                                                         = 0x0,
	tt_render_target                                                 = 0x1,
	tt_depth_stencil                                                 = 0x2,
	tt_cube_render_target                                            = 0x3 
};

enum rglVertexDeclaration // #36406
{
	vd_regular                                                       = 0x0,
	vd_normal_map                                                    = 0x1,
	vd_skinning                                                      = 0x2,
	vd_normal_map_skinning                                           = 0x3,
	vd_regular_instanced                                             = 0x4,
	vd_normal_map_instanced                                          = 0x5 
};

enum rglShaderRequirementFlags // #37893
{
	shrf_lo_quality                                                  = 0x1000,
	shrf_mid_quality                                                 = 0x2000,
	shrf_hi_quality                                                  = 0x4000 
};

enum rglSkeletonModelBodyFlags // #38005
{
	smbf_for_ragdoll_only                                            = 0x1,
	smbf_for_collision_only                                          = 0x2 
};

enum rglWidgetTooltipState // #38295
{
	wts_closed                                                       = 0x0,
	wts_opening                                                      = 0x1,
	wts_open                                                         = 0x2 
};

enum WSEOperationType // #39613
{
	Operation                                                        = 0x0,
	LhsOperation                                                     = 0x1,
	CfOperation                                                      = 0x2,
	NoOperation                                                      = 0x3 
};

enum WSEOGPServerState // #39635
{
	Inactive                                                         = 0x0,
	Starting                                                         = 0x1,
	Listening                                                        = 0x2,
	Stopping                                                         = 0x3 
};

enum WSEOperationFlags // #39661
{
	Lhs                                                              = 0x1,
	Cf                                                               = 0x2 
};

enum rglVertexBufferFlags // #39883
{
	vbf_has_normal                                                   = 0x1,
	vbf_has_color                                                    = 0x2,
	vbf_has_uv                                                       = 0x10,
	vbf_has_specular_color                                           = 0x40,
	vbf_has_tangents                                                 = 0x100,
	vbf_has_skin_data                                                = 0x1000,
	vbf_has_position                                                 = 0x1000000 
};

enum mbnetServerListType // #39936
{
	slt_internet                                                     = 0x0,
	slt_lan                                                          = 0x1,
	slt_favorites                                                    = 0x2 
};

enum WSERCONServerState // #39943
{
	RCONInactive                                                     = 0x0,
	RCONStarting                                                     = 0x1,
	RCONListening                                                    = 0x2,
	RCONStopping                                                     = 0x3 
};


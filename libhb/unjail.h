/*
*
*        _       _________ ______            _______  _______  _______  ______   _______  _______
*       ( \      \__   __/(  ___ \ |\     /|(  ___  )(       )(  ____ \(  ___ \ (  ____ )(  ____ \|\     /|
*       | (         ) (   | (   ) )| )   ( || (   ) || () () || (    \/| (   ) )| (    )|| (    \/| )   ( |
*       | |         | |   | (__/ / | (___) || |   | || || || || (__    | (__/ / | (____)|| (__    | | _ | |
*       | |         | |   |  __ (  |  ___  || |   | || |(_)| ||  __)   |  __ (  |     __)|  __)   | |( )| |
*       | |         | |   | (  \ \ | (   ) || |   | || |   | || (      | (  \ \ | (\ (   | (      | || || |
*       | (____/\___) (___| )___) )| )   ( || (___) || )   ( || (____/\| )___) )| ) \ \__| (____/\| () () |
*       (_______/\_______/|/ \___/ |/     \|(_______)|/     \|(_______/|/ \___/ |/   \__/(_______/(_______)
*
*
*
*/

#pragma once

#include <_types.h>
#include "lv2.h"

struct kpayload_args { uint64_t user_arg; };

struct kdump_args { uint64_t argArrayPtr; };

// Unjail patches for all FWs.
void *unjail(struct thread *td);

// Enable SUDO mode.
void *enableSUDO(struct thread *td);

// Disable SUDO mode.
void *disableSUDO(struct thread *td);

// Disable Process ASLR.
void *disableProcessASLR(struct thread *td);

// Enable Browser.
void *enableBrowser(struct thread *td);
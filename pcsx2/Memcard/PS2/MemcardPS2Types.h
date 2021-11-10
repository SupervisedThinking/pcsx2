
#pragma once

enum class MemcardPS2Mode
{
	NOT_SET = 0xff,
	UNKNOWN_BOOT_PROBE = 0x11,
	UNKNOWN_WRITE_DELETE = 0x12,
	SET_SECTOR_ERASE = 0x21,
	SET_SECTOR_WRITE = 0x22,
	SET_SECTOR_READ = 0x23,
	GET_SPECS = 0x26,
	SET_TERMINATOR = 0x27,
	GET_TERMINATOR = 0x28,
	UNKNOWN_COPY_DELETE = 0x81,
	UNKNOWN_BOOT = 0xbf,
	AUTH = 0xf0,
	UNKNOWN_RESET = 0xf3,
	UNKNOWN_NO_IDEA = 0xf7,
};
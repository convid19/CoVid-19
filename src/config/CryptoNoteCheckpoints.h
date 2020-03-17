// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = 
    {
    {0, "38a31da57c00042169a1c0202fe6de46dfac2c5208b424b73fd956881f765a03"},
	{1, "cac38081cae059910fce24298ae76ee2d65fba932707517202d15613f88a5c37"},
	{2, "60e793906a3318a691f4e509ec91767ff2fe627f150737dd7affc53e552fb8bb"},
	{3, "f52f36267a0cbaace19d7c46d8bcb606dcdc0c3e5e27dd2662b28aadab061909"},
	{4, "52a69d5d92fdf3c9193d7f44cb42350fb8baa5a6ff6917abc4cb0ae91c5e1a3d"},
	{5, "d3fcd9f2191207f914a2892a3c588375563644c776191db3513a1caa401f4363"},
	{6, "6a2f25fc715cf04c11814f34271269a44e0a6355c58e3ea3d8c823c4da1aed34"},
	{7, "800ffcc0febdc73203db3867356e6503088a36db1578571cb6b96121db197ce3"},
	{8, "01e98d2afb41cdd4f106526e904b2d2ef5d0091e4befa2a20731b0ebe0fa09a1"},
	{9, "5023a5bf607265679d79f9c7ee87d87fe4e147100e4c55e86a18a42c28c5c354"},
	{14, "91132bb184ad7a29eccebe409f1d36756a76835364be3d2299e4289a7fea37d1"},
	{49, "9fba18fa462bd23ba1064ae8bf558ea01aa8f80884a911b057a81c0fb79fcfc9"},
	{99, "6b479019e177090bcb52b1986435b118674b347bee724b899c31fc2be4da5f15"},
	{249, "46a8defbdc73bff1a7481dbbf5ef0482cb628d0d25e6d6ae3c4b9a87e91fe64d"},
	{499, "f2bed0e2e25e1809ee856b47c61e1c7bb66403cce2255e030c70fd489af7e385"},
	{999, "12a98b997af7b05412b9434480e122fefde29b6ce1aa0a645ae70575d16129af"},
	{1499, "7aa49d3b00f68550e86456afea1296a933aac98af0da729d6ab22164bcfd2165"},
	{1999, "ce0f7057b73afce1a59c5a0158e0f46f04b3f2e7b0cce0397c62d7db5ccc67cd"},
	{2499, "ee1262455ae0b9067b6efe0751c136462527eddca066fe93a1dd20ef8f216199"},
	{2999, "7325f7f07f4f177d2a4095326afad05d1c4ce088d564b341d72de1f57cd273fd"},
       };
} // namespace CryptoNote

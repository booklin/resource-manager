# coding: utf-8
#
# © 2021 Qualcomm Innovation Center, Inc. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

import SCons.Script
import configure
import os

env_vars = {
    'PATH': os.environ['PATH'],
    'LLVM': os.environ['LLVM'],
    'LOCAL_SYSROOT': os.environ['LOCAL_SYSROOT'],
}

env = Environment(tools={}, SCANNERS=[], BUILDERS={}, ENV=env_vars)
configure.SConsBuild(env, Builder, Action, arguments=SCons.Script.ARGUMENTS)()

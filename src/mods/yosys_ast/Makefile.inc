
CXXFLAGS += -I $(SYNLIG_SRC)/mods/yosys_ast

SYNLIG_OBJS += mods/yosys_ast/synlig_const2ast.o
SYNLIG_OBJS += mods/yosys_ast/synlig_edif.o
SYNLIG_OBJS += mods/yosys_ast/synlig_simplify.o
SYNLIG_OBJS += mods/yosys_ast/synlig_ilang.o

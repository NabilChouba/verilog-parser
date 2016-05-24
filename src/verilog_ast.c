/*!
@file verilog_ast.c
@brief Contains definitions of functions which 
       operate on the Verilog Abstract Syntax Tree (AST)
*/

#include "stdio.h"
#include "verilog_ast.h"

/*!
@brief Creates a new empty ast_node and returns it.
*/
ast_node ast_node_new()
{
    ast_node tr;

    tr.type         = NONE;
    tr.parent       = NULL;
    tr.children     = NULL;
    tr.child_count  = 0;
    
    return tr;
}

/*!
@brief Creates and returns a new node for the tree which contains a
       single simple identifier.
*/
ast_node ast_new_identifier_node(char * identifier)
{
    ast_node tr = ast_node_new();

    tr.type         = IDENTIFIER;
    tr.value.string = identifier;

    return tr;
}

/*!
@brief Creates a new module description node.
*/
ast_node ast_new_module_node(char     * identifier,
                             ast_node * parameter_list,
                             ast_node * port_list,
                             ast_node * module_items)
{
    ast_node tr = ast_node_new();

    tr.type = MODULE;

    //
    // Code for parsing ports, parameters and items into the proper
    // data structures goes here.
    //

    return tr;
}

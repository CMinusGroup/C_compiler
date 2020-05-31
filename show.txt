program   <@1>
| translation_unit   <@1>
| | external_declaration   <@1>
| | | function_definition   <@1>
| | | | declaration_specifiers   <@1>
| | | | | type_specifier   <@1>
| | | | | | INT:int
| | | | declarator   <@1>
| | | | | direct_declarator   <@1>
| | | | | | direct_declarator   <@1>
| | | | | | | IDENTIFIER:main
| | | | | | (   <@1>
| | | | | | )   <@1>
| | | | compound_statement   <@1>
| | | | | {   <@1>
| | | | | block_item_list   <@2>
| | | | | | block_item_list   <@2>
| | | | | | | block_item_list   <@2>
| | | | | | | | block_item_list   <@2>
| | | | | | | | | block_item   <@2>
| | | | | | | | | | declaration   <@2>
| | | | | | | | | | | declaration_specifiers   <@2>
| | | | | | | | | | | | type_specifier   <@2>
| | | | | | | | | | | | | INT:int
| | | | | | | | | | | init_declarator_list   <@2>
| | | | | | | | | | | | init_declarator   <@2>
| | | | | | | | | | | | | declarator   <@2>
| | | | | | | | | | | | | | direct_declarator   <@2>
| | | | | | | | | | | | | | | IDENTIFIER:i
| | | | | | | | | | | | | =   <@2>
| | | | | | | | | | | | | initializer   <@2>
| | | | | | | | | | | | | | assignment_expression   <@2>
| | | | | | | | | | | | | | | conditional_expression   <@2>
| | | | | | | | | | | | | | | | logical_or_expression   <@2>
| | | | | | | | | | | | | | | | | logical_and_expression   <@2>
| | | | | | | | | | | | | | | | | | inclusive_or_expression   <@2>
| | | | | | | | | | | | | | | | | | | exclusive_or_expression   <@2>
| | | | | | | | | | | | | | | | | | | | and_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | equality_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | relational_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | shift_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | additive_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | multiplicative_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | | cast_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | | | unary_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | postfix_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | primary_expression   <@2>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | CONSTANT_INT:0 
| | | | | | | | | | | ;   <@2>
| | | | | | | | block_item   <@3>
| | | | | | | | | declaration   <@3>
| | | | | | | | | | declaration_specifiers   <@3>
| | | | | | | | | | | type_specifier   <@3>
| | | | | | | | | | | | INT:int
| | | | | | | | | | init_declarator_list   <@3>
| | | | | | | | | | | init_declarator   <@3>
| | | | | | | | | | | | declarator   <@3>
| | | | | | | | | | | | | direct_declarator   <@3>
| | | | | | | | | | | | | | IDENTIFIER:b
| | | | | | | | | | | | =   <@3>
| | | | | | | | | | | | initializer   <@3>
| | | | | | | | | | | | | assignment_expression   <@3>
| | | | | | | | | | | | | | conditional_expression   <@3>
| | | | | | | | | | | | | | | logical_or_expression   <@3>
| | | | | | | | | | | | | | | | logical_and_expression   <@3>
| | | | | | | | | | | | | | | | | inclusive_or_expression   <@3>
| | | | | | | | | | | | | | | | | | exclusive_or_expression   <@3>
| | | | | | | | | | | | | | | | | | | and_expression   <@3>
| | | | | | | | | | | | | | | | | | | | equality_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | relational_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | shift_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | additive_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | multiplicative_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | | cast_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | | | unary_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | | | | postfix_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | primary_expression   <@3>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | CONSTANT_INT:0 
| | | | | | | | | | ;   <@3>
| | | | | | | block_item   <@4>
| | | | | | | | statement   <@4>
| | | | | | | | | print_statement   <@4>
| | | | | | | | | | println   <@4>
| | | | | | | | | | (   <@4>
| | | | | | | | | | STRING_LITERAL:"hello,%d"
| | | | | | | | | | ,   <@4>
| | | | | | | | | | expression   <@4>
| | | | | | | | | | | assignment_expression   <@4>
| | | | | | | | | | | | conditional_expression   <@4>
| | | | | | | | | | | | | logical_or_expression   <@4>
| | | | | | | | | | | | | | logical_and_expression   <@4>
| | | | | | | | | | | | | | | inclusive_or_expression   <@4>
| | | | | | | | | | | | | | | | exclusive_or_expression   <@4>
| | | | | | | | | | | | | | | | | and_expression   <@4>
| | | | | | | | | | | | | | | | | | equality_expression   <@4>
| | | | | | | | | | | | | | | | | | | relational_expression   <@4>
| | | | | | | | | | | | | | | | | | | | shift_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | additive_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | additive_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | multiplicative_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | cast_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | unary_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | | postfix_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | | | primary_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | | | | IDENTIFIER:i
| | | | | | | | | | | | | | | | | | | | | | +   <@4>
| | | | | | | | | | | | | | | | | | | | | | multiplicative_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | cast_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | unary_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | postfix_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | | primary_expression   <@4>
| | | | | | | | | | | | | | | | | | | | | | | | | | | IDENTIFIER:b
| | | | | | | | | | )   <@4>
| | | | | | | | | | ;   <@4>
| | | | | | block_item   <@5>
| | | | | | | statement   <@5>
| | | | | | | | jump_statement   <@5>
| | | | | | | | | RETURN   <@5>
| | | | | | | | | expression   <@5>
| | | | | | | | | | assignment_expression   <@5>
| | | | | | | | | | | conditional_expression   <@5>
| | | | | | | | | | | | logical_or_expression   <@5>
| | | | | | | | | | | | | logical_and_expression   <@5>
| | | | | | | | | | | | | | inclusive_or_expression   <@5>
| | | | | | | | | | | | | | | exclusive_or_expression   <@5>
| | | | | | | | | | | | | | | | and_expression   <@5>
| | | | | | | | | | | | | | | | | equality_expression   <@5>
| | | | | | | | | | | | | | | | | | relational_expression   <@5>
| | | | | | | | | | | | | | | | | | | shift_expression   <@5>
| | | | | | | | | | | | | | | | | | | | additive_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | multiplicative_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | | cast_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | | | unary_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | | | | postfix_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | | | | | primary_expression   <@5>
| | | | | | | | | | | | | | | | | | | | | | | | | | CONSTANT_INT:0 
| | | | | | | | | ;   <@5>
| | | | | }   <@6>
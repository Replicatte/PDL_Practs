/*****************************************************************************/
/**  Ejemplo de BISON-I: S E M - 2          2018-2019 <jbenedi@dsic.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "asin.h"
%}
/*----------------------------------------------------------------------
  Dado que las funciones "input()" y "unput(c)" son costosas y no las
  utilizaremos, evitaremos que se generen automaticamente sus rutinas
  correspondientes desactivandolas mediante las siguientes opciones:
----------------------------------------------------------------------*/
%option noinput
%option nounput
/*----------------------------------------------------------------------
  Para mantener el numero de linea actual en la variable global yylineno
----------------------------------------------------------------------*/
%option yylineno

delimitador     [ \t\n]+
digito          [0-9]
letra			[a-zA-Z]
constante		{digito}*(\.{digito}*)?
comentario		\/\/.*
id				{letra}({digito}|_|{letra})*

%%


{delimitador}   {ECHO;                 }
"print"			{ECHO; return (PRINT_);		}
"int"			{ECHO; return (INT_);	   }
"bool"			{ECHO; return (BOOL_);		}
"read"			{ECHO; return (READ_);		}
"true"			{ECHO; return (TRUE_);		}
"TRUE"			{ECHO; return (TRUE_);		}
"True"			{ECHO; return (TRUE_);		}
"false"			{ECHO; return (FALSE_);	}
"FALSE"			{ECHO; return (FALSE_);	}
"False"			{ECHO; return (FALSE_);	}
"if"			{ECHO; return (IF_);		}
"else"			{ECHO; return (ELSE_);		}
"for"			{ECHO; return (FOR_);		}
"+"             {ECHO; return(MAS_);   }
"-"             {ECHO; return(MENOS_); }
"*"             {ECHO; return(POR_);   }
"/"             {ECHO; return(DIV_);   }
"("             {ECHO; return(PARA_);  }
")"             {ECHO; return(PARC_);  }
"=="            {ECHO; return(IGUAL_);      }
"!="            {ECHO; return(NOIGUAL_);   }
"+="            {ECHO; return(MASIGUAL_);     }
"-="            {ECHO; return(MENOSIGUAL_);   }
"*="            {ECHO; return(PORIGUAL_);     }
"/="            {ECHO; return(DIVIGUAL_);     }
"++"            {ECHO; return(INCREMENTO_); }
"--"            {ECHO; return(DECREMENTO_); }
"&&"            {ECHO; return(AND_);        }
"||"            {ECHO; return(OR_);         }
"<"             {ECHO; return(MENOR_);    }
">"             {ECHO; return(MAYOR_);    }
"<="            {ECHO; return(MENORIG_);  }
">="            {ECHO; return(MAYORIG_);  }
"="             {ECHO; return(ASIG_);        }
"%"             {ECHO; return(MODULO_);        }
"!"             {ECHO; return(NO_);        }
"{"             {ECHO; return(LLAVEA_);       }
"}"             {ECHO; return(LLAVEC_);       }
"["             {ECHO; return(CORCHETEA_);    }
"]"             {ECHO; return(CORCHETEC_);    }
";" 			{ECHO; return(PUNTCOMA_); }

{constante}		{ECHO; return(CTE_);   }
{id}			{ECHO; return(ID_);		}
{comentario}	{ECHO; }
.               {yyerror("Caracter desconocido");}
%%

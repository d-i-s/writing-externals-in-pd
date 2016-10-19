/* Marco Matteo Markidis 2016 GPLv3
   mm dot markidis at gmail dot com
   Made while listening:
   Tool -- Lateralus
*/

/* good habit: put your name, the license and useful info */

#include "m_pd.h"
/* include the header: header is the magic place where Miller defines what you 
   need */

static t_class *myexternal_class;
/* define your class after the preprocessor directives */

typedef struct _myexternal
{
  t_object x_obj;
} t_myexternal;
/* data space: the first entry must be t_object myobject */

void myexternal_bang(t_myexternal *x)
{
  post("your code somewhere");
}
/* this is your bang manipulator; when myexternal receives a message it checks 
   for the corresponding selector. in this case, if you send a 'bang' message
   myexternal checks in your class the bang method */

void myexternal_free(t_myexternal *x)
{
  /* nothing to do */
}
/* this is myexternal class destructor. myexternal calls it when you close Pd 
   or the patch or remove the object. usually it frees dinamically allocated 
   memory. */

void *myexternal_new()
{
  t_myexternal *x = (t_myexternal *)pd_new(myexternal_class);
  return (void *)x;
}
/* this is myexternal class constructor. myexternal calls it from 
   myexternal_setup. usually you allocate your memory here and 
   initializes variables. */

void myexternal_setup()
{
  myexternal_class = class_new(gensym("myexternal"),
			       (t_newmethod)myexternal_new,
			       (t_method)myexternal_free,
			       sizeof(t_myexternal),CLASS_DEFAULT,0);
  /* class_new initializes your class. you should provide the symbolic name of 
     your object as argument of a gensym, the constructor (with a t_newmethod 
     cast), the destructor (t_method cast), the size of your data space, the 
     graphic representation (CLASS_DEFAULT: one inlet, no outlet). 
     the last argument of class_new must be a 0. */
  class_addbang(myexternal_class,myexternal_bang);
  /* you have to bind your class with your a pair of selector+method. in this 
     case, the selector is bang, the method is myexternal_bang. */
  /* class_addbang is a wrapper to a generale class_addmethod */
}
/* when you type in a box myexternal Pd calls this setup. the setup routine 
   defines the class, i.e. the template for creating objs. it provides usually
   initial values for state, i.e. your data space, and implementations of 
   behavior, i.e. your manipulator function. in Pd it provides even the 
   graphical interface and the message passing response of your object, i.e. 
   what methods are associated to selectors. */

#ifndef		HYPODERMIC_HELPERS_H_
# define	HYPODERMIC_HELPERS_H_


# ifndef		HYPODERMIC_NO_HELPERS

#  include <Hypodermic/Func.h>
#  include <Hypodermic/IComponentContext.h>

#  define		CREATE(TResult, Expr)\
				Hypodermic::Func< Hypodermic::IComponentContext*, TResult >(\
					[](Hypodermic::IComponentContext* c) -> TResult\
					{\
						return (Expr);\
					})

#  define		INJECT(Dependency)  (c->resolve< Dependency >())

#  define		INJECT_ALL(Dependency)  (c->resolveAll< Dependency >())

# endif /* !HYPODERMIC_NO_HELPERS */


#endif /* !HYPODERMIC_HELPERS_H_ */
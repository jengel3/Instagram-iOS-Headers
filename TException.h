
#import <CoreFoundation/NSException.h>

@interface TException : NSException
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
+(id)exceptionWithName:(id)arg1 reason:(id)arg2 error:(id)arg3 ;
+(id)exceptionWithName:(id)arg1 ;
-(id)description;
@end


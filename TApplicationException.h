
#import <Instagram/TException.h>

@interface TApplicationException : TException {

	int mType;

}
+(id)exceptionWithType:(int)arg1 reason:(id)arg2 ;
+(id)read:(id)arg1 ;
-(id)initWithType:(int)arg1 reason:(id)arg2 ;
-(void)write:(id)arg1 ;
@end


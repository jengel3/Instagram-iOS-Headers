
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGDirectShareRecipient : NSObject <NSCoding> {

	NSString* _threadID;
	NSArray* _users;

}

@property (nonatomic,readonly) NSString * threadID;              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) NSArray * users;                  //@synthesize users=_users - In the implementation block
+(id)recipientWithThreadID:(id)arg1 andUsers:(id)arg2 ;
-(id)initWithThreadID:(id)arg1 andUsers:(id)arg2 ;
-(id)usersFromThreadID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)threadID;
-(NSArray *)users;
@end



#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface IGDirectShareRecipient : NSObject <NSCoding> {

	NSArray* _users;
	NSString* _displayText;
	unsigned _recipientType;
	NSString* _threadID;
	NSString* _userComparisonKey;

}

@property (nonatomic,retain) NSArray * users;                         //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * displayText;                    //@synthesize displayText=_displayText - In the implementation block
@property (assign,nonatomic) unsigned recipientType;                  //@synthesize recipientType=_recipientType - In the implementation block
@property (nonatomic,copy) NSString * threadID;                       //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy) NSString * userComparisonKey;              //@synthesize userComparisonKey=_userComparisonKey - In the implementation block
+(id)recipientWithUsers:(id)arg1 ;
+(id)recipientWithThread:(id)arg1 ;
+(id)userComparisonKeyForUsers:(id)arg1 ;
+(unsigned)recipientTypeFromThreadType:(int)arg1 ;
+(id)recipientWithPublicThread:(id)arg1 ;
-(unsigned)recipientType;
-(NSString *)userComparisonKey;
-(void)setThreadID:(NSString *)arg1 ;
-(void)setRecipientType:(unsigned)arg1 ;
-(void)setUserComparisonKey:(NSString *)arg1 ;
-(char)hasSameUsersAsRecipient:(id)arg1 ;
-(char)isGroupThread;
-(char)isPublicThread;
-(NSString *)displayText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)threadID;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end


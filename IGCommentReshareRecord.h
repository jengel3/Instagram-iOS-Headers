

@class NSArray, NSString;

@interface IGCommentReshareRecord : NSObject {

	NSArray* _usernames;
	NSString* _threadID;

}

@property (nonatomic,readonly) NSArray * usernames;              //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,readonly) NSString * threadID;              //@synthesize threadID=_threadID - In the implementation block
-(id)diffIdentifier;
-(NSArray *)usernames;
-(id)initWithUsernames:(id)arg1 threadID:(id)arg2 ;
-(NSString *)threadID;
@end


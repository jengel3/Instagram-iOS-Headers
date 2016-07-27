
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGFBUserInfo : NSObject <IGDKDiffable> {

	char _isInvited;
	NSString* _fbID;
	NSString* _fullName;
	NSString* _profilePictureURL;

}

@property (nonatomic,copy,readonly) NSString * fbID;                           //@synthesize fbID=_fbID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                       //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePictureURL;              //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (assign,nonatomic) char isInvited;                                   //@synthesize isInvited=_isInvited - In the implementation block
-(id)diffIdentifier;
-(NSString *)fbID;
-(id)initWithFBID:(id)arg1 fullName:(id)arg2 profilePictureURL:(id)arg3 isInvited:(char)arg4 ;
-(char)isInvited;
-(void)setIsInvited:(char)arg1 ;
-(NSString *)profilePictureURL;
-(NSString *)fullName;
@end


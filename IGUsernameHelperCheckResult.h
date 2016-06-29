

@class NSString;

@interface IGUsernameHelperCheckResult : NSObject {

	char _isValid;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) char isValid;                   //@synthesize isValid=_isValid - In the implementation block
-(char)isValid;
-(void)setIsValid:(char)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end




@class NSString;

@interface IGDeviceBasedLoginAccount : NSObject {

	NSString* _userPK;
	NSString* _username;
	NSString* _profilePictureURL;

}

@property (nonatomic,copy,readonly) NSString * userPK;                         //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePictureURL;              //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
-(NSString *)userPK;
-(NSString *)profilePictureURL;
-(id)initWithUserPK:(id)arg1 username:(id)arg2 profilePictureURL:(id)arg3 ;
-(NSString *)username;
@end


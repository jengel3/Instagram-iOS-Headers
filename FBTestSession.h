
#import <Instagram/FBSession.h>

@class NSString;

@interface FBTestSession : FBSession {

	char _forceAccessTokenRefresh;
	char _disableReauthorize;
	NSString* _appAccessToken;
	NSString* _testUserID;
	NSString* _testUserName;
	NSString* _testAppID;
	NSString* _testAppSecret;
	NSString* _machineUniqueUserTag;
	NSString* _sessionUniqueUserTag;
	int _mode;
	NSString* _testAppClientToken;

}

@property (copy) NSString * appAccessToken;                                 //@synthesize appAccessToken=_appAccessToken - In the implementation block
@property (copy) NSString * testUserID;                                     //@synthesize testUserID=_testUserID - In the implementation block
@property (copy) NSString * testUserName;                                   //@synthesize testUserName=_testUserName - In the implementation block
@property (copy) NSString * testAppID;                                      //@synthesize testAppID=_testAppID - In the implementation block
@property (copy) NSString * testAppSecret;                                  //@synthesize testAppSecret=_testAppSecret - In the implementation block
@property (assign) char disableReauthorize;                                 //@synthesize disableReauthorize=_disableReauthorize - In the implementation block
@property (copy) NSString * machineUniqueUserTag;                           //@synthesize machineUniqueUserTag=_machineUniqueUserTag - In the implementation block
@property (copy) NSString * sessionUniqueUserTag;                           //@synthesize sessionUniqueUserTag=_sessionUniqueUserTag - In the implementation block
@property (copy,readonly) NSString * permissionsString; 
@property (copy,readonly) NSString * sharedTestUserIdentifier; 
@property (assign) int mode;                                                //@synthesize mode=_mode - In the implementation block
@property (assign) char forceAccessTokenRefresh; 
@property (copy) NSString * testAppClientToken;                             //@synthesize testAppClientToken=_testAppClientToken - In the implementation block
+(void)deleteUnitTestUser:(id)arg1 accessToken:(id)arg2 ;
+(id)sessionForUnitTestingWithPermissions:(id)arg1 mode:(int)arg2 sessionUniqueUserTag:(id)arg3 ;
+(id)sessionWithSharedUserWithPermissions:(id)arg1 uniqueUserTag:(id)arg2 ;
+(id)sessionWithSharedUserWithPermissions:(id)arg1 ;
+(id)sessionWithPrivateUserWithPermissions:(id)arg1 ;
-(char)transitionToState:(int)arg1 withAccessTokenData:(id)arg2 shouldCache:(char)arg3 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(int)arg2 defaultAudience:(int)arg3 isReauthorize:(char)arg4 ;
-(char)shouldExtendAccessToken;
-(void)setTestAppID:(NSString *)arg1 ;
-(void)setTestAppSecret:(NSString *)arg1 ;
-(void)setTestAppClientToken:(NSString *)arg1 ;
-(void)setMachineUniqueUserTag:(NSString *)arg1 ;
-(void)setSessionUniqueUserTag:(NSString *)arg1 ;
-(void)setAppAccessToken:(NSString *)arg1 ;
-(NSString *)permissionsString;
-(NSString *)appAccessToken;
-(NSString *)sharedTestUserIdentifier;
-(void)setTestUserID:(NSString *)arg1 ;
-(void)setTestUserName:(NSString *)arg1 ;
-(void)transitionToOpenWithToken:(id)arg1 ;
-(void)raiseException:(id)arg1 ;
-(void)populateTestUsers:(id)arg1 testAccounts:(id)arg2 ;
-(void)findOrCreateSharedUser;
-(NSString *)machineUniqueUserTag;
-(NSString *)sessionUniqueUserTag;
-(id)validNameStringFromInteger:(unsigned)arg1 ;
-(void)createNewTestUser;
-(NSString *)testUserID;
-(char)disableReauthorize;
-(void)retrieveTestUsersForApp;
-(char)forceAccessTokenRefresh;
-(void)setForceAccessTokenRefresh:(char)arg1 ;
-(id)initWithAppID:(id)arg1 appSecret:(id)arg2 clientToken:(id)arg3 machineUniqueUserTag:(id)arg4 sessionUniqueUserTag:(id)arg5 mode:(int)arg6 permissions:(id)arg7 tokenCachingStrategy:(id)arg8 ;
-(NSString *)testUserName;
-(NSString *)testAppID;
-(NSString *)testAppSecret;
-(void)setDisableReauthorize:(char)arg1 ;
-(NSString *)testAppClientToken;
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end


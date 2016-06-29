

@class NSString, IGAuthenticatedUser;

@interface IGAuthService : NSObject {

	NSString* _uniqueID;
	IGAuthenticatedUser* _currentUser;
	unsigned _numLoginAttempts;

}

@property (nonatomic,retain) IGAuthenticatedUser * currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
@property (assign,nonatomic) unsigned numLoginAttempts;                      //@synthesize numLoginAttempts=_numLoginAttempts - In the implementation block
@property (nonatomic,readonly) NSString * uniqueID;                          //@synthesize uniqueID=_uniqueID - In the implementation block
+(id)sharedAuthService;
+(char)cookieIsMIDCookie:(id)arg1 ;
-(id)cookieWithName:(id)arg1 ;
-(id)sessionCookieString;
-(id)cookieWithName:(id)arg1 value:(id)arg2 ;
-(void)syncCurrentCookiesForUserPk:(id)arg1 ;
-(void)unarchiveCurrentUser;
-(char)cookiesAreValidForUserPK:(id)arg1 ;
-(void)logInWithDictionary:(id)arg1 ;
-(void)archiveCurrentUser;
-(unsigned)numLoginAttempts;
-(void)setNumLoginAttempts:(unsigned)arg1 ;
-(void)loginWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)handleLoginForResponse:(id)arg1 ;
-(void)restoreCurrentUser;
-(void)logInWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logInWithUserID:(id)arg1 nonce:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logInWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 verificationCode:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logInWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logOutWithCompletionHandler:(/*^block*/id)arg1 ssoEnabled:(char)arg2 ;
-(void)setCurrentUser:(IGAuthenticatedUser *)arg1 ;
-(id)init;
-(NSString *)uniqueID;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(IGAuthenticatedUser *)currentUser;
-(void)clearCookies;
-(id)cookies;
@end


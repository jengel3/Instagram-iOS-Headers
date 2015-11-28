

@class NSString, NSSet, NSError, NSDate;

@interface FBSDKLoginCompletionParameters : NSObject {

	char _systemAccount;
	NSString* _accessTokenString;
	NSSet* _permissions;
	NSSet* _declinedPermissions;
	NSString* _appID;
	NSString* _userID;
	NSError* _error;
	NSDate* _expirationDate;
	NSString* _challenge;

}

@property (nonatomic,copy) NSString * accessTokenString;                             //@synthesize accessTokenString=_accessTokenString - In the implementation block
@property (nonatomic,copy) NSSet * permissions;                                      //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSSet * declinedPermissions;                              //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy) NSString * appID;                                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * userID;                                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (assign,getter=isSystemAccount,nonatomic) char systemAccount;              //@synthesize systemAccount=_systemAccount - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * challenge;                                     //@synthesize challenge=_challenge - In the implementation block
-(NSSet *)declinedPermissions;
-(NSString *)accessTokenString;
-(void)setAccessTokenString:(NSString *)arg1 ;
-(void)setDeclinedPermissions:(NSSet *)arg1 ;
-(char)isSystemAccount;
-(void)setSystemAccount:(char)arg1 ;
-(NSError *)error;
-(id)init;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSSet *)permissions;
-(void)setPermissions:(NSSet *)arg1 ;
-(NSString *)appID;
@end



#import <Instagram/FBLoginDialogDelegate.h>

@class NSString, NSMutableArray, NSArray, FBAccessTokenData, FBSessionTokenCachingStrategy, NSDate, FBLoginDialog, NSThread, FBSessionAppEventsState, FBSessionAuthLogger;

@interface FBSession : NSObject <FBLoginDialogDelegate> {

	NSString* _urlSchemeSuffix;
	char _isInStateTransition;
	int _loginTypeOfPendingOpenUrlCallback;
	int _defaultDefaultAudience;
	int _loginBehavior;
	NSMutableArray* _declinedPermissions;
	NSArray* _requestedReauthPermissions;
	char _isRepairing;
	int _state;
	NSString* _appID;
	FBAccessTokenData* _accessTokenData;
	NSArray* _initializedPermissions;
	int _lastRequestedSystemAudience;
	FBSessionTokenCachingStrategy* _tokenCachingStrategy;
	NSDate* _attemptedRefreshDate;
	NSDate* _attemptedPermissionsRefreshDate;
	/*^block*/id _loginHandler;
	/*^block*/id _reauthorizeHandler;
	FBLoginDialog* _loginDialog;
	NSThread* _affinitizedThread;
	FBSessionAppEventsState* _appEventsState;
	FBSessionAuthLogger* _authLogger;

}

@property (readonly) char isOpen; 
@property (assign) int state;                                                         //@synthesize state=_state - In the implementation block
@property (copy) NSString * appID;                                                    //@synthesize appID=_appID - In the implementation block
@property (copy) NSString * urlSchemeSuffix; 
@property (copy,readonly) NSString * accessToken; 
@property (copy,readonly) NSDate * expirationDate; 
@property (copy,readonly) NSArray * permissions; 
@property (readonly) int loginType; 
@property (copy) FBAccessTokenData * accessTokenData;                                 //@synthesize accessTokenData=_accessTokenData - In the implementation block
@property (copy,readonly) NSArray * declinedPermissions; 
@property (copy) NSArray * initializedPermissions;                                    //@synthesize initializedPermissions=_initializedPermissions - In the implementation block
@property (assign) int lastRequestedSystemAudience;                                   //@synthesize lastRequestedSystemAudience=_lastRequestedSystemAudience - In the implementation block
@property (assign) char isRepairing;                                                  //@synthesize isRepairing=_isRepairing - In the implementation block
@property (retain) FBSessionTokenCachingStrategy * tokenCachingStrategy;              //@synthesize tokenCachingStrategy=_tokenCachingStrategy - In the implementation block
@property (copy) NSDate * attemptedRefreshDate;                                       //@synthesize attemptedRefreshDate=_attemptedRefreshDate - In the implementation block
@property (copy) NSDate * attemptedPermissionsRefreshDate;                            //@synthesize attemptedPermissionsRefreshDate=_attemptedPermissionsRefreshDate - In the implementation block
@property (copy) id loginHandler;                                                     //@synthesize loginHandler=_loginHandler - In the implementation block
@property (copy) id reauthorizeHandler;                                               //@synthesize reauthorizeHandler=_reauthorizeHandler - In the implementation block
@property (readonly) NSString * appBaseUrl; 
@property (retain) FBLoginDialog * loginDialog;                                       //@synthesize loginDialog=_loginDialog - In the implementation block
@property (retain) NSThread * affinitizedThread;                                      //@synthesize affinitizedThread=_affinitizedThread - In the implementation block
@property (retain) FBSessionAppEventsState * appEventsState;                          //@synthesize appEventsState=_appEventsState - In the implementation block
@property (retain) FBSessionAuthLogger * authLogger;                                  //@synthesize authLogger=_authLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeSession;
+(id)defaultAppID;
+(id)activeSessionIfExists;
+(id)defaultUrlSchemeSuffix;
+(id)sdkSurfacedErrorForNativeLoginError:(id)arg1 ;
+(char)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(char)arg2 allowSystemAccount:(char)arg3 isRead:(char)arg4 defaultAudience:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
+(char)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(char)arg2 defaultAudience:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
+(char)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(char)arg2 loginBehavior:(int)arg3 isRead:(char)arg4 defaultAudience:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)setActiveSession:(id)arg1 userInfo:(id)arg2 ;
+(void)setDefaultAppID:(id)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(char)openActiveSessionWithAllowLoginUI:(char)arg1 ;
+(char)openActiveSessionWithPermissions:(id)arg1 allowLoginUI:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)openActiveSessionWithPermissions:(id)arg1 loginBehavior:(int)arg2 isRead:(char)arg3 defaultAudience:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
+(char)openActiveSessionWithReadPermissions:(id)arg1 allowLoginUI:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)openActiveSessionWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 allowLoginUI:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)renewSystemCredentials:(/*^block*/id)arg1 ;
+(id)activeSessionIfOpen;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)setActiveSession:(id)arg1 ;
-(char)handleOpenURL:(id)arg1 ;
-(FBAccessTokenData *)accessTokenData;
-(NSString *)urlSchemeSuffix;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 urlSchemeSuffix:(id)arg3 tokenCacheStrategy:(id)arg4 ;
-(void)openWithBehavior:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAppID:(id)arg1 permissions:(id)arg2 defaultAudience:(int)arg3 urlSchemeSuffix:(id)arg4 tokenCacheStrategy:(id)arg5 ;
-(void)closeAndClearTokenInformation;
-(void)handleDidBecomeActive;
-(char)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 raiseExceptionIfInvalidState:(char)arg3 ;
-(void)setAccessTokenData:(FBAccessTokenData *)arg1 ;
-(FBSessionAppEventsState *)appEventsState;
-(void)clearAffinitizedThread;
-(void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3 ;
-(void)fbDialogNotLogin:(char)arg1 ;
-(FBSessionTokenCachingStrategy *)tokenCachingStrategy;
-(char)initializeFromCachedToken:(id)arg1 withPermissions:(id)arg2 ;
-(char)transitionToState:(int)arg1 withAccessTokenData:(id)arg2 shouldCache:(char)arg3 ;
-(NSArray *)initializedPermissions;
-(NSArray *)declinedPermissions;
-(id)refreshDate;
-(void)checkThreadAffinity;
-(id)loginHandler;
-(void)setLoginHandler:(id)arg1 ;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 ;
-(void)transitionAndCallHandlerWithState:(int)arg1 error:(id)arg2 tokenData:(id)arg3 shouldCache:(char)arg4 ;
-(void)authorizeWithPermissions:(id)arg1 behavior:(int)arg2 defaultAudience:(int)arg3 isReauthorize:(char)arg4 ;
-(void)reauthorizeWithPermissions:(id)arg1 isRead:(char)arg2 behavior:(int)arg3 defaultAudience:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestNewReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestNewPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleRefreshPermissions:(id)arg1 ;
-(void)closeAndClearTokenInformation:(id)arg1 ;
-(FBSessionAuthLogger *)authLogger;
-(void)setAuthLogger:(FBSessionAuthLogger *)arg1 ;
-(char)handleAuthorizationOpen:(id)arg1 accessToken:(id)arg2 loginType:(int)arg3 ;
-(char)handleReauthorize:(id)arg1 accessToken:(id)arg2 ;
-(char)handleAuthorizationCallbacks:(id)arg1 params:(id)arg2 loginType:(int)arg3 ;
-(void)authorizeRequestWasImplicitlyCancelled;
-(void)authorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(char)arg3 FBAppAuth:(char)arg4 safariAuth:(char)arg5 fallback:(char)arg6 isReauthorize:(char)arg7 canFetchAppSettings:(char)arg8 ;
-(void)retryableAuthorizeWithPermissions:(id)arg1 defaultAudience:(int)arg2 integratedAuth:(char)arg3 FBAppAuth:(char)arg4 safariAuth:(char)arg5 fallback:(char)arg6 isReauthorize:(char)arg7 canFetchAppSettings:(char)arg8 ;
-(void)setLastRequestedSystemAudience:(int)arg1 ;
-(id)getSystemAccountStoreAdapter;
-(void)logIntegratedAuthAppEvent:(id)arg1 permissions:(id)arg2 ;
-(void)completeReauthorizeWithAccessToken:(id)arg1 expirationDate:(id)arg2 permissions:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)setIsRepairing:(char)arg1 ;
-(void)callReauthorizeHandlerAndClearState:(id)arg1 updateDeclinedPermissions:(char)arg2 ;
-(char)tryOpenURL:(id)arg1 ;
-(NSString *)appBaseUrl;
-(void)setLoginDialog:(FBLoginDialog *)arg1 ;
-(FBLoginDialog *)loginDialog;
-(id)errorLoginFailedWithReason:(id)arg1 errorCode:(id)arg2 innerError:(id)arg3 localizedDescription:(id)arg4 ;
-(id)declinedPermissionsForRequestedPermissions:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
-(void)validateReauthorizedAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(char)isRepairing;
-(id)reauthorizeHandler;
-(void)setReauthorizeHandler:(id)arg1 ;
-(NSDate *)attemptedRefreshDate;
-(void)setAttemptedRefreshDate:(NSDate *)arg1 ;
-(NSDate *)attemptedPermissionsRefreshDate;
-(void)setAttemptedPermissionsRefreshDate:(NSDate *)arg1 ;
-(void)setAffinitizedThread:(NSThread *)arg1 ;
-(NSThread *)affinitizedThread;
-(id)initWithPermissions:(id)arg1 ;
-(void)reauthorizeWithPermissions:(id)arg1 behavior:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reauthorizeWithReadPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reauthorizeWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)openFromAccessTokenData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUrlSchemeSuffix:(NSString *)arg1 ;
-(void)setStateChangeHandler:(/*^block*/id)arg1 ;
-(char)hasGranted:(id)arg1 ;
-(void)setLoginTypeOfPendingOpenUrlCallback:(int)arg1 ;
-(void)handleDidCompleteNativeLoginForAppCall:(id)arg1 ;
-(char)isURLSchemeRegistered;
-(char)authorizeUsingFacebookApplication:(id)arg1 ;
-(char)authorizeUsingSafari:(id)arg1 ;
-(void)authorizeUsingLoginDialog:(id)arg1 ;
-(void)repairWithHandler:(/*^block*/id)arg1 ;
-(void)refreshAccessToken:(id)arg1 expirationDate:(id)arg2 ;
-(char)shouldExtendAccessToken;
-(char)shouldRefreshPermissions;
-(id)jsonClientStateWithDictionary:(id)arg1 ;
-(void)setInitializedPermissions:(NSArray *)arg1 ;
-(int)lastRequestedSystemAudience;
-(void)setTokenCachingStrategy:(FBSessionTokenCachingStrategy *)arg1 ;
-(void)setAppEventsState:(FBSessionAppEventsState *)arg1 ;
-(int)loginType;
-(void)authorizeUsingSystemAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(char)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)close;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)expirationDate;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)accessToken;
-(char)isOpen;
-(NSArray *)permissions;
-(NSString *)appID;
@end


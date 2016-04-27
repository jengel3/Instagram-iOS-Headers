
#import <Instagram/FBSDKSharingDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGGraphQLService, NSString, IGNonCurrentUserDefaults;

@interface IGFacebookHelper : NSObject <FBSDKSharingDelegate, IGServiceHelperProtocol> {

	char _isAskingForAdditionalPermisons;
	IGGraphQLService* _graphQLService;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	unsigned _debugIGFBAccessTokenSource;

}

@property (nonatomic,readonly) IGGraphQLService * graphQLService;                         //@synthesize graphQLService=_graphQLService - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (assign,nonatomic) char isAskingForAdditionalPermisons;                         //@synthesize isAskingForAdditionalPermisons=_isAskingForAdditionalPermisons - In the implementation block
@property (assign,nonatomic) unsigned debugIGFBAccessTokenSource;                         //@synthesize debugIGFBAccessTokenSource=_debugIGFBAccessTokenSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(void)storeAccessToken:(id)arg1 forPk:(id)arg2 ;
+(id)storedTokenKeyForPk:(id)arg1 ;
+(void)clearAccessTokenForPk:(id)arg1 ;
+(id)shortServiceName;
+(id)serviceName;
+(id)sharedHelper;
-(id)currentAccessToken;
-(char)canShare;
-(void)sharer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sharer:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)sharerDidCancel:(id)arg1 ;
-(NSString *)userSessionPK;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(char)isLoggedIn;
-(void)handleAccessTokenChange:(id)arg1 shouldSendCredentials:(char)arg2 error:(id)arg3 ;
-(void)setPageName:(id)arg1 ;
-(IGGraphQLService *)graphQLService;
-(id)sharingInfo;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)shareFeedItem:(id)arg1 fromViewController:(id)arg2 ;
-(char)takeIsAskingForAdditionalPermissions;
-(void)onLoginSuccessful:(id)arg1 ;
-(void)refreshCurrentUserInfoIfExpired;
-(void)restoreSession;
-(void)setDebugIGFBAccessTokenSource:(unsigned)arg1 ;
-(void)accessTokenChanged:(id)arg1 shouldSendCredentials:(char)arg2 error:(id)arg3 ;
-(void)fbDidLoginSendCredentials:(char)arg1 ;
-(void)fbDidNotLogin;
-(void)fetchUserInfoWithFetchStrategy:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendCredentialsToServer:(id)arg1 ;
-(unsigned)debugIGFBAccessTokenSource;
-(void)notifyAuthCompleted;
-(char)hasAuthorizedWallPost;
-(char)isAskingForAdditionalPermisons;
-(void)setIsAskingForAdditionalPermisons:(char)arg1 ;
-(char)hasAuthorizedManagePages;
-(void)setIsAskingForAdditionalPermissions:(char)arg1 ;
-(void)handleAccessTokenChange:(id)arg1 error:(id)arg2 ;
-(char)needsToReauthorize;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(void)clearActiveSession;
-(id)pageName;
-(void)dealloc;
-(id)currentUserInfo;
-(void)logout;
-(char)isConfigured;
-(void)setPageAccessToken:(id)arg1 ;
-(id)pageAccessToken;
@end


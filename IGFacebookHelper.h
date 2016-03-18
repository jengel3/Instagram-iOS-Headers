
#import <Instagram/FBSDKSharingDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGGraphQLService, IGNonCurrentUserDefaults, NSString;

@interface IGFacebookHelper : NSObject <FBSDKSharingDelegate, IGServiceHelperProtocol> {

	char _isAskingForAdditionalPermisons;
	IGGraphQLService* _graphQLService;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,readonly) IGGraphQLService * graphQLService;                         //@synthesize graphQLService=_graphQLService - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (assign,nonatomic) char isAskingForAdditionalPermisons;                         //@synthesize isAskingForAdditionalPermisons=_isAskingForAdditionalPermisons - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(void)storeAccessToken:(id)arg1 forPk:(id)arg2 ;
+(id)storedTokenKeyForPk:(id)arg1 ;
+(void)clearAccessTokenForPk:(id)arg1 ;
+(id)loadAccessTokenWithPk:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(char)canShare;
-(void)shareFeedItem:(id)arg1 fromViewController:(id)arg2 ;
-(id)currentAccessToken;
-(char)isLoggedIn;
-(void)handleAccessTokenChange:(id)arg1 error:(id)arg2 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(void)clearActiveSessionForUserPK:(id)arg1 ;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(char)takeIsAskingForAdditionalPermissions;
-(id)pageName;
-(void)onLoginSuccessful;
-(void)refreshCurrentUserInfoIfExpired;
-(void)restoreSessionForPk:(id)arg1 ;
-(void)handleAccessTokenChange:(id)arg1 shouldSendCredentials:(char)arg2 error:(id)arg3 ;
-(void)accessTokenChanged:(id)arg1 shouldSendCredentials:(char)arg2 error:(id)arg3 ;
-(void)fbDidLoginSendCredentials:(char)arg1 ;
-(void)fbDidNotLogin;
-(void)fetchUserInfoWithFetchStrategy:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendCredentialsToServer;
-(void)notifyAuthCompleted;
-(void)storeCurrentUserInfoToIGUserDefaultsForUserPK:(id)arg1 ;
-(char)hasAuthorizedWallPost;
-(void)restoreCurrentUserInfoFromIGDefaultsForUserPK:(id)arg1 ;
-(void)sharer:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)sharer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sharerDidCancel:(id)arg1 ;
-(void)setIsAskingForAdditionalPermissions:(char)arg1 ;
-(char)hasAuthorizedManagePages;
-(void)setPageName:(id)arg1 ;
-(IGGraphQLService *)graphQLService;
-(char)isAskingForAdditionalPermisons;
-(void)setIsAskingForAdditionalPermisons:(char)arg1 ;
-(void)dealloc;
-(id)currentUserInfo;
-(void)logout;
-(char)isConfigured;
-(void)setPageAccessToken:(id)arg1 ;
-(id)pageAccessToken;
@end


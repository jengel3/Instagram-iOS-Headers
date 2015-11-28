
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString;

@interface IGFacebookHelper : NSObject <IGServiceHelperProtocol> {

	char _isAskingForAdditionalPermisons;
	char _isRestoringSession;
	char _isMigratingSession;
	char _isSubmittingRequest;

}

@property (assign,nonatomic) char isSubmittingRequest;              //@synthesize isSubmittingRequest=_isSubmittingRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedIGFacebookHelper;
+(id)serviceName;
-(id)sharingInfo;
-(char)canShare;
-(void)shareFeedItem:(id)arg1 fromViewController:(id)arg2 ;
-(void)loginWithBasicPermissions;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(id)shortServiceName;
-(void)clearActiveSessionForUserPK:(id)arg1 ;
-(void)loginWithStandardPermissions;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(char)takeIsAskingForAdditionalPermissions;
-(void)restoreSessionForPk:(id)arg1 ;
-(id)pageName;
-(void)onLoginSuccessful;
-(void)fbDidLogin;
-(void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2 ;
-(void)fbDidNotLogin;
-(void)loginWithPermissions:(id)arg1 ;
-(id)urlSchemeSuffix;
-(void)sessionStateChanged:(id)arg1 state:(int)arg2 error:(id)arg3 ;
-(void)storeCurrentUserInfoToIGUserDefaultsForUserPK:(id)arg1 ;
-(void)restoreCurrentUserInfoFromIGDefaultsForUserPK:(id)arg1 ;
-(id)loadSessionWithUserPk:(id)arg1 ;
-(void)migrateSession:(id)arg1 toUserPk:(id)arg2 ;
-(void)fetchUserInfoWithFetchStrategy:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendCredentialsToServer;
-(void)notifyAuthCompleted;
-(char)hasAuthorizedWallPost;
-(void)setIsSubmittingRequest:(char)arg1 ;
-(char)isSubmittingRequest;
-(void)fbSessionInvalidated;
-(void)fbDidLogout;
-(void)setIsAskingForAdditionalPermissions:(char)arg1 ;
-(char)hasAuthorizedManagePages;
-(void)setPageName:(id)arg1 ;
-(void)showHUDWithText:(id)arg1 ;
-(void)hideHUD;
-(void)submitFBSignupRequest:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)currentUserInfo;
-(void)logout;
-(char)isConfigured;
-(void)setPageAccessToken:(id)arg1 ;
-(id)pageAccessToken;
@end


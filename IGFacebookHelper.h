
#import <Instagram/FBSDKSharingDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString;

@interface IGFacebookHelper : NSObject <FBSDKSharingDelegate, IGServiceHelperProtocol> {

	char _isSubmittingRequest;
	char _isAskingForAdditionalPermisons;

}

@property (assign,nonatomic) char isSubmittingRequest;                         //@synthesize isSubmittingRequest=_isSubmittingRequest - In the implementation block
@property (assign,nonatomic) char isAskingForAdditionalPermisons;              //@synthesize isAskingForAdditionalPermisons=_isAskingForAdditionalPermisons - In the implementation block
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
-(id)sharingInfo;
-(char)canShare;
-(void)shareFeedItem:(id)arg1 fromViewController:(id)arg2 ;
-(char)isLoggedIn;
-(void)loginWithBasicPermissions;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
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
-(void)fbDidNotLogin;
-(void)loginWithReadPermissions:(id)arg1 ;
-(void)loginWithPublishPermissions:(id)arg1 ;
-(void)loginWithPermissions:(id)arg1 forPublish:(char)arg2 ;
-(void)accessTokenChangedWithResult:(id)arg1 error:(id)arg2 ;
-(void)fetchUserInfoWithFetchStrategy:(int)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendCredentialsToServer;
-(void)notifyAuthCompleted;
-(void)storeCurrentUserInfoToIGUserDefaultsForUserPK:(id)arg1 ;
-(char)hasAuthorizedWallPost;
-(void)restoreCurrentUserInfoFromIGDefaultsForUserPK:(id)arg1 ;
-(void)setIsSubmittingRequest:(char)arg1 ;
-(char)isSubmittingRequest;
-(void)sharer:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)sharer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sharerDidCancel:(id)arg1 ;
-(void)fbDidExtendToken:(id)arg1 expiresAt:(id)arg2 ;
-(void)fbSessionInvalidated;
-(void)setIsAskingForAdditionalPermissions:(char)arg1 ;
-(char)hasAuthorizedManagePages;
-(void)setPageName:(id)arg1 ;
-(void)showHUDWithText:(id)arg1 ;
-(void)hideHUD;
-(void)submitFBSignupRequest:(/*^block*/id)arg1 ;
-(char)isAskingForAdditionalPermisons;
-(void)setIsAskingForAdditionalPermisons:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)currentUserInfo;
-(void)logout;
-(char)isConfigured;
-(void)setPageAccessToken:(id)arg1 ;
-(id)pageAccessToken;
@end


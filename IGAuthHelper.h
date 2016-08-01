

@class IGUserSession, NSMutableSet;

@interface IGAuthHelper : NSObject {

	char _isForcingOut;
	IGUserSession* _currentUserSession;
	unsigned _lastAccountSwitchEntryPoint;
	NSMutableSet* _authUserData;

}

@property (nonatomic,retain) NSMutableSet * authUserData;                       //@synthesize authUserData=_authUserData - In the implementation block
@property (nonatomic,retain) IGUserSession * currentUserSession;                //@synthesize currentUserSession=_currentUserSession - In the implementation block
@property (assign,nonatomic) char isForcingOut;                                 //@synthesize isForcingOut=_isForcingOut - In the implementation block
@property (assign,nonatomic) unsigned lastAccountSwitchEntryPoint;              //@synthesize lastAccountSwitchEntryPoint=_lastAccountSwitchEntryPoint - In the implementation block
+(id)sharedAuthHelper;
+(id)authenticatedUserFromUser:(id)arg1 ;
+(void)migrateOldCurrentUser;
+(void)doLocalLogoutStepsSpecificToUser:(id)arg1 ;
+(void)doLocalLogoutStepsAffectingAllUsers;
+(id)currentUser;
-(IGUserSession *)currentUserSession;
-(char)currentUserIsLoggedIn;
-(void)clearAllUsers;
-(void)updateCurrentUserWithDictForCurrentUser:(id)arg1 ;
-(void)removeProfilePicture;
-(id)authenticatedUserMatchingUserPK:(id)arg1 ;
-(char)hasMultipleAccounts;
-(void)switchToAuthenticatedUser:(id)arg1 defaultSelectedTab:(int)arg2 entryPoint:(unsigned)arg3 ;
-(void)logInWithDictionary:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)unarchiveUsers;
-(void)restoreCurrentUser;
-(void)storeLastUserPK:(id)arg1 ;
-(NSMutableSet *)authUserData;
-(id)oldCurrentUser;
-(id)oldStoredUsers;
-(id)storedAuthUserData;
-(void)storeAuthUserData:(id)arg1 ;
-(void)removeOldUserData;
-(void)removeOldStoredUsersData;
-(void)setAuthUserData:(NSMutableSet *)arg1 ;
-(id)lastUserPK;
-(void)swapFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2 ;
-(void)updateCurrentUser:(id)arg1 ;
-(void)synchronizeUserWithKeychain:(id)arg1 ;
-(id)currentAuthenticatedUsers;
-(void)switchToAuthenticatedUserWithForce:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 entryPoint:(unsigned)arg4 ;
-(void)clearCurrentUser;
-(void)handleLoginError;
-(unsigned)lastAccountSwitchEntryPoint;
-(void)saveCookiesForInternalUsers;
-(char)isForcingOut;
-(void)setIsForcingOut:(char)arg1 ;
-(void)sendServerLogoutRequestForUser:(id)arg1 ssoEnabled:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(void)handleLoginRequiredByServer;
-(void)setCurrentUserSession:(IGUserSession *)arg1 ;
-(void)switchToLastAccessedUserWithForceDueToAddUserCancel;
-(char)hasMaximumNumberOfAccounts;
-(void)setLastAccountSwitchEntryPoint:(unsigned)arg1 ;
-(void)switchToNilUserWithEntryPoint:(unsigned)arg1 ;
-(void)accountSecurityInfoWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)sendTwoFactorSMSToPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)disableTwoFactorWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)switchToLastAccessedUserWithForceDueToCurrentUserLogoutWithEntryPoint:(unsigned)arg1 ;
-(void)logOutAllUsersWithCompletionHandler:(/*^block*/id)arg1 ssoEnabledUsers:(id)arg2 ;
-(void)changePrivacySetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)renewBackupCodesWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)getProfanityFilterSetting:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)changeProfanityFilterSetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)uploadProfilePicture:(id)arg1 fromOption:(int)arg2 ;
-(id)profilePictureImageFromSourceImage:(id)arg1 ;
-(void)verifyAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 confirmationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)resendAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)logOutUser:(id)arg1 ssoEnabled:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)currentAuthenticatedUsersSortedByAccessTime;
-(void)logInWithAuthenticatedUser:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)verifySignUpSMSCodeWithPhoneNumber:(id)arg1 validationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)requestSignUpSMSCodeWithPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)requestSupportForSupportType:(unsigned)arg1 user:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)resendTwoFactorLoginSMSForUsername:(id)arg1 twoFactorIdentifier:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)robocallTwoFactorLoginForUsername:(id)arg1 twoFactorIdentifier:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)assistedAccountRecoveryAction:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)fetchSuggestedUsernamesWithEmail:(id)arg1 fullName:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)submitSignUpRequestWithPath:(id)arg1 info:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)uploadProfilePicture:(id)arg1 successfulHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)logInWithUserDictionary:(id)arg1 facebookAccessToken:(id)arg2 authLogInType:(int)arg3 ;
-(void)setCurrentUser:(id)arg1 ;
-(void)archive;
-(id)init;
@end


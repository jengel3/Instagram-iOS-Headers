

@class IGUser, IGUserSession, NSMutableSet;

@interface IGAuthHelper : NSObject {

	IGUser* _currentUser;
	IGUserSession* _currentUserSession;
	NSMutableSet* _authUserData;

}

@property (nonatomic,retain) IGUser * currentUser;                            //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) IGUserSession * currentUserSession;              //@synthesize currentUserSession=_currentUserSession - In the implementation block
@property (nonatomic,retain) NSMutableSet * authUserData;                     //@synthesize authUserData=_authUserData - In the implementation block
+(id)sharedAuthHelper;
+(id)authenticatedUserFromUser:(id)arg1 ;
+(void)migrateOldCurrentUser;
+(id)userSessionCookiesPredicate;
+(void)doLocalLogoutStepsSpecificToUser:(id)arg1 ;
+(void)doLocalLogoutStepsAffectingAllUsers;
+(void)postLogoutNotificationForUser:(id)arg1 ;
-(id)currentAuthenticatedUsersSortedByAccessTime;
-(char)currentUserIsLoggedIn;
-(IGUserSession *)currentUserSession;
-(char)hasMultipleAccounts;
-(char)passesMultipleAccountsQE;
-(id)authenticatedUserMatchingUserPK:(id)arg1 ;
-(void)switchToAuthenticatedUser:(id)arg1 defaultSelectedTab:(int)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)logInWithDictionary:(id)arg1 authLogInType:(int)arg2 ;
-(void)handleLoginRequiredByServer;
-(void)logOutAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unarchiveUsers;
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
-(void)synchronizeUserWithKeychain:(id)arg1 ;
-(id)currentAuthenticatedUsers;
-(void)switchToAuthenticatedUser:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)switchToAuthenticatedUserWithForce:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 ;
-(void)swapFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2 ;
-(char)cookiesAreValidForUserID:(id)arg1 ;
-(void)syncWithIGCookieStorageForUserWithPK:(id)arg1 ;
-(void)updateCurrentUser:(id)arg1 ;
-(void)handleLoginError;
-(void)saveCookiesForInternalUsers;
-(void)logInWithUserDictionary:(id)arg1 authLogInType:(int)arg2 ;
-(void)logInWithAuthenticatedUser:(id)arg1 authLogInType:(int)arg2 ;
-(void)clearCurrentUser;
-(void)switchToLastAccessedUserWithForceDueToCurrentUserLogout;
-(void)logOutUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendServerLogoutRequestForUserWithPK:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearAllUsers;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(char)hasMaximumNumberOfAccounts;
-(void)uploadProfilePicture:(id)arg1 ;
-(void)removeProfilePicture;
-(void)assistedAccountRecoveryAction:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)resendTwoFactorLoginSMSForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)accountSecurityInfoWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)sendTwoFactorSMSToPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)disableTwoFactorWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)renewBackupCodesWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)changePrivacySetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)changeProfanityFilterSetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)getProfanityFilterSetting:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setCurrentUserSession:(IGUserSession *)arg1 ;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(void)archive;
-(id)init;
-(id)uniqueID;
-(IGUser *)currentUser;
@end


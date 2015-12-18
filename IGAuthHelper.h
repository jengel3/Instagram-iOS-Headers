

@class IGUser, IGUserSession, NSMutableSet;

@interface IGAuthHelper : NSObject {

	char _isForcingOut;
	IGUser* _currentUser;
	IGUserSession* _currentUserSession;
	unsigned _lastAccountSwitchEntryPoint;
	NSMutableSet* _authUserData;

}

@property (nonatomic,retain) IGUser * currentUser;                              //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) IGUserSession * currentUserSession;                //@synthesize currentUserSession=_currentUserSession - In the implementation block
@property (assign,nonatomic) unsigned lastAccountSwitchEntryPoint;              //@synthesize lastAccountSwitchEntryPoint=_lastAccountSwitchEntryPoint - In the implementation block
@property (nonatomic,retain) NSMutableSet * authUserData;                       //@synthesize authUserData=_authUserData - In the implementation block
@property (assign,nonatomic) char isForcingOut;                                 //@synthesize isForcingOut=_isForcingOut - In the implementation block
+(id)sharedAuthHelper;
+(id)authenticatedUserFromUser:(id)arg1 ;
+(void)migrateOldCurrentUser;
+(id)userSessionCookiesPredicate;
+(void)doLocalLogoutStepsSpecificToUser:(id)arg1 ;
+(void)doLocalLogoutStepsAffectingAllUsers;
-(id)currentAuthenticatedUsersSortedByAccessTime;
-(char)hasMultipleAccounts;
-(char)currentUserIsLoggedIn;
-(IGUserSession *)currentUserSession;
-(char)passesMultipleAccountsQE;
-(id)authenticatedUserMatchingUserPK:(id)arg1 ;
-(void)switchToAuthenticatedUser:(id)arg1 defaultSelectedTab:(int)arg2 entryPoint:(unsigned)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)logInWithDictionary:(id)arg1 authLogInType:(int)arg2 ;
-(void)handleLoginRequiredByServer;
-(void)logOutAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
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
-(void)updateCurrentUser:(id)arg1 ;
-(void)synchronizeUserWithKeychain:(id)arg1 ;
-(id)currentAuthenticatedUsers;
-(void)switchToAuthenticatedUser:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 entryPoint:(unsigned)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)switchToAuthenticatedUserWithForce:(id)arg1 authLogInType:(int)arg2 defaultSelectedTab:(int)arg3 entryPoint:(unsigned)arg4 ;
-(void)swapFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2 ;
-(void)clearCurrentUser;
-(char)cookiesAreValidForUserID:(id)arg1 ;
-(void)syncWithIGCookieStorageForUserWithPK:(id)arg1 ;
-(void)handleLoginError;
-(unsigned)lastAccountSwitchEntryPoint;
-(void)saveCookiesForInternalUsers;
-(void)logInWithUserDictionary:(id)arg1 authLogInType:(int)arg2 ;
-(void)logInWithAuthenticatedUser:(id)arg1 authLogInType:(int)arg2 ;
-(char)isForcingOut;
-(void)setIsForcingOut:(char)arg1 ;
-(void)switchToLastAccessedUserWithForceDueToCurrentUserLogoutWithEntryPoint:(unsigned)arg1 ;
-(void)logOutUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendServerLogoutRequestForUserWithPK:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearAllUsers;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(void)updateCurrentUserWithDictForCurrentUser:(id)arg1 ;
-(char)hasMaximumNumberOfAccounts;
-(void)switchToLastAccessedUserWithForceDueToAddUserCancel;
-(void)switchToNilUserWithEntryPoint:(unsigned)arg1 ;
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
-(void)setLastAccountSwitchEntryPoint:(unsigned)arg1 ;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(void)archive;
-(id)init;
-(id)uniqueID;
-(IGUser *)currentUser;
@end


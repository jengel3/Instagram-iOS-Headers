/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGUser, NSMutableSet;

@interface IGAuthHelper : NSObject {

	IGUser* _currentUser;
	NSMutableSet* _authUserData;

}

@property (nonatomic,retain) IGUser * currentUser;                     //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) NSMutableSet * authUserData;              //@synthesize authUserData=_authUserData - In the implementation block
+(id)sharedAuthHelper;
+(void)migrateOldCurrentUser;
+(id)userSessionCookiesPredicate;
-(IGUser *)currentUser;
-(char)currentUserIsLoggedIn;
-(char)hasMultipleAccounts;
-(void)logInWithDictionary:(id)arg1 ;
-(void)switchToAuthenticatedUser:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)handleLoginRequiredByServer;
-(void)logOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)currentUsersSortedByAccessTime;
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
-(char)passesMultipleAccountsQE;
-(void)switchToAuthenticatedUser:(id)arg1 fromLogin:(char)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)switchToAuthenticatedUserWithForce:(id)arg1 fromLogin:(char)arg2 ;
-(void)swapFromCookiesOfUserWithPk:(id)arg1 toCookiesOfUserWithPk:(id)arg2 ;
-(char)cookiesAreValidForUserID:(id)arg1 ;
-(void)syncWithIGCookieStorageForUserWithPK:(id)arg1 ;
-(void)updateCurrentUser:(id)arg1 ;
-(void)logInWithAuthenticatedUser:(id)arg1 isSwitchingUsers:(char)arg2 ;
-(void)handleLoginError;
-(void)saveCookiesForInternalUsers;
-(void)logInWithDictionary:(id)arg1 isSwitchingUsers:(char)arg2 ;
-(void)clearCurrentUser;
-(void)switchToLastAccessedUserWithForce;
-(void)logOutUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendServerLogoutRequestForUserWithPK:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearAllUsers;
-(void)doLocalLogoutForUser:(id)arg1 ;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(char)hasMaximumNumberOfAccounts;
-(void)logInWithAuthenticatedUser:(id)arg1 ;
-(void)uploadProfilePicture:(id)arg1 ;
-(void)removeProfilePicture;
-(void)changePrivacySetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)changeProfanityFilterSetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)getProfanityFilterSetting:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(id)init;
-(id)uniqueID;
-(void)archive;
@end


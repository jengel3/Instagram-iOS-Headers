
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGNonCurrentUserDefaults, IGDirectSuggestedRecipientCache, IGDirectRecipientDataSource, NSArray;

@interface IGDirectSuggestedRecipientManager : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGDirectSuggestedRecipientCache* _cache;
	IGDirectRecipientDataSource* _recipientDatasource;
	NSArray* _recipientsFromServer;

}

@property (nonatomic,retain) NSString * userSessionPK;                                         //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;                   //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,readonly) IGDirectSuggestedRecipientCache * cache;                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) IGDirectRecipientDataSource * recipientDatasource;              //@synthesize recipientDatasource=_recipientDatasource - In the implementation block
@property (nonatomic,copy) NSArray * recipientsFromServer;                                     //@synthesize recipientsFromServer=_recipientsFromServer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sessionDirectRecipientManager;
-(NSString *)userSessionPK;
-(void)willSwitchUsers;
-(void)willLogOut;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)followingUsers;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(NSArray *)recipientsFromServer;
-(id)fallbackRecipientsUsersOnly;
-(void)setRecipientsFromServer:(NSArray *)arg1 ;
-(IGDirectRecipientDataSource *)recipientDatasource;
-(id)defaultRecipientsIncludingThreads;
-(char)useRankedContacts;
-(id)defaultRecipientsUsersOnly;
-(void)fetchDefaultRecipientsIfNeeded;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)dealloc;
-(IGDirectSuggestedRecipientCache *)cache;
@end


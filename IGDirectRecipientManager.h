
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGNonCurrentUserDefaults, NSArray;

@interface IGDirectRecipientManager : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSArray* _cachedDefaultUserRecipients;
	double _lastUserFetchTime;

}

@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSArray * cachedDefaultUserRecipients;                       //@synthesize cachedDefaultUserRecipients=_cachedDefaultUserRecipients - In the implementation block
@property (assign,nonatomic) double lastUserFetchTime;                                    //@synthesize lastUserFetchTime=_lastUserFetchTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)followingUsers;
-(char)useNewEndpoint;
-(void)setLastUserFetchTime:(double)arg1 ;
-(void)refetchDefaultRecipientsIfNeeded;
-(NSArray *)cachedDefaultUserRecipients;
-(id)fallbackRecipientsUsersOnly;
-(double)lastUserFetchTime;
-(void)setCachedDefaultUserRecipients:(NSArray *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(id)defaultRecipientsUsersOnly;
-(id)defaultRecipientsIncludingThreads;
-(void)archive;
@end


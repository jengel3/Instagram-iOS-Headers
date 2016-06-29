
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, IGNonCurrentUserDefaults, NSString;

@interface IGFlaggedCommentLedger : NSObject <IGUserSessionClearableObject> {

	NSMutableDictionary* _flaggedComments;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)migrateUserDefaultsIfNecessary;
-(char)containsComment:(id)arg1 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)archive;
-(void)dealloc;
-(void)clear;
-(void)addComment:(id)arg1 ;
@end


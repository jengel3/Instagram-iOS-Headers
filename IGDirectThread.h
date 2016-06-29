
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@protocol IGImageURLProvider;
@class NSString, NSOrderedSet, NSArray, IGUser, IGDate, NSDictionary;

@interface IGDirectThread : NSObject <NSCopying, NSCoding, IGDKDiffable> {

	char _hasOlder;
	char _isNamed;
	char _isPending;
	char _isMuted;
	char _isCanonical;
	char _isLocal;
	char _isPendingDeletion;
	NSString* _threadId;
	NSOrderedSet* _publishedContent;
	NSArray* _users;
	IGUser* _owner;
	NSString* _newestCursor;
	NSString* _oldestCursor;
	NSString* _name;
	IGDate* _lastItemAt;
	IGDate* _lastActivityDate;
	IGUser* _inviter;
	id<IGImageURLProvider> _lastMediaImageURLProvider;
	int _threadType;
	NSDictionary* _lastSeenAtForUserIds;
	NSDictionary* _lastSeenAtForItemIds;
	NSArray* _leftUsers;

}

@property (nonatomic,copy) NSString * threadId;                                             //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,retain) NSOrderedSet * publishedContent;                               //@synthesize publishedContent=_publishedContent - In the implementation block
@property (nonatomic,retain) NSArray * users;                                               //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * newestCursor;                                         //@synthesize newestCursor=_newestCursor - In the implementation block
@property (nonatomic,copy) NSString * oldestCursor;                                         //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (assign,nonatomic) char hasOlder;                                                 //@synthesize hasOlder=_hasOlder - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSeenAtForUserIds;                           //@synthesize lastSeenAtForUserIds=_lastSeenAtForUserIds - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSeenAtForItemIds;                           //@synthesize lastSeenAtForItemIds=_lastSeenAtForItemIds - In the implementation block
@property (nonatomic,retain) IGDate * lastItemAt;                                           //@synthesize lastItemAt=_lastItemAt - In the implementation block
@property (nonatomic,retain) IGDate * lastActivityDate;                                     //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char isMuted;                                                  //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,nonatomic) char isNamed;                                                  //@synthesize isNamed=_isNamed - In the implementation block
@property (assign,nonatomic) char isCanonical;                                              //@synthesize isCanonical=_isCanonical - In the implementation block
@property (nonatomic,retain) IGUser * inviter;                                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,retain) id<IGImageURLProvider> lastMediaImageURLProvider;              //@synthesize lastMediaImageURLProvider=_lastMediaImageURLProvider - In the implementation block
@property (assign,nonatomic) char isLocal;                                                  //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,retain) NSArray * leftUsers;                                           //@synthesize leftUsers=_leftUsers - In the implementation block
@property (nonatomic,retain) IGUser * owner;                                                //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) int threadType;                                                //@synthesize threadType=_threadType - In the implementation block
@property (nonatomic,readonly) char disabled; 
@property (nonatomic,copy,readonly) NSString * defaultNameString; 
@property (assign,nonatomic) char isPending;                                                //@synthesize isPending=_isPending - In the implementation block
@property (nonatomic,copy,readonly) NSString * uploadIndexKey; 
@property (assign,nonatomic) char isPendingDeletion;                                        //@synthesize isPendingDeletion=_isPendingDeletion - In the implementation block
+(id)usernameStringForUsernames:(id)arg1 maxUsers:(int)arg2 ;
+(id)usernameStringForUsers:(id)arg1 ;
+(id)shortUsernameStringForUsers:(id)arg1 ;
+(id)usernameStringForUsers:(id)arg1 maxUsers:(int)arg2 ;
-(id)diffIdentifier;
-(void)setIsPending:(char)arg1 ;
-(id)lastSeenAtForUserWithId:(id)arg1 ;
-(id<IGImageURLProvider>)lastMediaImageURLProvider;
-(NSOrderedSet *)publishedContent;
-(NSString *)oldestCursor;
-(void)setOldestCursor:(NSString *)arg1 ;
-(id)orderedArrayOfUsersHideCurrentUser:(char)arg1 ;
-(char)isPendingDeletion;
-(void)setIsPendingDeletion:(char)arg1 ;
-(NSString *)defaultNameString;
-(int)threadType;
-(NSString *)uploadIndexKey;
-(NSString *)newestCursor;
-(void)setNewestCursor:(NSString *)arg1 ;
-(char)hasOlder;
-(void)setHasOlder:(char)arg1 ;
-(NSDictionary *)lastSeenAtForUserIds;
-(void)setLastSeenAtForUserIds:(NSDictionary *)arg1 ;
-(NSDictionary *)lastSeenAtForItemIds;
-(void)setLastSeenAtForItemIds:(NSDictionary *)arg1 ;
-(void)setPublishedContent:(NSOrderedSet *)arg1 ;
-(char)isNamed;
-(void)setIsNamed:(char)arg1 ;
-(char)isCanonical;
-(void)setIsCanonical:(char)arg1 ;
-(void)setInviter:(IGUser *)arg1 ;
-(void)setLastMediaImageURLProvider:(id<IGImageURLProvider>)arg1 ;
-(NSArray *)leftUsers;
-(void)setLeftUsers:(NSArray *)arg1 ;
-(void)setThreadType:(int)arg1 ;
-(IGDate *)lastItemAt;
-(void)setLastItemAt:(IGDate *)arg1 ;
-(id)initWithThreadId:(id)arg1 hasOlder:(char)arg2 lastActivityDate:(id)arg3 users:(id)arg4 owner:(id)arg5 threadType:(int)arg6 oldestCursor:(id)arg7 newestCursor:(id)arg8 inviter:(id)arg9 publishedContent:(id)arg10 name:(id)arg11 isPending:(char)arg12 isMuted:(char)arg13 isCanonical:(char)arg14 lastMediaImageURLProvider:(id)arg15 isLocal:(char)arg16 lastSeenAtForUserIds:(id)arg17 lastSeenAtForItemIds:(id)arg18 lastItemAt:(id)arg19 leftUsers:(id)arg20 isNamed:(char)arg21 ;
-(id)initLocalThreadWithUsers:(id)arg1 lastActivityDate:(id)arg2 ;
-(id)copyByTrimmingContentToCount:(unsigned)arg1 ;
-(id)seenAtForItemsWithId:(id)arg1 ;
-(char)allowsNameChanges;
-(id)copyByAddingContentFromArray:(id)arg1 ;
-(id)copyByRemovingContentWithId:(id)arg1 ;
-(id)copyBySettingLastSeenForUserWithId:(id)arg1 toTimestamp:(id)arg2 withSeenItemId:(id)arg3 ;
-(id)copyBySettingMuteStatusTo:(char)arg1 ;
-(id)copyByRenamingTo:(id)arg1 ;
-(id)copyByReplacingReactableContent:(id)arg1 hasReactionsChanged:(char*)arg2 ;
-(void)updateViewCount:(unsigned)arg1 forItemID:(id)arg2 ;
-(id)copyBySettingLastMediaURLProviderTo:(id)arg1 ;
-(void)updateReadStatusFromThread:(id)arg1 ;
-(IGDate *)lastActivityDate;
-(void)setLastActivityDate:(IGDate *)arg1 ;
-(void)setIsLocal:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)disabled;
-(char)isPending;
-(IGUser *)inviter;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setOwner:(IGUser *)arg1 ;
-(IGUser *)owner;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
-(char)isLocal;
@end


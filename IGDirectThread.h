
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol IGImageURLProvider;
@class NSOrderedSet, IGDate, NSString, NSArray, IGUser, NSDictionary;

@interface IGDirectThread : NSObject <NSCopying, NSCoding> {

	NSOrderedSet* _allMessages;
	IGDate* _mostRecentActivityDate;
	char _hasOlder;
	char _isPending;
	char _isMuted;
	char _isCanonical;
	char _isLocal;
	NSString* _threadId;
	NSString* _name;
	NSArray* _users;
	NSOrderedSet* _publishedMessages;
	NSString* _unfinishedMessage;
	NSOrderedSet* _pendingMessages;
	NSArray* _leftUsers;
	NSString* _newestCursor;
	NSString* _oldestCursor;
	IGDate* _lastActivityDate;
	IGUser* _inviter;
	id<IGImageURLProvider> _lastMediaImageURLProvider;
	NSDictionary* _lastSeenAtForUserIds;
	NSDictionary* _lastSeenAtForItemIds;

}

@property (nonatomic,copy,readonly) NSString * threadId;                                      //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * users;                                          //@synthesize users=_users - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * publishedMessages;                         //@synthesize publishedMessages=_publishedMessages - In the implementation block
@property (nonatomic,copy,readonly) NSString * unfinishedMessage;                             //@synthesize unfinishedMessage=_unfinishedMessage - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * pendingMessages;                           //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (nonatomic,copy,readonly) NSArray * leftUsers;                                      //@synthesize leftUsers=_leftUsers - In the implementation block
@property (nonatomic,copy,readonly) NSString * newestCursor;                                  //@synthesize newestCursor=_newestCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldestCursor;                                  //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (nonatomic,readonly) char hasOlder;                                                 //@synthesize hasOlder=_hasOlder - In the implementation block
@property (nonatomic,readonly) IGDate * lastActivityDate;                                     //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (nonatomic,readonly) char isPending;                                                //@synthesize isPending=_isPending - In the implementation block
@property (nonatomic,readonly) char isMuted;                                                  //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) char isCanonical;                                              //@synthesize isCanonical=_isCanonical - In the implementation block
@property (nonatomic,readonly) IGUser * inviter;                                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,readonly) id<IGImageURLProvider> lastMediaImageURLProvider;              //@synthesize lastMediaImageURLProvider=_lastMediaImageURLProvider - In the implementation block
@property (nonatomic,readonly) char isLocal;                                                  //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * lastSeenAtForUserIds;                      //@synthesize lastSeenAtForUserIds=_lastSeenAtForUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * lastSeenAtForItemIds;                      //@synthesize lastSeenAtForItemIds=_lastSeenAtForItemIds - In the implementation block
+(id)usernameStringForUsernames:(id)arg1 maxUsers:(int)arg2 ;
+(id)usernameStringForUsers:(id)arg1 ;
+(id)usernameStringForUsers:(id)arg1 maxUsers:(int)arg2 ;
-(id)mostRecentActivityDate;
-(id)initLocalThreadWithUsers:(id)arg1 lastActivityDate:(id)arg2 ;
-(id)lastSeenAtForUserWithId:(id)arg1 ;
-(id<IGImageURLProvider>)lastMediaImageURLProvider;
-(NSOrderedSet *)publishedMessages;
-(id)orderedArrayOfRecentlyActiveUsersHideCurrentUser:(char)arg1 ;
-(NSString *)oldestCursor;
-(id)defaultNameWithUsers:(id)arg1 ;
-(id)initWithThreadId:(id)arg1 hasOlder:(char)arg2 lastActivityDate:(id)arg3 users:(id)arg4 oldestCursor:(id)arg5 newestCursor:(id)arg6 inviter:(id)arg7 publishedMessages:(id)arg8 pendingMessages:(id)arg9 name:(id)arg10 isPending:(char)arg11 isMuted:(char)arg12 isCanonical:(char)arg13 lastMediaImageURLProvider:(id)arg14 isLocal:(char)arg15 lastSeenAtForUserIds:(id)arg16 lastSeenAtForItemIds:(id)arg17 leftUsers:(id)arg18 unfinishedMessage:(id)arg19 ;
-(id)defaultName;
-(NSDictionary *)lastSeenAtForUserIds;
-(NSDictionary *)lastSeenAtForItemIds;
-(char)isCanonical;
-(char)hasOlder;
-(NSArray *)leftUsers;
-(NSString *)newestCursor;
-(NSString *)unfinishedMessage;
-(char)hasDefaultName;
-(char)isUnreadForUserWithId:(id)arg1 ;
-(id)seenAtForItemsWithId:(id)arg1 ;
-(char)allowsNameChanges;
-(IGDate *)lastActivityDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)disabled;
-(char)isPending;
-(id)allMessages;
-(IGUser *)inviter;
-(NSArray *)users;
-(char)isMuted;
-(NSOrderedSet *)pendingMessages;
-(NSString *)threadId;
-(char)isLocal;
@end



#import <Instagram/IGDKDiffable.h>

@protocol IGAlbumItemType;
@class NSString, NSArray, IGUser;

@interface IGReelViewModel : NSObject <IGDKDiffable> {

	NSString* _diffIdentifier;
	char _isCurrentUserReel;
	char _isUnseenNux;
	char _isNux;
	char _canReply;
	char _seen;
	NSArray* _sortedItems;
	IGUser* _user;
	id<IGAlbumItemType> _currentItem;
	int _rankedPosition;
	int _seenRankedPosition;

}

@property (nonatomic,readonly) NSArray * sortedItems;                        //@synthesize sortedItems=_sortedItems - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) char isCurrentUserReel;                       //@synthesize isCurrentUserReel=_isCurrentUserReel - In the implementation block
@property (nonatomic,readonly) char isUnseenNux;                             //@synthesize isUnseenNux=_isUnseenNux - In the implementation block
@property (nonatomic,readonly) char isNux;                                   //@synthesize isNux=_isNux - In the implementation block
@property (nonatomic,readonly) char canReply;                                //@synthesize canReply=_canReply - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) char seen;                                    //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) int rankedPosition;                           //@synthesize rankedPosition=_rankedPosition - In the implementation block
@property (nonatomic,readonly) int seenRankedPosition;                       //@synthesize seenRankedPosition=_seenRankedPosition - In the implementation block
-(NSArray *)sortedItems;
-(int)rankedPosition;
-(int)seenRankedPosition;
-(char)isNux;
-(char)canReply;
-(id)diffIdentifier;
-(char)isCurrentUserReel;
-(char)seen;
-(char)isUnseenNux;
-(id)initWithUser:(id)arg1 items:(id)arg2 currentItem:(id)arg3 seen:(char)arg4 rankedPosition:(int)arg5 seenRankedPosition:(int)arg6 isNux:(char)arg7 canReply:(char)arg8 ;
-(IGUser *)user;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<IGAlbumItemType>)currentItem;
@end


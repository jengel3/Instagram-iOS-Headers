
#import <Instagram/IGDKDiffable.h>

@protocol IGAlbumItemType;
@class NSString, IGUser, NSArray, NSDate;

@interface IGAlbumViewerViewModel : NSObject <IGDKDiffable> {

	char _isCurrentUser;
	char _isNux;
	char _canReply;
	NSString* _reelPK;
	IGUser* _user;
	NSArray* _items;
	id<IGAlbumItemType> _startingItem;
	NSDate* _itemFilterTimestamp;

}

@property (nonatomic,copy,readonly) NSString * reelPK;                             //@synthesize reelPK=_reelPK - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) char isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,readonly) char isNux;                                         //@synthesize isNux=_isNux - In the implementation block
@property (nonatomic,readonly) char canReply;                                      //@synthesize canReply=_canReply - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) id<IGAlbumItemType> startingItem;              //@synthesize startingItem=_startingItem - In the implementation block
@property (nonatomic,readonly) NSDate * itemFilterTimestamp;                       //@synthesize itemFilterTimestamp=_itemFilterTimestamp - In the implementation block
-(char)isNux;
-(char)canReply;
-(id)diffIdentifier;
-(NSString *)reelPK;
-(id<IGAlbumItemType>)startingItem;
-(NSDate *)itemFilterTimestamp;
-(id)initWithReelPK:(id)arg1 user:(id)arg2 isNux:(char)arg3 canReply:(char)arg4 items:(id)arg5 itemFilterTimestamp:(id)arg6 ;
-(char)isCurrentUser;
-(IGUser *)user;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSArray *)items;
@end


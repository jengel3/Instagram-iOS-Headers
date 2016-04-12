
#import <Instagram/IGDKDiffable.h>

@class IGFeedItem, IGPostItem, NSDate;

@interface IGAlbumSubscriptionTrayItemModel : NSObject <IGDKDiffable> {

	char _isCurrentAlbum;
	char _seen;
	IGFeedItem* _feedItem;
	IGPostItem* _item;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) char isCurrentAlbum;                 //@synthesize isCurrentAlbum=_isCurrentAlbum - In the implementation block
@property (nonatomic,readonly) IGPostItem * item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) char seen;                           //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) NSDate * lastTakenDate; 
-(IGFeedItem *)feedItem;
-(char)isCurrentAlbum;
-(char)seen;
-(id)initWithFeedItem:(id)arg1 isCurrentAlbum:(char)arg2 lastSeenDate:(id)arg3 ;
-(id)diffIdentifier;
-(NSDate *)lastTakenDate;
-(char)isEqual:(id)arg1 ;
-(IGPostItem *)item;
@end


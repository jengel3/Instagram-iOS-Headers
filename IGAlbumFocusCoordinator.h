

@class IGFeedItem, IGPostItem;

@interface IGAlbumFocusCoordinator : NSObject {

	IGFeedItem* _feedItem;
	IGPostItem* _currentItem;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGPostItem * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 currentItem:(id)arg2 ;
-(void)setCurrentItem:(IGPostItem *)arg1 ;
-(IGPostItem *)currentItem;
@end


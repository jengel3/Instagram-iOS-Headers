

@class IGFeedItem, IGPostItem;

@interface IGAlbumFocusCoordinator : NSObject {

	IGFeedItem* _feedItem;
	IGPostItem* _currentItem;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGPostItem * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
-(id)initWithFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setCurrentItem:(IGPostItem *)arg1 ;
-(IGPostItem *)currentItem;
@end


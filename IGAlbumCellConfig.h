

@class IGFeedItem, IGAlbumFocusCoordinator;

@interface IGAlbumCellConfig : NSObject {

	IGFeedItem* _feedItem;
	IGAlbumFocusCoordinator* _focusCoordinator;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;              //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
@end




@protocol IGAlbumFocusCoordinatorDelegate;
@class IGFeedItem, NSArray, IGPostItem;

@interface IGAlbumFocusCoordinator : NSObject {

	char _isLooping;
	id<IGAlbumFocusCoordinatorDelegate> _delegate;
	IGFeedItem* _feedItem;
	NSArray* _items;
	IGPostItem* _currentItem;
	int _page;

}

@property (assign,nonatomic,__weak) id<IGAlbumFocusCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                          //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) IGPostItem * currentItem;                                         //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) IGPostItem * nextItem; 
@property (assign,nonatomic) char isLooping;                                                   //@synthesize isLooping=_isLooping - In the implementation block
@property (assign,nonatomic) int page;                                                         //@synthesize page=_page - In the implementation block
-(id)initWithFeedItem:(id)arg1 currentItem:(id)arg2 isLooping:(char)arg3 ;
-(void)feedItemUpdated;
-(void)feedItemDeleted;
-(void)goToNextPage;
-(void)playerViewDidFinishItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 isLooping:(char)arg2 ;
-(void)setDelegate:(id<IGAlbumFocusCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumFocusCoordinatorDelegate>)delegate;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setCurrentItem:(IGPostItem *)arg1 ;
-(IGPostItem *)currentItem;
-(int)page;
-(void)setPage:(int)arg1 ;
-(IGPostItem *)nextItem;
-(void)setIsLooping:(char)arg1 ;
-(char)isLooping;
@end


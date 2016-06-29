

@protocol IGAlbumFocusCoordinatorDelegate;
@class IGFeedItem, NSMutableArray, NSArray;

@interface IGAlbumFocusCoordinator : NSObject {

	char _isLooping;
	id<IGAlbumFocusCoordinatorDelegate> _delegate;
	IGFeedItem* _currentItem;
	float _currentItemProgress;
	int _currentItemIndex;
	NSMutableArray* _mutableAlbumItems;

}

@property (nonatomic,retain) NSMutableArray * mutableAlbumItems;                               //@synthesize mutableAlbumItems=_mutableAlbumItems - In the implementation block
@property (nonatomic,retain) IGFeedItem * currentItem;                                         //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) float currentItemProgress;                                        //@synthesize currentItemProgress=_currentItemProgress - In the implementation block
@property (assign,nonatomic) int currentItemIndex;                                             //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) char isLooping;                                                   //@synthesize isLooping=_isLooping - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumFocusCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * albumItems; 
@property (nonatomic,readonly) IGFeedItem * nextItem; 
@property (nonatomic,readonly) IGFeedItem * previousItem; 
-(id)initWithAlbumItems:(id)arg1 currentItem:(id)arg2 isLooping:(char)arg3 ;
-(void)feedItemUpdated:(id)arg1 ;
-(void)feedItemDeleted:(id)arg1 ;
-(void)uploadManagerDidShareAlbumItem:(id)arg1 ;
-(NSMutableArray *)mutableAlbumItems;
-(void)switchToFeedItemAtIndex:(int)arg1 ;
-(void)setMutableAlbumItems:(NSMutableArray *)arg1 ;
-(void)goToNextPage;
-(void)addAlbumItem:(id)arg1 ;
-(void)setCurrentItemProgress:(float)arg1 ;
-(void)goToPreviousPage;
-(void)jumpToPage:(int)arg1 ;
-(void)playerViewDidProgress:(float)arg1 ;
-(void)playerViewDidFinishItem:(id)arg1 ;
-(void)playerViewDidRewindItem:(id)arg1 ;
-(void)playerViewDidJumpToPage:(int)arg1 ;
-(float)currentItemProgress;
-(int)currentItemIndex;
-(void)setCurrentItemIndex:(int)arg1 ;
-(id)initWithAlbumItems:(id)arg1 isLooping:(char)arg2 ;
-(void)setDelegate:(id<IGAlbumFocusCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumFocusCoordinatorDelegate>)delegate;
-(void)setCurrentItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)currentItem;
-(IGFeedItem *)previousItem;
-(IGFeedItem *)nextItem;
-(NSArray *)albumItems;
-(void)setIsLooping:(char)arg1 ;
-(char)isLooping;
@end




@class UICollectionView, NSMutableSet;

@interface IGFeedUsertagManager : NSObject {

	UICollectionView* _collectionView;
	NSMutableSet* _feedItemsScheduledForTagRemoval;
	float _navBarHeight;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) NSMutableSet * feedItemsScheduledForTagRemoval;              //@synthesize feedItemsScheduledForTagRemoval=_feedItemsScheduledForTagRemoval - In the implementation block
@property (nonatomic,readonly) float navBarHeight;                                          //@synthesize navBarHeight=_navBarHeight - In the implementation block
-(void)scheduleCellForUsertagRemoval:(id)arg1 ;
-(float)navBarHeight;
-(void)hideUsertagsForFeedItem:(id)arg1 ;
-(void)showUsertagsIndication:(char)arg1 inCell:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 navBarHeight:(float)arg2 ;
-(NSMutableSet *)feedItemsScheduledForTagRemoval;
-(UICollectionView *)collectionView;
@end


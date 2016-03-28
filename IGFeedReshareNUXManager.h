

@protocol IGFeedReshareNUXManagerDatasource;
@class UICollectionView;

@interface IGFeedReshareNUXManager : NSObject {

	id<IGFeedReshareNUXManagerDatasource> _feedItemDatasource;
	UICollectionView* _collectionView;

}

@property (assign,nonatomic,__weak) id<IGFeedReshareNUXManagerDatasource> feedItemDatasource;              //@synthesize feedItemDatasource=_feedItemDatasource - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
-(void)hideAndCancelScheduledReshareNUX;
-(void)showReshareNUXNow;
-(id<IGFeedReshareNUXManagerDatasource>)feedItemDatasource;
-(void)scheduleShowingReshareNUX;
-(void)setFeedItemDatasource:(id<IGFeedReshareNUXManagerDatasource>)arg1 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end


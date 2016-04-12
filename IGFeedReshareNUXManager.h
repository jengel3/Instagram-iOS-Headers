

@protocol IGFeedReshareNUXManagerDatasource;
@class UICollectionView;

@interface IGFeedReshareNUXManager : NSObject {

	id<IGFeedReshareNUXManagerDatasource> _feedItemDatasource;
	UICollectionView* _collectionView;
	int _maxNuxQuota;
	double _minNUXReshowInterval;
	double _minNUXReactivationIntervalAfterReshareAction;

}

@property (assign,nonatomic,__weak) id<IGFeedReshareNUXManagerDatasource> feedItemDatasource;              //@synthesize feedItemDatasource=_feedItemDatasource - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) int maxNuxQuota;                                                            //@synthesize maxNuxQuota=_maxNuxQuota - In the implementation block
@property (nonatomic,readonly) double minNUXReshowInterval;                                                //@synthesize minNUXReshowInterval=_minNUXReshowInterval - In the implementation block
@property (nonatomic,readonly) double minNUXReactivationIntervalAfterReshareAction;                        //@synthesize minNUXReactivationIntervalAfterReshareAction=_minNUXReactivationIntervalAfterReshareAction - In the implementation block
-(void)hideAndCancelScheduledReshareNUX;
-(void)showReshareNUXNow;
-(int)maxNuxQuota;
-(double)minNUXReactivationIntervalAfterReshareAction;
-(double)minNUXReshowInterval;
-(id<IGFeedReshareNUXManagerDatasource>)feedItemDatasource;
-(void)scheduleShowingReshareNUX;
-(void)markNUXAction;
-(void)setFeedItemDatasource:(id<IGFeedReshareNUXManagerDatasource>)arg1 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end


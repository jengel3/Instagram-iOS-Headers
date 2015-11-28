

@class IGFileCoordinator;

@interface IGExplorePhotosArchiver : NSObject {

	IGFileCoordinator* _trendsFileCoordinator;
	IGFileCoordinator* _marqueeFileCoordinator;
	IGFileCoordinator* _trendPlaceFileCoordinator;

}

@property (nonatomic,retain) IGFileCoordinator * trendsFileCoordinator;                  //@synthesize trendsFileCoordinator=_trendsFileCoordinator - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * marqueeFileCoordinator;                 //@synthesize marqueeFileCoordinator=_marqueeFileCoordinator - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * trendPlaceFileCoordinator;              //@synthesize trendPlaceFileCoordinator=_trendPlaceFileCoordinator - In the implementation block
-(IGFileCoordinator *)trendsFileCoordinator;
-(IGFileCoordinator *)trendPlaceFileCoordinator;
-(IGFileCoordinator *)marqueeFileCoordinator;
-(char)archiveTrends:(id)arg1 ;
-(char)archiveTrendPlace:(id)arg1 ;
-(char)archiveMarqueeItems:(id)arg1 ;
-(id)unarchiveTrends;
-(id)unarchiveTrendPlace;
-(id)unarchiveMarqueeItems;
-(void)setTrendsFileCoordinator:(IGFileCoordinator *)arg1 ;
-(void)setMarqueeFileCoordinator:(IGFileCoordinator *)arg1 ;
-(void)setTrendPlaceFileCoordinator:(IGFileCoordinator *)arg1 ;
@end


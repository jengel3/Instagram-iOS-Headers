

@class IGFileCoordinator;

@interface IGExplorePhotosArchiver : NSObject {

	IGFileCoordinator* _trendsFileCoordinator;
	IGFileCoordinator* _marqueeFileCoordinator;

}

@property (nonatomic,retain) IGFileCoordinator * trendsFileCoordinator;               //@synthesize trendsFileCoordinator=_trendsFileCoordinator - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * marqueeFileCoordinator;              //@synthesize marqueeFileCoordinator=_marqueeFileCoordinator - In the implementation block
-(IGFileCoordinator *)trendsFileCoordinator;
-(IGFileCoordinator *)marqueeFileCoordinator;
-(char)archiveTrends:(id)arg1 ;
-(char)archiveMarqueeItems:(id)arg1 ;
-(id)unarchiveTrends;
-(id)unarchiveMarqueeItems;
-(void)setTrendsFileCoordinator:(IGFileCoordinator *)arg1 ;
-(void)setMarqueeFileCoordinator:(IGFileCoordinator *)arg1 ;
@end


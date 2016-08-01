

@protocol IGAlbumDataControllerItemListener
@required
-(void)albumDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4;
-(void)albumDataController:(id)arg1 fetchItemsDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4;
-(void)albumDataController:(id)arg1 didReturnNoResultsForPK:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4;

@end


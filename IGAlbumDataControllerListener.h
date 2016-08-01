

@protocol IGAlbumDataControllerListener
@required
-(void)albumDataController:(id)arg1 didUpdateWithRefreshType:(int)arg2 updateDuration:(double)arg3;
-(void)albumDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4;

@end


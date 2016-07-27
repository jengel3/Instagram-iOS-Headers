

@protocol IGLocationDataSourceDelegate
@required
-(void)locationDataSourceDidFailToLocate;
-(void)locationDataSourceWasDeniedAccess;
-(void)locationDataSourceDidStartLoading;
-(void)locationDataSourceDidFinishLoadingDataSource:(id)arg1;
-(void)locationDataSourceDidFailLoading;

@end


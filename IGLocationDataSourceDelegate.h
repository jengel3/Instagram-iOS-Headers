

@protocol IGLocationDataSourceDelegate
@required
-(void)locationDataSourceDidStartLoading;
-(void)locationDataSourceDidFinishLoadingDataSource:(id)arg1;
-(void)locationDataSourceDidFailLoading;
-(void)locationDataSourceDidFailToLocate;
-(void)locationDataSourceWasDeniedAccess;

@end


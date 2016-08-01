

@protocol IGAlbumOverviewDelegate <NSObject>
@required
-(void)albumOverviewDidFinish:(id)arg1;
-(void)albumOverviewControllerWillSavePost:(id)arg1;
-(void)albumOverviewControllerWillDeletePost:(id)arg1;
-(void)albumOverviewControllerWillSharePost:(id)arg1;
-(void)albumOverviewControllerWillReportPost:(id)arg1;

@end


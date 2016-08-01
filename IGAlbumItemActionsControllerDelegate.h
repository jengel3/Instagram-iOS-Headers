

@protocol IGAlbumItemActionsControllerDelegate <NSObject>
@required
-(void)albumItemActionsControllerWillSavePost:(id)arg1;
-(void)albumItemActionsControllerWillDeletePost:(id)arg1;
-(void)albumItemActionsControllerWillSharePost:(id)arg1;
-(void)albumItemActionsControllerWillReportPost:(id)arg1;
-(void)albumItemActionsControllerDidFinish:(id)arg1;

@end


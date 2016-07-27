

@protocol IGAlbumItemActionsControllerDelegate <NSObject>
@required
-(void)albumItemActionsController:(id)arg1 didDeleteItem:(id)arg2;
-(void)albumItemActionsController:(id)arg1 didRemoveUploadForItem:(id)arg2;
-(void)albumItemActionsControllerDidFinish:(id)arg1;

@end


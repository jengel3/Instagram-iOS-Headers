

@protocol IGAlbumFocusCoordinatorDelegate <NSObject>
@required
-(void)albumFocusCoordinatorDidRewindPastFirstItem:(id)arg1;
-(void)albumFocusCoordinatorDidComplete:(id)arg1;
-(void)albumFocusCoordinator:(id)arg1 currentAlbumWasDeleted:(id)arg2;

@end


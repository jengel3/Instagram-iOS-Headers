

@protocol IGAlbumCreationViewControllerNavigationDelegate <NSObject>
@required
-(void)creationViewController:(id)arg1 didEnterState:(int)arg2;
-(void)creationViewController:(id)arg1 didFinishWithExitPoint:(int)arg2;
-(void)creationViewControllerDidSharePost:(id)arg1;
-(void)creationViewController:(id)arg1 sharePostDidDismissWithExitPoint:(int)arg2;

@end

